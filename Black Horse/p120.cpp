#include<iostream>
#include<string>

using namespace std;


class Building;

class goodGay{
public:
  goodGay();  // 此处创建建筑物
  Building * building;
  void visit();
};

class Building{
  friend void goodGay::visit();
  private:
    string bedroom;
  public:
    Building();
    string sittingroom;
};

Building::Building(){
  bedroom = "卧室";
  sittingroom = "客厅";
}

goodGay::goodGay(){
  building = new Building;
}

void goodGay::visit(){  // 此处前面加void
  cout << "基友正在访问" << building->bedroom << endl;

}


int main(){
  goodGay gg;
  gg.visit();
  return 0;
}