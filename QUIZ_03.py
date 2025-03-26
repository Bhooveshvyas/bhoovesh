# file_name = "employee.txt"
# try:
#     with open(file_name,'x') as file:#x jo hai woh insure krta hai ki file exist krti hai ki nahi 
#         file.write("NAME - BHOOVESH VYAS")
#         file.write("DOB - 08/05/2004")
#         file.write("COMPANY NAME - XYZ COMPANY")
#     print("DETAILS FILLED SUCCESSFULLY!!..")
# except FileExistsError:
#     print("FILE EXIST ALREADY !!...")
# with open(file_name,'r') as file:#ab file mein read krke sari info fetch krenge
#     lines   = file.readlines()
# with open(file_name,'w') as file:
#     for line in lines:
#         if "DOB" in line:
#             line = line.replace("/","-")
#         file.write(line)
# print("DATE OF BIRTH UPDATED SUCCESSFULLY.")
# file_name = "employee.txt"
# try:
#     with open(file_name,'x') as file:
#         file.write("NAME - BHOOVESH VYAS")
#         file.write("COMPANY - XYZ ")
#         file.write("DATE OF BIRTH - 08/05/2004")
#     print("DETAILS FILLED SUCCESSFULLY")
# except FileExistsError:
#     print("FILE ALREADY EXIST")
# with open(file_name,'r') as file:
#     lines = file.readlines()
# with open(file_name,'w') as file:
#     for line in lines:
#         if "DATE OF BIRTH" in line:
#             line = line.replace('/','-')
#         file.write(line)
# print("DATE CHANGED SUCCESSFULLY!!..")





















# file_name="employee.txt"
# try:
#     with open(file_name,'x') as file:
#         file.wrtie("NAME - BHOOVESH VYAS\n")
#         file.wrtie("COMPANY - XYZ\n")
#         file.wrtie("DATE OF BIRTH - 08/05/2004\n")
#     print("DETAILS FILLED SUCCESSFULLY")
# except FileExistsError:
#     print("FILE EXISTS SUCCESSFULLY")
# with open(file_name,'r') as file:
#     lines = file.readlines()
# with open(file_name,'w') as file:
#     for line in lines:
#         if "DATE OF BIRTH" in line:
#             line = line.replace('/','-')
#         file.write(line)
# print("UPDATED FILE->")
# with open(file_name) as file:
#     for line in lines:
#         print(line)



file_name = "employee.txt"
try:
    with open(file_name,'r') as file:
        file.write("NAME- BHOOVESH")
        file.write("DOB - 08/05/2004")
    print("UPDATED SUCCESSFULLY")
except FileExistsError:
    print("FILE ALREADy EXISTS")
with open(file_name,'r') as file:
    lines = file.readlines
with open(file_name,'w') as file:
    for line in lines:
        if "DOB" in line:
            line = line.replace('/','-')
        file.write(line)


        