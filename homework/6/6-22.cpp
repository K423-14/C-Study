#include<iostream>
#include<string>

using namespace std;

void rev(string& s, int start, int end){
  if(start < end)
    rev(s, start+1, end-1);
  else
    return;
  swap(s[start], s[end]);
}

void reverse(string &s){
  rev(s, 0, s.size()-1);
}

int main(){
  string s;
  s = "1234qwer";
  reverse(s);
  cout << s << endl;
  return 0;
}
