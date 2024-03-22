#include <iostream>
#include <cstring>
using namespace std;

class Pet{
public:
  Pet(){cout << "new pet," << endl;}
  Pet(const Pet& p){
    cout << "copy pet" << endl;
    // for(int i = 0; p.name[i]; i++)
    //   name[i] = p.name[i];
    strcpy(name, p.name);
  }
  virtual ~Pet(){
    cout << "deleted pet" << endl;
  } // 此处一定要写成虚析构否则不会删除成功
  virtual void crying() = 0;
protected:
  char name[30];
};

class Dog: public Pet{
public:
  Dog(const char *n){
    strcpy(name, n);
    cout << "dog: " << name << ", new" << endl;
  }
  Dog(const Dog& d){
    for(int i = 0; d.name[i]; i++)
      name[i] = d.name[i];
  }
  ~Dog(){
    cout << "leave dog, " << name << endl;
  }
  void crying(){
    cout << name << ", wawa!!" << endl;
  }

  friend void feed(const Dog& d){
    Dog d2 = Dog(d);
    cout << "Dog: " << d2.name << ", eat bone!!" << endl;
  }

// friend ostream& operator<<(ostream &out, Dog &d){
//   out << d.name << ", wawa!!" << endl;
//   return out;
// }
};

class Cat: public Pet{
public:
  Cat(const char* n){
    strcpy(name, n);
    cout << "cat: " << name << ", new" << endl;
  }
  Cat(){cout << "cat: ~~" << endl;}

  ~Cat(){
    cout << "leave cat, " << name << endl;
  }

  void crying(){
    cout << name << ", miaomiao~~!!" << endl;
  }

// friend ostream& operator<<(ostream& out, Cat &c){
//   out << c.name << ", miaomiao~~!!" << endl;
//   return out;
// }
};

// void feed(Dog dog){
//  dog.eat();
// }
int main(){
  Pet *pets[5];
  cout << "===============coming===========" << endl;

  pets[0] = new Dog("wangcai");
  pets[1] = new Dog("dahuang");
  pets[2] = new Cat("xiaomao");
  pets[3] = new Cat("huhu");
  pets[4] = new Cat();
  cout << "==============crying==========" << endl;
  for(int i = 0 ;i < 5; i++){
    pets[i]->crying();
    // if(dynamic_cast<Dog*>(pets[i]) != nullptr)
    //   cout << dynamic_cast<Dog*>(pets[i]) << endl;
    // else if(dynamic_cast<Cat*>(pets[i]) != nullptr)
    //   cout << dynamic_cast<Cat*>(pets[i]) << endl;
  }
  cout << "==============feed=============" << endl;
  feed(*dynamic_cast<Dog*>(pets[0]));
  cout << "=============leave============" << endl;
  for(int i = 0 ;i < 5; i++){
    delete pets[i];
  }
  return 0;
}
