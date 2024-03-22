#include<iostream>

using namespace std;

void BubbleSort(int *arr, int len){
  for(int i = 0; i < len; i++){
    bool ifswap = false;
    for(int j = 0; j < len - i - 1; j++){
      if(arr[j] < arr[j+1]){
        swap(arr[j], arr[j+1]);
        ifswap = true;
      }
    }
    if(!ifswap)
      break;
  }
}

int main(){
  int a[] = {1, 2, 9, 5, 10};
  BubbleSort(a, 5);
  for(int i = 0; i <5; i++)
    cout << a[i] << endl;
  return 0;
}