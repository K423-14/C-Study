#include<iostream>
#include<string>

using namespace std;

int main(){
  int start = 0;
  // int end = 0;
  // char a[1000] = {'1', '2', ' ', '1'};
  // char a[1000];
  string a;
  getline(cin, a);
  for(int i = 0; a[i]; i++){
    if(a[i] == ' '){
      for(int j = start; j < i; j++)
        cout << a[j];
      cout << " " << (i - start) << endl;
      start = i + 1;
    }
  }
  int j;
  for(j = start; a[j]; j++)
    cout << a[j];
  cout << " " << (j - start) << endl;
  return 0;
}