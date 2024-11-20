class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans, total = 0,0 #�̤j��total and �ثe��total
        counter = Counter()
        for i in range(k): #���X�e��k�ӼƦr
            num = nums[i]
            counter[num] += 1
            total += num
        if len(counter)==k: ans = max(ans,total)
        # �W���u�B�z�Ĥ@�դ���ΡA �U���n�B�z����
        for i in range(k,len(nums)):
            left, right = nums[i-k],nums[i] #�����ª� �k��s��
            counter[left] -= 1 #���
            counter[right] += 1 #�[�k��
            total = total + nums[i] -nums[i-k] #�[�k��s���Ʀr ��k���ª��Ʀr
            if counter[left]==0: del counter[left] #�0�N�R��
            if len(counter)==k: ans = max(ans,total)
        return ans
