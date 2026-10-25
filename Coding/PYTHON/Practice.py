print('Hello, World!')
def practice():
    age=25
    price=69.99
    name="food"
    letter='''c'''
    print(age,name,price,letter)
    age2=age
    print(age2)
    print(type(age),type(name),type(price),letter)
    value=True
    print(value,type(value))
def factorial(n):
    for i in range(1,n+1):
        fact=1
        for j in range(1,i+1):
            fact*=j
            print("factorial of",i,fact)  

def lenList(list):
    print(len(list))

def print_list(list):
    for i in list:
        print(i,end=" ")

def factorial(n):
    factorial=1
    for i in range(1,n+1):
        factorial*=i
    print("\n",factorial)

def dollToRuppees(dol):
    print(dol*83)     

#recursion
def factorial(n):
    if(n==0 or n==1):
        return 1
    return n*factorial(n-1)

def printList(list,indx=0):
    if(indx==len(list)):
        return
    print(list[indx])
    printList(list,indx+1)

#fileInputOutput using with 
def readFile():
    with open("HelloWorld.py","r") as f:
        data=f.read()
        print(data)

def findword(word):
    count=1
    with open("practice.txt","r")as f:
        for i in f:
            if(i==word):
                print(word,"found at")
            else:
                print("not found")
            count+=1

@staticmethod
def chechWordForLine():
        line=1
        data=True
        word="python"
        with open("practice.txt","r")as f:
            while data:
                data=f.readline()
                if(word in data):
                    print(word,"found at:",line)
                    break
                line+=1
            else:
                print("not found")    

def count_evenNo_frm_file():
    data=None
    with open("practice.txt","r")as f:
        data=f.read()
    index=0 
    count=0   
    nums=data.split(",")   
    for i in nums:
        if(int(i)%2==0):
            print(i)
            count+=1

#oop 
class Student:
    def __init__(self,name,marks):
        self.name=name
        self.marks=marks
        
    def average(self):

        return (self.marks[0]+self.marks[1]+self.marks[2])/3

class Account:
    def __init__(self,accNo,balance):
        self.balance=balance
        self.accNo=accNo

    def getBalance(self):
        print(self.balance)

    def credit(self,amount):
        self.balance+=amount
        self.getBalance()

    def debit(self,amount):
        self.balance-=amount
        self.getBalance()            

class Circle:
    def __init__(self,radius):
        self.radius=radius

    def area(self):
        print(math.pi*self.radius*self.radius)    

    def circumference(self):
        print(math.pi*self.radius*self*2)

class Employee:
    def __init__(self,role,dept,salary):
        self.role=role
        self.salary=salary
        self.dept=dept

    def showDetails(self):
        print(self.role)
        print(self.dept)
        print(self.salary)
       
class Engineer(Employee):
    def __init__(self,name,age):
        self.name=name
        self.age=age
        super().__init__("Engineer","IT",2000000)
    def showDetails(self):
        print(self.name)
        print(self.age)
        super().showDetails()
        
class Order:
    def __init__(self,item,price):
        self.item=item
        self.price=price

    def __gt__(self,Order):
        return(self.price>Order.price)

def guessingGame(r):
    number=random.randint(0,r)
    guess=int(input("guess a number:"))
    while(guess>0):
        if(guess<number):
            print("low")
        elif(guess>number):
            print("high")
        else:
            print("congratulations!")
            break
        guess=int(input("guess a number:"))     

def randomPasswordGenerator(n):
    password=""
    while(n>0):
        char=random.choice(string.printable)
        password=password+char
        n-=1
    print(password)

randomPasswordGenerator(12)