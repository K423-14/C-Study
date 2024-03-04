#include<iostream>

using namespace std;

class CPU{
public:

CPU(){
  cout << "CPU构造函数" << endl;
}

  virtual void calculate() = 0;

virtual ~CPU(){
  cout << "CPU析构函数" << endl;
}

};

class Memory{
public:
  virtual void storage() = 0;
};

class GPU{
public:
  virtual void display() = 0;
};

class Computer{
public:

  Computer(CPU * cpu, GPU * gpu, Memory * memory){
    m_cpu = cpu;
    m_gpu = gpu;
    m_memory = memory;
    cout << "Computer构造函数" << endl;
  }

  ~Computer(){  // 父类指针释放子类对象（指针CPU, 对象intelcpu）
    delete m_cpu, m_gpu, m_memory;
    m_cpu = NULL;
    m_gpu = NULL;
    m_memory = NULL;
    cout << "Computer析构函数" << endl;
  }

  void assemble(){
    m_cpu->calculate();
    m_gpu->display();
    m_memory->storage();
  }

private:  // 抽象类用指针接收
  CPU * m_cpu;
  GPU * m_gpu;
  Memory * m_memory;

};

class InterCPU : public CPU{
public:

  InterCPU(){
    cout << "InterCPU构造函数" << endl;
  }

  ~InterCPU(){
    cout << "InterCPU析构函数" << endl;
  }

  void calculate(){
    cout << "InterCPU正在计算！！！" << endl;
  }
};

class InterGPU : public GPU{
public:

  // InterCPU(){
  //   cout << "InterCPU构造函数" << endl;
  // }

  // virtual ~InterCPU(){
  //   cout << "InterCPU析构函数" << endl;
  // }

  void display(){
    cout << "InterGPU正在显示！！！" << endl;
  }
};


class InterMemory : public Memory{
public:

  // InterCPU(){
  //   cout << "InterCPU构造函数" << endl;
  // }

  // virtual ~InterCPU(){
  //   cout << "InterCPU析构函数" << endl;
  // }

  void storage(){
    cout << "InterMemory正在存储！！！" << endl;
  }
};




int main(){
  Computer c1(new InterCPU, new InterGPU, new InterMemory);
  c1.assemble();
  return 0;
}