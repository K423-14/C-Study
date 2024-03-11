#include<iostream>

using namespace std;

enum Color {WHITE, BLACK = 100, RED, BLUE, GREEN};

enum Weekday {SUNDAY, MONDAY, TUESDAY, WENSDAY, THUSDAY, FRIDAY, SATURDAY};

int main(){
  cout << BLUE << endl;
  int weekday;
  weekday = MONDAY;
  cout << MONDAY << endl;
  return 0;
}