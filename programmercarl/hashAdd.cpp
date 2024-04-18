#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> m;
    vector<int> res;
    for(int i = 0; i < nums.size(); i++){
        if(m[target - nums[i]] == 0)
            m.insert(make_pair(nums[i], i+2));  // 此处+1是为了让位置从1开始，避免判断条件失效
        else{
            res.push_back(i);
            res.push_back(m[target - nums[i]] - 1);
        }
    }
    return res;
}


int main(){
  vector<int> v;
  vector<int> res;
  v.push_back(3);
  v.push_back(3);

  res = twoSum(v, 6);

  if(res.size() > 0)
    cout << res[0] << " " << res[1] << endl;

  return 0;
}