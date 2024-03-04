#include<iostream>

using namespace std;

class Point{
public:
  void setLoc(int a, int b){
    x = a;
    y = b;
  }
  int getX(){
    return x;
  }
  int getY(){
    return y;
  }
private:
  int x;
  int y;
};

class Circle{
public:
  void setLoc(int a, int b){
    x = a;
    y = b;
  }
  void setR(int c){
    r = c;
  }
  int getX(){
    return x;
  }
  int getY(){
    return y;
  }
  int getR(){
    return r;
  }
  int locRelation(Point &d){
    if((d.getX() - x) * (d.getX() - x) + (d.getY() - y) * (d.getY() - y) > r * r)  // 园外
      return 1;
    else if((d.getX() - x) * (d.getX() - x) + (d.getY() - y) * (d.getY() - y) < r * r)  // 圆内
    return 3;
    else
    return 2;
  } 

private:
  int x;
  int y;
  int r;
};

int main(){
  Point p;
  Circle c;

  c.setLoc(0, 0);
  c.setR(5);
  p.setLoc(3, 5);


  Point &q = p;
  cout << c.locRelation(q);

  return 0;
}