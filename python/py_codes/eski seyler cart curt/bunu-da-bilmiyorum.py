# class values:
#     def __init__(self):
#         self.num = 1
        
#     def __iter__(self):
#         return self
    
#     def __next__(self):
#         val = self.num
#         if self.num <= 10:
#             #val = self.num #burda da oluyor
#             self.num += 1
#             return val
#         else:
#             raise StopIteration
#         #return val #burda da oluyor
        
        
# valu = values()

# for i in valu:
#    print(i)
def abyd(num):
    liste = []
    for i in num:
        liste.append(i)
    liste = sorted(liste)
    for i in range(4):
        liste[i] = int(liste[i])
    maxNum = (liste[3]*1000) + (liste[2]*100) + (liste[1]*10) + (liste[0]*1)
    minNum = (liste[0]*1000) + (liste[1]*100) + (liste[2]*10) + (liste[3]*1)
    result = maxNum - minNum
    return result
abydlist = ["6","1","7","4"]
num = input("Sayi : ")
count = 0        
while True:
    print(abyd(num))
    num = str(abyd(num))
    count += 1
    if num == "6174":
        print(count)
        break
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        