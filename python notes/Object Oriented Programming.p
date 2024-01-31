### 1. Encapsulation:
class Car:
    def __init__(self, make, model):
        self.make = make  # encapsulated attribute
        self.model = model  # encapsulated attribute
        self.__fuel_level = 100  # private encapsulated attribute

    def drive(self):
        print("Driving...")
        self.__fuel_level -= 10

    def get_fuel_level(self):
        return self.__fuel_level  # encapsulated method to access private attribute

# Create an instance of the Car class
my_car = Car("Toyota", "Camry")

# Access encapsulated attributes and methods
print(f"Car: {my_car.make} {my_car.model}")
my_car.drive()
print(f"Fuel Level: {my_car.get_fuel_level()}%")

### 2. Inheritance:
class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        pass  # abstract method

class Dog(Animal):
    def speak(self):
        return f"{self.name} says Woof!"

class Cat(Animal):
    def speak(self):
        return f"{self.name} says Meow!"

# Create instances of derived classes
my_dog = Dog("Buddy")
my_cat = Cat("Whiskers")

# Use inherited method
print(my_dog.speak())
print(my_cat.speak())

### 3. Polymorphism:
def animal_speak(animal_instance):
    return animal_instance.speak()

# Use polymorphism with different types of animals
result_dog = animal_speak(Dog("Buddy"))
result_cat = animal_speak(Cat("Whiskers"))

print(result_dog)
print(result_cat)


###4. Abstraction:
from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * self.radius ** 2

class Square(Shape):
    def __init__(self, side_length):
        self.side_length = side_length

    def area(self):
        return self.side_length ** 2

# Create instances of derived classes
circle = Circle(5)
square = Square(4)

# Use abstraction to calculate area without knowing implementation details
print(f"Circle Area: {circle.area()}")
print(f"Square Area: {square.area()}")





