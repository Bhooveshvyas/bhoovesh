s = input("ENTER A STRING : ")
i = 0
j = 0
ans = 0
n = len(s)
my_set = set()
start = 0
while j < n:
    while s[j] in my_set:
        my_set.remove(s[i])
        i += 1
    if j - i + 1 > ans:
        ans = j - i + 1
        start = i
    my_set.add(s[j])
    j += 1
print(s[start : start + ans])
