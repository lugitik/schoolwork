def add(name, birthdate):
    if name in database.keys() and database[name] == birthdate:
        print(f"error: name \"{name}\" with the birthdate -{birthdate}- is already in the database\n")
        return "error"
    else:
        database[name] = birthdate
        print(f"\"{name}\" added")

def birthdate_search(name):
    if name in database.keys():
        print(f"birthday: {database[name]}")
    else:
        print(f"error: \"{name}\" is not in the database\n")
        return "error"
def view_all():
    for name in database:
        print(name)

def cmd_help():
    print("-- 'add' to add a person to the database --\n"
          "--'search' to view a person's birthdate --\n"
          "-- 'view' to view all the names in the database --\n"
          "-- 'exit' to close the program --")

def main():
    add_flag, search_flag = False, False

    while True:
        if add_flag:
            command = "add"
        elif search_flag:
            command = "search"
        else:
            command = str(input("\ncmd ~$ "))

        match command:
            case "add":
                result = add(str(input("add ~> name: ")), str(input("add ~> birthday: ")))
                if result == "error":
                    add_flag = True
                else:
                    add_flag = False
            case "search":
                result = birthdate_search(str(input("search ~> name: ")))
                if result == "error":
                    search_flag = True
                else:
                    search_flag = False
            case "view":
                view_all()
            case "help":
                cmd_help()
            case "exit":
                break
            case _:
                print(f"error: '{command}' not a valid command"
                      f"\nenter 'help' to list the available commands")

database = {
    "Rebecca": "5/7/2006",
    "John": "26/1/2007",
    "Fredrick": "15/10/2006"
}

main()
