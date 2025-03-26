import re
check = "^[a-z]+[\._]?[a-z 0-9]+[@]\w+[.]\w{2,3}$"
ip = input("ENTER MAIL : ")
if re.search(check,ip):
    print("VALID EMAIL")
else :
    print("INVALID EMAIL")