// #include<iostream>

// using namespace std;

// void split(float x, int* intPart, float* floatPart){
//   *intPart = static_cast<int>(x);
//   *floatPart = x - *intPart;
// }

// int main(){
//   float x = 12.32;
//   int intPart;
//   float floatPart;
//   split(x, &intPart, &floatPart);
//   cout << intPart << endl << floatPart << endl;

//   return 0;
// }

#include<iostream>

using namespace std;

void split(float x, int* intPart, float* floatPart){
  *intPart = static_cast<int>(x);
  *floatPart = x - *intPart;
}

int main(){
  float x = 12.32;
  int *intPart = new int; // 为 intPart 分配内存空间
  float *floatPart = new float; // 为 floatPart 分配内存空间
  split(x, intPart, floatPart);
  cout << *intPart << endl << *floatPart << endl;

  delete intPart; // 释放 intPart 内存
  delete floatPart; // 释放 floatPart 内存

  return 0;
}

