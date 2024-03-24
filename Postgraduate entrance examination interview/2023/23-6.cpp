#include <iostream>
#include <string>
// #include <ctime> // 这一行是自己加的，原题没有
using namespace std;  // 设空

void genterator(int *arr, int size){
  for(int i = 0 ;i < size; i++){
    arr[i] = rand(); // 设空
  }
}

void bubble(int *arr, int size){
  for(int i = 0; i < size; i++){
    bool flag = false;
    for(int j = 0 ; j < size - 1 - i; j++){ // size-1-i设空
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        flag = true;
      }
    }
    if(!flag)
      break;
  }
}

string transform(int num){
  string s;
  if(num == 0)
    s = "0"; // 设空 
  while(num != 0){
    int d = num % 16;
    if(d < 10)
      s = char(d + '0') + s;
    else{
      d = d - 10; // 空
      s = char(d + 'A') + s;
    }
    num = num / 16; // 空
  }
  return s;
}
int main(){
  // srand((unsigned)time(NULL)); // 这一行是自己加的，原题没有
  int size = rand(); // 空
  int a[size];
  genterator(a, size);
  bubble(a, size);
  for(int i = 0 ;i < size; i++)
    cout << transform(a[i]) << endl;
  return 0;
}
