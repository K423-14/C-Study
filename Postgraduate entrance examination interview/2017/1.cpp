#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void myWrite(){
  int a[3]={0,1,2};
  ofstream fs("3.txt", ios::out);
  for(int i=0;i<3;i++){
    fs<<a[i];
  }
  fs.close();
}

int main(){
  myWrite();
  int a[3];
  fstream fs;
  fs.open("3.txt", ios::in); // 修改文件名为 "3.txt"
  int i = 0;
  char c;
  while((c = fs.get()) != EOF){ // 修正循环条件
    a[i]=int(c);
    cout << a[i] << endl;
    i++;
  }
  fs.close();
  
  return 0;
}
