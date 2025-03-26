class Book:
    title="anonymus"
    _author="anonymus"
    __isbn="anonymus"
    def __init__(self,title,author,):
        self.title=title
        self._author=author
    def disp(self):
        print("AUTHOR -> ",self._author,"\nTITLE -> ",self.title)
tsoml = Book("THE STORY OF MY LIFE ","HELLEN KILLER")
tsoml.disp()
# AB KARENGE EMPLOYEE WALA PROGRAM.
class Employee:
    def __init__(self,salary):
        self.salary=salary
        
    def inc(self):
        print("NOW YOUR CURRENT SALARY -> ",self.salary)
        self.salary += (self.salary)/10
        print("NOW YOUR INCREASED SALARY -> ",self.salary)
me = Employee(100000)
me.inc()
# BOOK ->
class Book:
    def __init__(self,title,author,pages,price):
        self.__price=price
        self.__pages=pages
        self.__author=author
        self.__title=title
    def getinfo(self):
        lst = []
        lst.append(self.__author)
        lst.append(self.__price)
        lst.append(self.__pages)
        lst.append(self.__title)
        return lst
    def apply_discount(self,percentage):
        print("PRICE BEFORE DISCOUNT -> ",self.__price)
        self.__price -= (((self.__price)*percentage)/100)
        print("PRICE AFTER DISCOUNT -> ",self.__price)
    def disp(self):
        print(f" TITLE -> {self.__title},PAGES -> {self.__pages},PRICE ->{self.__price},AUTHOR ->{self.__author}")
print("\n")
obj1 = Book("PHYSICS","H.C VERMA",450,660)
obj2 = Book("MATHS","R.D SHARMA",900,1000)
obj1.apply_discount(30)
lst = obj1.getinfo()
print(lst)
obj1.disp()
print("\n")
obj2.apply_discount(50)
lst = obj2.getinfo()
print(lst)
obj2.disp()