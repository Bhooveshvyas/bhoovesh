import math
class complex_number:
    def __init__(self,real,imag):
        self.real=real
        self.imag=imag
        
    def __str__(self):
        return f"{self.real}+{self.imag}i"
    
    def __add__(self,other):
        return complex_number(self.real+other.real,other.imag+self.imag)
    def __sub__(self,other):
        return complex(self.real-other.real,self.imag-other.imag)
    def __mul__(self,other):
        return complex_number(self.real*other.real-self.imag*other.imag,self.imag*other.real+self.real*other.imag)
    def __eq__(self,other):
        return (self.real==other.real and self.imag==other.imag)
    def magnitude(self):
        return math.sqrt(self.real**2+self.imag**2)
    def __ge__(self,other):
        return self.magnitude()>=other.magnitude()
    def __le__(self,other):
        return self.magnitude()<=other.magnitude()
c1 = complex_number(3,4)
c2 = complex_number(9,7)
print(c1)
print(c2)
print(c1+c2)
print(c1-c2)
print(c1*c2)
print(c1==c2)
print(c1>=c2)
print(c1<=c2)