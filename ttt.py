file_name = "EMPLOYEE_DATA.txt"
try:
    with open(file_name,'x') as file:
        file.write("NAME - BHOOVESH,SALARY - 1000000,DEPT.NAME - PWD,ID-23KOSWEEI23\n")
        file.write("NAME - PINKI,SALARY - 1000000,DEPT.NAME - RWD,ID-23KOEWOPI23\n")
        file.write("NAME - ANIKET,SALARY - 1000000,DEPT.NAME - YWD,ID-23KOSWEIR23\n")
        file.write("NAME - PRIYANSHU,SALARY - 1000000,DEPT.NAME - UWD,ID-23KOJDGSI23\n")
        file.write("NAME - AYUSH,SALARY - 1000000,DEPT.NAME - TWD,ID-23KOOKFI2Z3\n")
except FileExistsError:
    print("FILE ALREADY EXISTS")
with open(file_name,'r') as file:
    lines = file.readlines()
for i in lines:
    print(i)
emp_id = "23KOSWEIR23"

with open(file_name,'w') as file:
    for i in lines:
        if emp_id in i:
            temp = i
            for j in temp:
                