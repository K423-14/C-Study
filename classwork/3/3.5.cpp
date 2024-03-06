#include<iostream>

#include<cmath>  // c++数学库

using namespace std;

double tsin(double x){
  int n(2);
  double g = 0;
  double t = x;
  do{
    g += t;
    t = -1 * t * x * x / (2 * n - 1) / (2 * n - 2);
    
    n++;
  }while (t > 1e-10 || t < -1e-10);
  return g;
}

int main(){
  cout << tsin(3.1415926);
  return 0;
}