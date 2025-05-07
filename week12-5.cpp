/// week12-5.cpp
/// LeeCode 1920. Build Array from Permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size(); /// 陣列的大小
        vector<int> ans(N); /// C++的陣列，大小設成N
        /// 題目說 for迴圈，對所有的i
        for(int i=0; i<N; i++){
            ans[i]=nums[nums[i]]; /// 照著公式做
        }
        return ans;
    }
};
