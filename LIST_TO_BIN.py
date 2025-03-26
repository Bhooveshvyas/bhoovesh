def to_bin(num):
    ans = ""
    while num > 0:
        ans = str(int(num % 2)) + ans
        num = num // 2
    return ans


my_list = []
n = int(input("ENTER N : "))
x = 0
for i in range(n):
    x = int(input())
    my_list.append(x)
ans = []
for i in my_list:
    temp = to_bin(i)
    ans.append(to_bin(i))
print(ans)
