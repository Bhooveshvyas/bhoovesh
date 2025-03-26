file_name = "temp.txt"
try:
    with open(file_name,'x') as file:
        file.write("HI MYSELF UUUUUUUU")
except FileExistsError:
    print("FILE Already exists!!...")
with open(file_name,'r') as file:
    lines = file.readlines
for i in lines:
    print(i)