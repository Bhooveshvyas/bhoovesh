# class account:
#     def __init__(self,bal,accno):
#         self.accno=accno
#         self.bal=bal
    
#     def debit(self,amount):
#         if amount > self.bal:
#             print("INSUFFICIENT BALANCE!!!!!!!!!............")
#         else:
#             self.bal-=amount
#             print("AMOUNT DEBITED SUCCESSFULLY!!!!.....\nCURRENT BALANCE = ",self.bal)
#     def credit(self,amount):
#             self.bal+=amount
#             print("AMOUNT CREDITED SUCCESSFULLY!!!!.....\nCURRENT BALANCE = ",self.bal)
#     def printbal(self):
#         print("YOUR CURRENT BALANCE IS : ",self.bal)
# s1=account(90900,"a0123")
# s1.debit(5000)
# s1.credit(19999)
# s1.printbal()

class bank:
    def  __init__(self,acc_no,bal):
        self.bal=bal
        self.acc_no=acc_no
    def withdrawl(self,amount):
        if amount > self.bal:
            print("INSUFFICIENT BALANCE!!...")
        elif amount < 0:
            print("ENTER POSITIVE")
        else:
            if amount < 0:
                print("ENTER POSITIVE")
            else:
                self.bal-=amount
                print(f"AMOUNT {amount} WITHDRWAL SUCCESSFULLY FROM ACC_NO {self.acc_no} .")
    def credit(self,amount):
    
        self.bal+=amount
        print(f"AMOUNT {amount} CREDITED SUCCESSFULLY INTO {self.acc_no} .")       
sanju = bank("XYZabc",120000)
ayush = bank("ABCxyz",160000)
sanju.withdrawl(8000)
ayush.withdrawl(6000)
sanju.credit(77000)
ayush.credit(69000)