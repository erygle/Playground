
# abccba abcba
def palindrome(string):
    return string == string[::-1]

string = input()
control = palindrome(string)
string_reverse = string[::-1]

if control:
    print(f"This string is palindrome.\nOriginal : {string}\nReverse : {string_reverse}")
else:
    print(f"This string is not palindrome.\nOriginal : {string}\nReverse : {string_reverse}")
   
        

# function which return reverse of a string
 
# def isPalindrome(s):
#     return s == s[::-1]
 
 
# # Driver code
# s = "malayalam"
# ans = isPalindrome(s)
 
# if ans:
#     print("Yes")
# else:
#     print("No")








































































































































































# from random import randint as rn

# def randomize(num,arr):
#     [arr.append(i) for i in range(num**2)]
#     for i in range(len(arr)-1,0,-1):
#         j = rn(0,i)
#         arr[i],arr[j] = arr[j],arr[i]
    
#     return arr

# def print_arr(num,arr):
#     k = 0
#     for i in range(num):
#         for j in range(num):
#             # print(arr[k+j],end = " ")
#             s = ""
#             s += str(arr[k+j]) + "\t"
#             print(s,end="")
#         k += num
#         print("\n")
    
# arr = []
# num = 8
# randomize(num,arr)
# print(arr)
# print_arr(num,arr)

























# from random import randint       #shuffle array list
# def randomize(arr,length):
#     for i in range(length-1,0,-1):
#         j = randint(0,i)
#         arr[i],arr[j] = arr[j],arr[i]
#     return arr
# arr = [1,2,3,4,5,6,7,8,9]
# print(randomize(arr,len(arr)))