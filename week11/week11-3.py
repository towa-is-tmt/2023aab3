class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans, total = 0,0 #最大的total and 目前的total
        counter = Counter()
        for i in range(k): #取出前面k個數字
            num = nums[i]
            counter[num] += 1
            total += num
        if len(counter)==k: ans = max(ans,total)
        # 上面只處理第一組毛毛蟲， 下面要處理後續
        for i in range(k,len(nums)):
            left, right = nums[i-k],nums[i] #左邊舊的 右邊新的
            counter[left] -= 1 #減左邊
            counter[right] += 1 #加右邊
            total = total + nums[i] -nums[i-k] #加右邊新的數字 減右邊舊的數字
            if counter[left]==0: del counter[left] #減成0就刪掉
            if len(counter)==k: ans = max(ans,total)
        return ans
