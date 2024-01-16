class Feline:
    def __init__(self, name, years):
        self.years = years
        self.name = name

    def print(self):
        print(f"my name is {self.name} and i am {self.years} years old")

def main():
    cat = Feline(str(input("name: ")), int(input("years: ")))
    cat.print()

main()
