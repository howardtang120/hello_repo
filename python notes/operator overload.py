class ComplexNumber:
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary

    def __add__(self, other):
        return ComplexNumber(self.real + other.real, self.imaginary + other.imaginary)

    def __sub__(self, other):
        return ComplexNumber(self.real - other.real, self.imaginary - other.imaginary)

    def __mul__(self, other):
        # (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
        new_real = (self.real * other.real) - (self.imaginary * other.imaginary)
        new_imaginary = (self.real * other.imaginary) + (self.imaginary * other.real)
        return ComplexNumber(new_real, new_imaginary)

    def __eq__(self, other):
        return self.real == other.real and self.imaginary == other.imaginary

    def __str__(self):
        return f"{self.real} + {self.imaginary}i"

# Usage
c1 = ComplexNumber(1, 2)
c2 = ComplexNumber(2, 3)

c3 = c1 + c2
print(c3)  # Output: 3 + 5i

c4 = c1 - c2
print(c4)  # Output: -1 - 1i

c5 = c1 * c2
print(c5)  # Output: -4 + 7i

print(c1 == c2)  # Output: False
