# num = 10
# print(type(num))
# num = int.__str__(num)
# print(type(num))
# num = int(num)
# print(type(num))
# class Employee:
#     def __init__(self):
#         self.name = "Eray"
#         self.salary = 2000
#         print("init function was called")
#     def __str__(self):
#         return "Hello "+self.name+" your salary is "+int.__str__(self.salary)
#     def sayHello(self):
#         print("Hello")
# employee = Employee()
# print(employee)
class distance:
    def __init__(self, x=None,y=None):
        self.ft=x
        self.inch=y
    def __add__(self,a):
        temp=distance()
        temp.ft=self.ft+a.ft
        temp.inch=self.inch+a.inch
        if temp.inch>=12:
            temp.ft+=1
            temp.inch-=12
            return temp
    def __str__(self):
        return 'ft:'+str(self.ft)+' in: '+str(self.inch)
d1 = distance(3,10)
d2 = distance(4,4)
d3 = d1 + d2
print("d1= {} d2={}".format(d1, d2))
print(d3)



