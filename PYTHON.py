class employee:
    def __init__(self,name,salary):
        self.name=name
        self.salary = salary

    def display_info(self):
        print("NAME -> ",self.name)
        print("SALARY -> ", self.salary)

class manager(employee):
    def __init__(self,dept):
        self.dept=dept
    def display_info(self):
        print("DEPT. NAME -> ",self.dept)
    

class director(manager):
    def __init__(self,budget):
        self.budget=budget
    def display_info(self):
        print("budget info -> ",self.budget)
    
d = director(100000)
m = manager("COMPUTER SCEINCE")
e = employee("ASHFAQ AHMED",50000)
d.display_info()
m.display_info()
e.display_info()
print("\n")
d1 = director(1000000)
m1 = manager("AIML")
e1 = employee("BALAJI",100000)
d1.display_info()
m1.display_info()
e1.display_info()