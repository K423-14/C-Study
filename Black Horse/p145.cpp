#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Person{
public:
  char m_Name[64];
  int m_Age;
};

void build(fstream &fs){
    
  fs.open("test.txt", ios::out);

  fs << "hhh" << endl;

  fs << "hhh" << endl;

  fs << "hhh" << endl;

  cout << fs.is_open() << endl;

  fs.close();

}

void read(fstream &fs){
  
  fs.open("test.txt", ios::in);

  // 1
  // char bfs[1024] = { 0 };
  // while(fs >> bfs){
  //   cout << bfs << endl;
  // }

  //2
  // char bfs[1024] = {0};
  // while(fs.getline(bfs, sizeof(bfs))){
  //   cout << bfs << endl;
  // }

  //3
  // string bfs;
  // while(getline(fs, bfs)){
  //   cout << bfs << endl;
  // }

  //4
  char c;
  while((c = fs.get()) != EOF){  // end of file
    cout << c;
  }

  fs.close();

}

void buildBin(fstream &fs){
  
  Person p = {"张三", 18};  // 列表初始化
  
  fs.open("test.txt", ios::binary | ios::out);
  
  fs.write((const char *) &p, sizeof(Person));  // 强转

  fs.close();

}

void readBin(fstream &fs){

  Person p;

  fs.open("test.txt", ios::in | ios::binary);

  if(!fs.is_open()){
    cout << "读取文件失败！！！" << endl;
    return;
  }

  fs.read((char *)&p, sizeof(Person));

  cout << "年龄: " << p.m_Age << endl  << "名字：" << p.m_Name << endl;

  fs.close();

}

int main(){

  fstream fs;
  // fstream fs("test.txt", ios::binary | ios::out);

  // build(fs);
  // read(fs);

  buildBin(fs);
  readBin(fs);

  return 0;
}