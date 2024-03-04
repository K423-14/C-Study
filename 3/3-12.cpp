// 交换，取地址符号妙用

inline void swap(int &a, int &b){
  int t = a;
  a = b;
  b = a;
}