import os
import json
import time
import re

class UserInformation:
    def __init__(self,username,password,mail):
        self.username = username
        self.password = password
        self.mail = mail
"""


"""
class UserRepository:
    def __init__(self):
        self.users = []
        self.isLoggedIn = False
        self.currentUser = {}
        self.loadUser()
    
    
    def Register(self, user : UserInformation):
        self.users.append(user)
        self.saveFile()
        print("\nUser created...")
    
    
    def Login(self , username_login , password_login):
        for user in self.users:
            if user.username == username_login and user.password == password_login:
                self.isLoggedIn = True
                self.currentUser = user
                print("You login succesfully.")
                break
            else:
                print("Wrong username or mail.")
                break
             
    def saveFile(self):
        
        list1 = []
        
        for user in self.users:
            list1.append(json.dumps(user.__dict__))
        
        with open("person.json","w") as file:
            json.dump(list1 , file)
    
    
    def logout(self):
        self.isLoggedIn = False
        self.currentUser = {}
        print("Exit...")
    
    def identity(self):
        if self.isLoggedIn == True:
            print(f"Current user name : {self.currentUser.username.capitalize()}\nCurrent user mail : {self.currentUser.mail}")
        else:
            print("Not logged in.")
    
    
    def loadUser(self):
        if os.path.exists("person.json"):
            with open("person.json","r",encoding="utf-8") as file:
                users = json.load(file)
                for user in users:
                    user = json.loads(user)
                    newuser = UserInformation(username = user["username"], password = user["password"], mail = user["mail"])
                    self.users.append(newuser)
        #print(self.users) #objelerin konumunu ogrenme
 #--------------------------------------------------------------------------------  

        



 
 #--------------------------------------------------------------------------------  
repository = UserRepository()

while True:
    
    try:
        print("Menu".center(40,"-"))
        choice = int(input('1- Register\n2- Login\n3- Logout\n4- Identity\n5- Exit\nYour choice : '))
        
        if choice == 5:
            print("Exit...")
            break
        else:
            if choice == 1: #register
                username = input("Enter your nickname : ")
                username.strip("\s")
                if re.search("[1-9]", username):
                    print("Wrong typing of username.")
                    break
                    
                password = input("Enter your password : ")
                if re.search("\s", password):
                    print("Wrong typing of password.")
                    break
                while True:
                    mail = input("Enter your mail address : ")
                    
                    if not re.search("[@]", mail):
                       print("Mail must contain '@'.")
                    else:
                        break
                user = UserInformation(username = username, password = password, mail = mail)
                repository.Register(user)
                
            elif choice == 2: #login
                if repository.isLoggedIn:
                    print("You have already log in.")
                else:
                    username = input("Enter your username : ")
                    password = input("Enter your password : ")
                    repository.Login(username, password)
            elif choice == 3: #logout
                repository.logout()
            elif choice == 4: #identity
                repository.identity()
            else:
                print("Wrong choice.Choose between 1-5.")
    
    except:
        print("Wrong choice.")
        break
    