import math
class complex_number:
    def __init__(self,real,imag):
        self.imag=imag
        self.real=real
    def __add__(self,other):
        return complex_number(self.real+other.real,self.imag+other.imag)
    def __sub__(self,other):
        return complex_number(self.real-other.real,self.imag-other.imag)
    def magnitude(self):
        return math.sqrt(self.real**0.5+self.imag**0.5)
    def __mul__(self,other):
        return complex_number(self.real*other.real-other.imag*self.imag,self.imag*other.real+other.real*self.imag)
    def __ge__(self,other):
        return self.magnitude()>=other.magnitude()
    def __le__(self,other):
        return self.magnitude()<=other.magnitude()
    def __eq__(self,other):
        return self.magnitude()==other.magnitude()
    def __str__(self):
        return f"{self.real}i+{self.imag}"
    
c1 = complex_number(3,4)

c2 = complex_number(7,5)

print("ADDITION = ",c1+c2)
print("SUBTRACTION = ",c1-c2)
print("MULITPLICATION = ",c1+c2)
print("C1 >= C2 = ",c1>=c2)
print("C1 <= C2 = ",c1<=c2)
print("C1 <= C2 = ",c1==c2)