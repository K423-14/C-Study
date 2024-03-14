#include<iostream>

using namespace std;

template <typename T>
void selectSort(T& a, int len){
  int max = 0;
  for(int i = 0; i < len; i++){
    max = i;
    for(int j = i; j < len; j++){
      if(a[i] < a[j])
        max = j;
    }
    swap(a[i], a[max]);
  }
}

int main(){
  int a[] = {1, 2, 3, 4, 5};
  int lenA = sizeof(a) / sizeof(int);
  selectSort(a, lenA);
  for(int i = 0; i < lenA; i++)
    cout << a[i] << endl;

  char b[] = "abcde";
  int lenB = sizeof(b) / sizeof(char);
  selectSort(b, lenB);
  for(int i = 0; i < lenB; i++)
    cout << b[i] << endl;

  return 0;
}