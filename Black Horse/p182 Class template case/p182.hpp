#pragma once  // 只引用一次
#include<iostream>

using namespace std;

// 类外声明友元函数需要先让他知道类（即先声明类）
template<class T>
class MyArray;
// 还需要类模板参数列表
template<class T>
int showCapacity(const MyArray<T>& arr){
  if(arr.pAddress != nullptr)
    return arr.myCapacity;
  else
    throw std::out_of_range("Index out of bounds");
}

template <class T>
class MyArray{
public:
  // 构造函数
  MyArray(int capacity):myCapacity(capacity){
  // cout << "MyArray有参构造调用" << endl;
    pAddress = new T[capacity];
    mySize = 0;
  }
  // 析构函数
  ~MyArray(){
    if(pAddress != nullptr){
      // cout << "MyArray析构函数调用" << endl;
      delete[] pAddress;  // 注意释放数组
      pAddress = nullptr;
    }
  }
  // 拷贝构造
  MyArray(const MyArray &arr){  // 注意此处可以防止原数组被破坏使用const
    // cout << "MyArray拷贝构造调用" << endl;
    mySize = arr.mySize;
    myCapacity = arr.myCapacity;
    pAddress = new T[myCapacity];
    // 深拷贝
    for(int i = 0; i < myCapacity; i++)
      pAddress[i] = arr.pAddress[i];
  }

  // 重载=运算符防止浅拷贝
  MyArray& operator=(const MyArray &arr){  // 此处返回引用是为了链式编程
    // cout << "MyArray重载=调用" << endl;
    // 考虑之前的数组，需要先初始化清空
    if(pAddress != nullptr){
      delete[] pAddress;  // 注意释放数组
      pAddress = nullptr;
    }
    mySize = arr.mySize;
    myCapacity = arr.myCapacity;
    pAddress = new T[myCapacity];
    // 深拷贝
    for(int i = 0; i < myCapacity; i++)
      pAddress[i] = arr.pAddress[i];
    // 最后返回
    return *this;
    }

    // 尾插法
    bool Push_Back(const T& t){
    if(mySize < myCapacity){
      pAddress[mySize++] = t;
      return true;
    }
    else
      return false;
    }
    // 尾删法
    bool Pop_Back(){
    if(mySize > 0){
      mySize--;
      return true;
    }
    else
      return false;
    }
    // 访问元素
    // void showElement(int index){
    // if(index < mySize)
    //   cout << pAddress[index] << endl;
    // }

    // 此处访问元素使用重载[]
    T& operator[](int index){
      if(index < mySize)
        return pAddress[index];
      else
        throw std::out_of_range("Index out of bounds");
    }

    // 获取数组个数与容量
    friend int showSize(const MyArray& arr){
      if(arr.pAddress != nullptr)
        return arr.mySize;
        // cout << "The capacity of your array is: " << arr.myCapacity << endl;
        // cout << "The size of your array is: " << arr.mySize << endl;
      else
        throw std::out_of_range("Index out of bounds");
    }
    // 类外实现模板类友元函数
    friend int showCapacity<>(const MyArray& arr);  // 此处需要加<>，告诉编译器这是个模板

private:
  T* pAddress;
  int myCapacity;
  int mySize;
};

