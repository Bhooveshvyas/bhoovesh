# class person:
#     def __init__(self,name,age):
#         self.name=name
#         self.age=age
#     def introduce(self):
#         print(f"HELLO MY NAME IS {self.name}, MY AGE IS {self.age}.")
# class employee(person):
#     def __init__(self,emp_id,name,age):
#         super().__init__(name,age)
#         self.emp_id=emp_id
#     def work(self):
#         print(f"{self.name} IS WORKING WITH EMP ID = {self.emp_id}")
# class manager(employee):
#     def __init__(self,name,age,emp_id,dept):
#         super().__init__(emp_id, name, age)
#         self.dept=dept
#     def manage(self):
#         print(f"{self.name} WITH AGE = {self.age}, EMP ID = {self.emp_id} IS MANAGING THE {self.dept} DEPT.")
# sanju=manager("SANJU",20,"XXX","BADAL")
# sanju.manage()
class person:
    def __init__(self, name, age):
        self.age = age
        self.name = name

    def introduce(self):
        print(f"HII MY NAME IS {self.name},AGE={self.age}")


class employee(person):
    def __init__(self, name, age, emp_id):
        super().__init__(name, age)
        self.emp_id = emp_id

    def work(self):
        print(f"HI MY NAME IS {self.name},AGE={self.age},WITH EMP ID = {self.emp_id}.")


class manager(employee):
    def __init__(self, name, age, emp_id, dept):
        super().__init__(name, age, emp_id)
        self.dept = dept

    def manages(self):
        print(
            f"HI MY NAME IS {self.name},AGE = {self.age},WITH EMP ID = {self.emp_id},MANAGES = {self.dept} DEPT."
        )


sanju = manager("SANJU", 20, "XXX", "BADAL")
sanju.manages()
