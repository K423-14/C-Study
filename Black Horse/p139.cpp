#include<iostream>

using namespace std;

class Base{
public:
  void boil(){
    cout << "煮水开始！！！" << endl;
  }

  virtual void brew() = 0;

  void pour(){
    cout << "倒入杯中！！！" << endl;
  } 

  virtual void add() = 0;

  void makeDrink(){
    boil();
    brew();
    pour();
    add();
  }

};

class coffee : public Base{
public:
  void brew(){
    cout << "冲泡咖啡豆" << endl;
  }
  void add(){
    cout << "加入奶与糖" << endl;
  }
};

void doWork(Base * b){
  b->makeDrink();
  delete b;  // 释放
}

int main(){
  doWork(new coffee);
  
  return 0;
}