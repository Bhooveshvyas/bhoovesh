# def fibo(n):
#     if n == 1:
#         return 0
#     if n == 2:
#         return 1
#     return fibo(n-1)+fibo(n-2)
# n=int(input())
# # print(fibo(n))
# for i in range(1,n+1):
#     print(fibo(i),end=" ")
# print("\n")
# a=0
# b=1
# fib=a+b
# print(a,end=" ")
# print(b,end=" ")
# for i in range(1,n-1):
#     print(fib,end=" ")
#     a=b
#     b=fib
#     fib=a+b
# bubble->
lst = [2,5,4,1,0,0,9,2]
n=len(lst)
for j in range(n):
    for i in range(0,n-j-1):
        if lst[i]>lst[i+1]:
            temp = lst[i+1]
            lst[i+1]=lst[i]
            lst[i]=temp
for i in lst:
    print(i,end=" ")
print("\n")
# selection sort
lst2 = [2,5,4,1,0,0,9,2]
m=len(lst2)
for i in range(m):
    for j in range(i+1,m):
        if lst2[i] > lst2[j]:
            lst2[i],lst2[j]=lst2[j],lst2[i]

for i in lst2:
    print(i,end=" ")
print("\n")

# insertion sort

lst3 = [2,5,4,1,0,0,9,2]
o=len(lst2)

for i in range(0,o):
    j=i
    while j>=1 and lst3[j]<lst3[j-1]:
        lst3[j],lst3[j-1]=lst3[j-1],lst3[j]
        j-=1


for i in lst3:
    print(i,end=" ")
print("\n")

#  binary SEARCH
lst4 = [0,0,1,4,5,9]
b=len(lst4)
s=0
e=b-1
t=4
ans=0
while s<=e:
    mid = s+(e-s)//2
    if t==lst4[mid]:
        ans = mid
        break
    elif t < lst4[mid]:
        e=mid-1
    else:
        s=mid+1
print(ans)

def chang_string(str):
    str += "world"

my_str="HELLO"
chang_string(my_str)
print(my_str)
my_dict = {'name': 'John', 'age': 25}
print(my_dict.get('name'))  # Output: John
print(my_dict.get('city')
) 