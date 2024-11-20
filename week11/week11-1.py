#week11-1.py 主題 Hash Map Hash Set
table = {} #python 用大括號 代表字典 也就是 Hash table(Hash Map Hash Set)
table[9977341] = 9
table[4433997] = 4

print(table[9977341]) # 會印出 9
print(table[4433997]) # 會印出 4

if 0 not in table:
  print("table[0]不存在")
