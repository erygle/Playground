import math
from random import randint
import time
import datetime

def Fibonacci(number):
    if number==1 or number==2:
        return 1
    return Fibonacci(number-1) + Fibonacci(number-2)

def factorial(number):
    result=1
    for i in range(number,1,-1):
        result = result * i
    return result

def guessNum():
    counter = 0
    ft = datetime.datetime.now()
    #number = randint(-1000000,1000000)
    while True:
        number = randint(-100000,100000)
        guess = randint(-100000,100000)
        counter +=1
        print(f"Number : {number}     Guess : {guess}")
        if guess == number:
            lt = datetime.datetime.now()
            print(f"\n\nNumber : {number}\nAttempts : {counter}\nPass time : {lt-ft}\nProgress ending...")
            break
#guessNum()
def pNumbers(num):
    #num=int(input("Enter number :"))
    print(2)
    for repeater in range(3,num,1):
        control = False
        for slicer in range(2,repeater):
            if repeater % slicer == 0:
                control=True
        if control == False:
            print(repeater)

def asalsayi(sayi1,sayi2):
    for sayi in range(sayi1 , sayi2 + 1):
        if sayi > 1:
            for i in range(2,sayi):
                if (sayi%i == 0):
                    break
            else:
                print(sayi)
                

def anglefind():
    angle=int(input("Enter your angle value : "))
    return angle

def trifind():
    try:
        choice = int(input("1-Sine value of the angle\n2-Cosine value of the angle\n3-Tangent value of the angle\n4-Cotangent value of the angle\n5-Secant value of the angle\n6-Cosecant value of the angle\nSelect your process : "))
        angle1=anglefind()
        if choice < 1 or choice > 6:
            print("Wrong value.Please enter a value between 1-6.")
            trifind()
            
    except ValueError:
        print("Wrong value.Please enter a value between 1-6.")
        
        #trifind()
    
    #angle1=anglefind() 
    
    if choice == 1:
            print(f"Result : {math.sin(math.radians(angle1))}")
        #break
    elif choice == 2:
            print(f"Result : {math.cos(math.radians(angle1))}")
        #break
    elif choice == 3:
            print(f"Result : {math.tan(math.radians(angle1))}")
        #break
    elif choice == 4:
            print(f"Result : {1/math.tan(math.radians(angle1))}")
        #break
    elif choice == 5:
            print(f"Result : {1/math.cos(math.radians(angle1))}")
        #break
    else:
            print(f"Result : {1/math.sin(math.radians(angle1))}")
        #break
#trifind()            