students=[]

def add_students():
    roll_no = input("Enter roll number: ")
    name = input("Enter name: ")
    age = input("Enter age: ")
    course = input("Enter course: ")

    student = {
        "roll_no": roll_no,
        "name": name,
        "age": age,
        "course": course
    }

    students.append(student)
    print("student added successfully")



while True:
    print("\n----student management system----")
    print("\n1.add student")
    print("\n2.view student")
    print("\n3.search student")
    print("\n4.delete student")
    print("\n5.update student")
    print("\n6.exit")


    choice=int(input("enter your choice:="))

    if choice==1:

        add_students()


    elif choice==2:
        print("view student")

    elif choice==3:
        print("search student")

    elif choice==4:
        print("delete student")

    elif choice==5:
        print("update student")

    elif choice==6:
        print("thank you")
        break

    else:
        print("invalid choice")
