from typing import List

class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        ans = []
        for tuple in list(zip(nums[0:n], nums[n:2*n])):
            for n in tuple:
                ans.append(n)
        return ans

'''
        res = []
        for i in range(n):
            res.append(nums[i]) 
            res.append(nums[i + n])
        return res
'''