students=[]

def add_students():

    roll_no = input("Enter roll number: ")
    for st in students:
        if st["roll no"]==roll_no:
           print("already exist")
           return


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



def view_student():
     for st in students:
         print("\n Roll No:",st["rollno"])
         print("\n name:",st["name"])
         print("\n age:",st["age"])
         print("\n course:",st["course"])
         
         if not students:
              print("no students details found")
         return


def search_student():
      rollno=input("Enter Roll no:-")
      for st in students:
               if st["rollno"]==rollno:
                     
      
    
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
           view_student()

    elif choice==3:
           search_student()

    elif choice==4:
           print("delete student")
 
    elif choice==5:
           print("update student")

    elif choice==6:
           print("thank you")
           break

    else:
          print("invalid choice")