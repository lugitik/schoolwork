class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def print(self):
        print(f"I am {self.name} and I am {self.age} years old")

class Student(Person):
    pass

me = Student("Leyla", 17)
me.print()
