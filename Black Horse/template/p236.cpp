#include<iostream>
#include<vector>
#include<map>
#include<ctime>
#include<string>

using namespace std;

enum department{GAME_PLANNING, GAME_ART, GAME_PROGRAMMING};

class Person{
public:
  string name;
  int wage;
  department dept;
  Person(string name, int wage, department d): name(name), wage(wage), dept(d){}
};


int main(){
  // 随机数种子
  srand((unsigned)time(NULL));

  vector<Person> persons;
  string names = "ABCDEFGHIJ";
  for(int i = 0; i < 10; i++)
    persons.push_back(Person(("Staff_" + string(1, names[i])), rand() % 10000 + 10000, department(rand() % 3)));

  // for(vector<Person>::iterator it = persons.begin(); it != persons.end(); it++)
  //   cout << it->name << " " << it->wage << " " << it->dept << endl;

  multimap<department, Person> staffs;
  for(vector<Person>::iterator it = persons.begin(); it != persons.end(); it++)
    staffs.insert(pair<department, Person>(it->dept, *it));
  
  // 因为升序排列，可以使用计数输出
  multimap<department, Person>::iterator it = staffs.begin();
  int count = 0;
  int count0 = staffs.count(GAME_PLANNING);
  int count1 = staffs.count(GAME_ART);
  int count2 = staffs.count(GAME_PROGRAMMING);

  cout << "GAME_PLANNING: " << endl;
  for(; count < count0; it++, count++)
    cout << "Staff Name: " << it->second.name << " Wage: " << it->second.wage << endl;
  cout << "GAME_ART: " << endl;
  for(; count < count0 + count1; it++, count++)
    cout << "Staff Name: " << it->second.name << " Wage: " << it->second.wage << endl;
  cout << "GAME_PROGRAMMING: " << endl;
  for(; count < count0 + count1 + count2; it++, count++)
    cout << "Staff Name: " << it->second.name << " Wage: " << it->second.wage << endl;

  return 0;
}
