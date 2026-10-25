students=[]

def add_students():

    roll_no = input("Enter roll number: ")
    for st in students:
        if st["rollno"]==roll_no:
           print("already exist")
           return


    name =input("Enter name: ")
    age =input("Enter age: ")
    course =input("Enter course: ")

    student = {
        "rollno": roll_no,
        "name": name,
        "age": age,
        "course": course
    }

    students.append(student)
    print("student added successfully")



def view_student():

 if not students:
    print("no students details found")
    return

 for st in students:
         print("\n Roll No:",st["rollno"])
         print("name:",st["name"])
         print("age:",st["age"])
         print("course:",st["course"])
      
      

def search_student():
      rollno=input("Enter Roll no:-")

      for st in students:
               if st["rollno"]==rollno:
                  print("\n Roll No:",st["rollno"])
                  print("\n name:",st["name"])
                  print("\n age:",st["age"])
                  print("\n course:",st["course"])
                  return
      print("students details not found")


def delete_student():
      rollno=input("enter roll no:=")

      for st in students:
           if st["rollno"]==rollno:
                
            choice=input("do you want to delete?(yes/no):= ").lower()

            if choice=="yes":
                students.remove(st)
                print("student deleted sucessfully")
            else:
                print("delete cancelled")
            return
   
      print("student not found")


               
def update_student():

    rollno = input("Enter Student Roll No:- ")

    for st in students:
        if st["rollno"] == rollno:
            name = input("Enter New Name:-")
            age = input("Enter New Age:-")
            course = input("Enter New Course:-")
            
            if name:
                st["name"] = name

            if age:
                st["age"] = age

            if course:
                st["course"] = course

            print("Student Details Updated Successfully")
            return

    print("Student Not Found")    
               

                     
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
           delete_student()
 
      elif choice==5:
           update_student()

      elif choice==6:
           print("thank you")
           break

      else:
          print("invalid choice")