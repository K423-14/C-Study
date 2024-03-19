#include<iostream>

using namespace std;

class Car;

class Boat{
  friend float getTotalWeight(Boat& b, Car& c);
  float weight;
public:
  Boat(float w):weight(w){}
};

class Car{
  friend float getTotalWeight(Boat& b, Car& c);
  float weight;
public:
  Car(float w):weight(w){}
};

float getTotalWeight(Boat& b, Car& c){
  return b.weight + c.weight;
}


int main(){
  Car c1(4);
  Boat b1(5);

  cout << getTotalWeight(b1, c1) << endl;
  return 0;
}