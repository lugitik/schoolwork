def month_length(year, month):
    match month:
        case 1 | 3 | 5 | 7 | 8 | 10 | 12:
            return 31
        case 4 | 6 | 9 | 11:
            return 30
        case 2:
            if bool(year % 400 == 0 or year % 4 == 0):
                return 29
            else:
                return 28

def validator(day, month, year):
    if month < 1 or month > 12 or day < 1 or day > month_length(year, month):
        return "invalid date"
    else:
        return f"date is: {day}/{month}/{year}"

def main():
    print(validator(int(input("date ~> ")), int(input("month ~> ")), int(input("year ~> "))))

main()
