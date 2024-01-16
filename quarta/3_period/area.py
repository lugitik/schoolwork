class rectangle:
    def __init__(self, length, height):
        self.length = length
        self.height = height

def perimeter(length, height):
    return length * 2 + height * 2

def area(length, height):
    return length * height

def main():
    rect = rectangle(int(input("Length -> ")), int(input("Height -> ")))
    print(f"the perimeter is: {perimeter(rect.length, rect.height)}")
    print(f"the area is: {area(rect.length, rect.height)}")

main()
