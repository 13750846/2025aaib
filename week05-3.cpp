//week05-3.cpp
//LeeCode 2206. Divide Array Into Equal Pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] = {}; //�_501��С����У�ȫ���a0
        int odd = 0;
        for(int i=0; i<nums.size(); i++){
            int now = nums[i]; //�F��̎��Ĕ���
            a[now]++; //now ����1��
            if(a[now] % 2 == 0)odd--; //����֮������������1���攵
            else odd++; //��һ���攵
        }
        if(odd==0) return true;
        else return false;
    }
};
