#include<iostream>
#include<string>

using namespace std;

class Student{
public:
  long long int id;
  string name;

  void show(){
    cout << id << " " << name << endl;
  }

  void setId(long long int myid){
    id = myid;
  }

};

int main(){

  Student s1;

  s1.setId(20201071468);
  s1.name = "于江阳";

  s1.show();

  return 0;
}