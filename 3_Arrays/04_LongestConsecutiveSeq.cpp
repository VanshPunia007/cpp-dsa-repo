// https://takeuforward.org/plus/dsa/problems/longest-consecutive-sequence-in-an-array

#include <bits/stdc++.h>
using namespace std;

int findLongestConsecutiveSeq(vector<int> nums){
    sort(nums.begin(), nums.end());
    int maxi = 1;
    int curr = 1;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i]-nums[i-1] == 1){
            curr++;
            maxi = max(maxi, curr);
        }else{
            curr = 1;
        }
    }
    return maxi;
}

int main() {
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1}; // 100, 4, 200, 1, 3, 2 -> 4
    cout << "Length: " << findLongestConsecutiveSeq(nums)<<endl;
    return 0;
}