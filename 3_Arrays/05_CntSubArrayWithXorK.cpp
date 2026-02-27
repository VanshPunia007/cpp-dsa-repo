#include <bits/stdc++.h>
using namespace std;
long subarrayXor(vector<int> &arr, int k)
{
    int preXOR = 0, cnt = 0;
    int n = arr.size();
    unordered_map<int, int> xorCnt; // preXOR, cnt
    xorCnt[0] = 1;
    for (int i = 0; i < n; i++)
    {
        // x = preXOR ^ k
        preXOR ^= arr[i];

        int x = preXOR ^ k;
        if (xorCnt.find(x) != xorCnt.end())
            cnt += xorCnt[x];

        if (xorCnt.find(preXOR) == xorCnt.end())
            xorCnt[preXOR] = 1;
        else
            xorCnt[preXOR]++;
    }
    return cnt;
}
int main()
{
    vector<int> nums = {4,2,2,6,4}; 
    cout << "Cnt: " << subarrayXor(nums, 6)<<endl;
    return 0;
}