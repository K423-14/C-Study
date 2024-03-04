#include<iostream>

using namespace std;

class Clock{

  public:
    Clock(int h, int m, int s);
    Clock();

  private:
    int hour, minute, second;

};

Clock::Clock():hour(0), minute(0), second(0){
}  // 更好
 
Clock::Clock(int h, int m, int s):hour(h), minute(m), second(s){
} // 三个参数的初始化

// Clock::Clock(){
//   hour = 0;
//   minute = 0;
//   second = 0;
// }


int main(){
  Clock c;
}