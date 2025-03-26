class A:
    def funcA(self):
        print("THIS IS THE CLASS A")
class B:
    def funcB(self):
        print("THIS IS THE CLASS B")
class C(A,B):
    def funcC(self):
        print("THIS IS THE CLASS C")
AKO = A()
BKO = B()
CKO = C()
AKO.funcA()
BKO.funcB()
CKO.funcC()