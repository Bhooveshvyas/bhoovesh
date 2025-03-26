class ComplexNumber:
    def _init_(self, real, imag):
        self.real = real
        self.imag = imag

    def _add_(self, other):
        return ComplexNumber(self.real + other.real, self.imag + other.imag)

    def _sub_(self, other):
        return ComplexNumber(self.real - other.real, self.imag - other.imag)

    def _mul_(self, other):
        real = self.real * other.real - self.imag * other.imag
        imag = self.real * other.imag + self.imag * other.real
        return ComplexNumber(real, imag)

    def _eq_(self, other):
        return self.real == other.real and self.imag == other.imag

    def _str_(self):
        return f"{self.real} + {self.imag}i"

a1 = ComplexNumber(1, 2)
a2 = ComplexNumber(3, 4)
print(a1 + a2)  # Addition
print(a1 - a2)  # Subtraction
print(a1 * a2)  # Multiplication
print(a1 == a2)  # Equality check