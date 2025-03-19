//week05-3.cpp
//LeeCode 2206. Divide Array Into Equal Pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] = {}; //開501大小的陣列，全部補0
        int odd = 0;
        for(int i=0; i<nums.size(); i++){
            int now = nums[i]; //現在處理的數字
            a[now]++; //now 增加1次
            if(a[now] % 2 == 0)odd--; //加完之後是整數，少1個奇數
            else odd++; //多一個奇數
        }
        if(odd==0) return true;
        else return false;
    }
};
