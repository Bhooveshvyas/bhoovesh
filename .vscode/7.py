class BankAccount:
    def _init_(self, name, balance=0):
        self.name = name
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        return f"Deposited: {amount}, New Balance: {self.balance}"

    def withdraw(self, amount):
        if amount > self.balance:
            return "Insufficient balance"
        self.balance -= amount
        return f"Withdrawn: {amount}, New Balance: {self.balance}"

# Example
account = BankAccount("John")
print(account.deposit(100))
print(account.withdraw(50))