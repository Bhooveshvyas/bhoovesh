lst = [1,2,3,4,5,6,7,8,9,0]
lst2=[]
for i in lst:
    temp = bin(i)[2:]
    lst2.append(temp)
for i in lst2:
    print(i)

a=int(input("ENTER A NUMBER : "))
b=int(input("ENTER A NUMBER : "))
try:
    c=a/b
    print(c)
except:
    print(f"HENCE B = {b}, SO DIVISION IS NOT POSSIBLE.")
else:
    print("DIVISION = ",a/b)