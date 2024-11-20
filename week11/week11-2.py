#week11-2.py
nums = [1,1,1,2,3] #輸入資料

from collections import Counter
counter = Counter() #左邊小寫 右邊大寫
for num in nums:
  counter[num] += 1
print(counter) #印出統計結果
