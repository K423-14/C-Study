#include<iostream>
#include<string>

using namespace std;

class myAdd{
public:
  myAdd():count(0){};
  int operator()(int a, int b){
    count++;
    return a + b;
  }
  int count;
};

int callFunc(myAdd &add, int a, int b){
  return add(a, b);
}

int main(){
  // 先实例化一个对象，然后调用这个对象，这个对象就是一个函数对象
  myAdd useAdd;
  cout << useAdd(1, 2) << endl;
  cout << useAdd(3, 4) << endl;
  cout << useAdd(5, 6) << endl;
  cout << useAdd(7, 8) << endl;
  cout << useAdd(9, 10) << endl;

  cout << "Count: " << useAdd.count << endl;

  // 通过对象引用调用函数对象
  callFunc(useAdd, 1, 2);
  callFunc(useAdd, 3, 4);
  callFunc(useAdd, 5, 6);

  cout << "Count: " << useAdd.count << endl;

  return 0;
}