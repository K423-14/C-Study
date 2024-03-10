
#include<iostream>
#include<vector>

using namespace std;
/*
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> a(2, -1);
    int low = 0;
    int high = nums.size() - 1;
    int mid, midl, midh;
    while(low < high){
        mid = low + (high - low) / 2;
        if(nums[mid] > target)
            high = mid - 1;
        else if(nums[mid] < target)
            low = mid + 1;
        else
            break;
    }

    midh = mid;
    midl = mid;
    low = 0;
    high = nums.size() - 1;

    while(low < midl){
        a[0] = low + (midl - low) / 2;
        if(nums[a[0]] == target)
            midl = a[0] - 1;
        else if(nums[a[0]] < target)
            low = a[0] + 1;
    }

    while(midh < high){
        a[1] = midh + (high - midh) / 2;
        if(nums[a[1]] == target)
            midh = a[1] + 1;
        else if(nums[a[1]] > target)
            high = a[1] - 1;
    }

    return a;
}

int main(){
  vector<int> a(6);
  a[0] = 5;a[1] = 7;a[2] = 7;a[3] = 8;a[4] = 8;a[5] = 10;

  cout << searchRange(a, 8)[0] << searchRange(a, 8)[1];
  return 0;
}
*/

class Solution {
public:

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a(2, -1);
        int low = 0;
        int high = nums.size() - 1;
        int mid, midl, midh;
        while(low < high){
            mid = low + (high - low) / 2;
            if(nums[mid] > target)
                high = mid - 1;
            else if(nums[mid] < target)
                low = mid + 1;
            else
                break;
        }

        midh = mid;
        midl = mid;
        low = 0;
        high = nums.size() - 1;

        while(low < midl){
            a[0] = low + (midl - low) / 2;
            if(nums[a[0]] == target)
                midl = a[0] - 1;
            else if(nums[a[0]] < target)
                low = a[0] + 1;
        }

        while(midh < high){
            a[1] = midh + (high - midh) / 2;
            if(nums[a[1]] == target)
                midh = a[1] + 1;
            else if(nums[a[1]] > target)
                high = a[1] - 1;
        }

        return a;
    }
};