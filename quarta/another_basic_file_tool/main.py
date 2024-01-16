def main():
    mode, doctype, flag = "", ".txt", 0

    start = ("ABE: Another Basic Editor (beta)\n"
             "Can only add lines, view, create and delete files\n"
             "\n!Files will only save after exit!\n")
    print(start)

    while mode != 1:
        if flag == 1:
            command = "mode"
        else:
            command = input("cmd ~> ")

        match command:
            case "exec":
                runner(mode, doctype)
            case "help":
                print("- 'exec' to run\n"
                      "- 'mode' to change mode\n"
                      "- 'doctype' to change file type\n"
                      "- 'del' to delete a file\n"
                      "- 'quit' to exit program")
            case "mode":
                mode = input("cmd ~> mode ~> ").lower()
                match mode:
                    case "w" | "a" | "r" | "del":
                        print(f"-- mode: {mode} --")
                        flag = 0
                    case _:
                        print(f"error: mode not recognised: '{mode}'\n"
                              f"ABE might not work as intended.")
                        flag = 1
            case "doctype":
                doctype = input("cmd ~> doctype > ").lower()
                print(f"-- doctype: {doctype} --")
            case "quit":
                break
            case _:
                print(f"error: unrecognised command: '{command}'.")

def runner(mode, doctype):
    import os
    match mode:
        case "":
            print("error: no mode given\n"
                  "use 'help' for how to use cmd.")
        case "w" | "a":
            file_name = input("filename ~$ ") + doctype
            file_content = input("content ~$ ")
            editor(file_name, file_content, mode)
        case "r":
            file_name = input("filename ~$ ") + doctype
            reader(file_name)
        case "del":
            file_name = input("filename -$ ") + doctype
            confirm = input("Delete file? this action cannot be reversed. [y/n]: ").lower()
            if confirm == "y":
                if os.path.exists(file_name):
                    os.remove(file_name)
                    print(f"{file_name} deleted!\n"
                          f"use 'quit' to finish.")
                else:
                    print(f"error: '{file_name}' does not exist.")
            else:
                print("action cancelled.")

def reader(name):
    file = open(name, 'r')
    print(file.read())

def editor(name, text, mode):
    match mode:
        case "w":
            content = text
        case "a":
            content = "\n" + text

    victim = open(name, mode)
    victim.write(content)
    victim.close()
    print(f"{name} saved!\n"
          f"use 'quit' to finish.")

main()
