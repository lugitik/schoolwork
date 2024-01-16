class Feline:
    def __init__(self, name, color):
        self.name = name
        self.color = color

    def print(self):
        print(f"my name is {self.name}\n"
              f"and i am {self.color}")

class Cat(Feline):
    pass

my_cat = Cat("Felix", "red")
my_cat.print()
