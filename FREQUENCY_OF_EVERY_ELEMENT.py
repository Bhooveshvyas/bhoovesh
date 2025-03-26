def table(n):
    for i in range(1,11):
        print(f"{n}X{i}={n*i}")
from collections import Counter
mylist = [1,2,3,4,2,14,32,2,32,14,14]
dictionary = Counter(mylist)
for i in dictionary:
    print(i,":",dictionary[i])

print("\n")
print(table(7))