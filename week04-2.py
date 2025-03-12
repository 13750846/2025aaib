#week04-2.py是今天Leecode挑戰題 Easy題(二合一)
#Leecode 2529. Maximum Count of Positive Integar and Negative Integar
#找出有幾個整數，有幾個負數，大的那個數量回傳
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0
        for i in range(len(nums)):
            if nums[i] > 0: pos +=1
            if nums[i] < 0: neg +=1

        return max(pos,neg)N
