balance=5000
pin=1234

user_pin=int(input("enter a pin="))

if user_pin==pin:
      print("pin succesfully")

      while True:
  
         print("\n---ATM menu---")
         print("\n1.check balance")
         print("\n2.Deposit money")
         print("\n3.withdraw money")
         print("\n4.exit")

         choice=int(input("enter your choice:="))

         if choice==1:
           print("check balance:=",balance)

         elif choice==2:
          amount=int(input("enter deposit amount:="))
          
          
          if amount > 0:
                  if balance > amount:
                    balance = balance - amount
                    print("amount successfully")
                    print("updated balance:", balance)
                  else:
                    print("Insufficient balance.")
          else:
                   print("Enter a valid amount")


         elif choice==3:
            amount = int(input("Enter deposit:= "))

            if amount > 0:
                  balance = balance + amount
                  print("Deposit successful.")
                  print("updated balance:", balance)
            else:
                  print("Enter a valid amount")
 
         elif choice==4:
            print("thank you for our ATM")
            break
    

         else:
                 print("invalid choice")
        
else:
   print("invalid pin")