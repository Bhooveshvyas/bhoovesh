# question -> 1
def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

# Example usage
number = 297
print(f"{number} is prime: {is_prime(number)}")
# question -> 2
def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

n_terms = 10
for i in range(n_terms):
    print(fibonacci(i), end=" ")
# question -> 3
def handle_exceptions(a, b):
    try:
        result = a / b
        return result
    except ZeroDivisionError:
        return "Error: Division by zero."
    except ValueError:
        return "Error: Invalid input."

print(handle_exceptions(10, 0))
# question -> 4
def handle_exceptions(a, b):
    try:
        result = a / b
        return result
    except ZeroDivisionError:
        return "Error: Division by zero."
    except ValueError:
        return "Error: Invalid input."

print(handle_exceptions(10, 0))
# question -> 5
import re

def validate_email(email):
    pattern = r"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$"
    return re.match(pattern, email) is not None

email = "test@example.com"
print(f"Is the email valid? {validate_email(email)}")
# question -> 6
from collections import Counter

def count_frequency(lst):
    return dict(Counter(lst))

lst = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4]
print(count_frequency(lst))
# question -> 7
def multiplication_table(n):
    for i in range(1, 11):
        print(f"{n} x {i} = {n * i}")

multiplication_table(5)
# question -> 8
def sum_even_odd(lst):
    even_sum = sum(x for x in lst if x % 2 == 0)
    odd_sum = sum(x for x in lst if x % 2 != 0)
    return even_sum, odd_sum

lst = [1, 2, 3, 4, 5, 6]
even_sum, odd_sum = sum_even_odd(lst)
print(f"Even sum: {even_sum}, Odd sum: {odd_sum}")
# question ->9
def is_armstrong(num):
    order = len(str(num))
    sum_digits = sum(int(digit) ** order for digit in str(num))
    return num == sum_digits
number = 153
print(f"{number} is an Armstrong number: {is_armstrong(number)}")

# question -> 11
def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    try:
        return x / y
    except ZeroDivisionError:
        return "Division by zero is not allowed."

print("Select operation:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide")
choice = input("Enter choice(1/2/3/4): ")

num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

if choice == '1':
    print(add(num1, num2))
elif choice == '2':
    print(subtract(num1, num2))
elif choice == '3':
    print(multiply(num1, num2))
elif choice == '4':
    print(divide(num1, num2))
else:
    print("Invalid input")
# question - 12
def count_vowels_consonants(s):
    vowels = "aeiouAEIOU"
    v_count = sum(1 for char in s if char in vowels)
    c_count = sum(1 for char in s if char.isalpha() and char not in vowels)
    return v_count, c_count

string = "Hello World"
vowels, consonants = count_vowels_consonants(string)
print(f"Vowels: {vowels}, Consonants: {consonants}")
# question -> 13
import math

def circle_area(radius):
    if radius < 0:
        raise ValueError("Radius cannot be negative")
    return math.pi * radius * radius

def rectangle_area(length, width):
    if length < 0 or width < 0:
        raise ValueError("Length and width cannot be negative")
    return length * width

try:
    print("Circle area:", circle_area(5))
    print("Rectangle area:", rectangle_area(4, 6))
except ValueError as e:
    print(e)
