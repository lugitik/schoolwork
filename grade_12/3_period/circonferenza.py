import math
class circle:
    def __init__(self, point_x, point_y, radius):
        self.point_x = 0
        self.point_y = 0
        self.radius = radius

def circumference(radius):
    return 2 * math.pi * radius

def area(radius):
    return math.pi * radius**2

def is_in(point_x, point_y, radius):
    distance = math.sqrt(point_x**2 + point_y**2)
    if distance > radius:
        return False
    else:
        return True

def points(point_x, point_y, radius):
    if is_in(point_x, point_y, radius):
        return f"The point ({point_x};{point_y}) is in the circle"
    else:
        return f"The point ({point_x};{point_y}) isn't in the circle"

def main():
    obj = circle(int(input("X -> ")), int(input("Y -> ")), int(input("Radius -> ")))
    print(f"the circumference is: {circumference(obj.radius)}\n"
          f"the area is: {area(obj.radius)}")

    print(points(int(input("Point X -> ")), int(input("Point Y -> ")), obj.radius))

main()
