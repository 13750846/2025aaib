#week04-2.py�O����Leecode�D���D Easy�D(�G�X�@)
#Leecode 2529. Maximum Count of Positive Integar and Negative Integar
#��X���X�Ӿ�ơA���X�ӭt�ơA�j�����Ӽƶq�^��
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0
        for i in range(len(nums)):
            if nums[i] > 0: pos +=1
            if nums[i] < 0: neg +=1

        return max(pos,neg)N
