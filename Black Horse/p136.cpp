#include<iostream>

using namespace std;

class Animal{

public:
  // 静态多态
  // void speak(){
  //   cout << "动物在叫" << endl;
  // }

  // 动态多态
  virtual void speak(){
    cout << "动物在叫" << endl;
  }

};

class Cat : public Animal{

public:
  void speak(){
    cout << "喵喵喵" << endl;
  }
};

void doSpeak(Animal & animal){
  animal.speak();
}

int main(){
  Cat c1;
  doSpeak(c1);
  return 0;
}