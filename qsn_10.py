import numpy as np

def matrix_operations(a, b):
    addition = np.add(a, b)
    subtraction = np.subtract(a, b)
    multiplication = np.dot(a, b)
    return addition, subtraction, multiplication

a = np.array([[1, 2], [3, 4]])
b = np.array([[5, 6], [7, 8]])
add, sub, mul = matrix_operations(a, b)
print("Addition:\n", add)
print("Subtraction:\n", sub)
print("Multiplication:\n", mul)
