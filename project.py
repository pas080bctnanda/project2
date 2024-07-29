import os 
import time 

class login :
    def __init__(self, userid = "", password= ""):
        self.userid =  userid 
        self.password =  password 

    def set_userid(self, userid):
        self.userid = userid 

    def set_password(self , password ):
        self.password = password 

    def get_userid(self):
        return self.userid
    
    def get_password(self):
        return self.password
    
def registration(log):
    os.system('cls 'if os.name == 'nt 'else 'clear')
    userid = input("enter your id ")
    log.set_userid(userid)

    while True :
        password = input("enter your password ")
        confirm_password = input("confirm your password ")
        if password == confirm_password :
            log.set_password(password)
            break 
        else :
            print(" the password is too short")
chat try :
         with open("login.txt ", "a ")as outfile :