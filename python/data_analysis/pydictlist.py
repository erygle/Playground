# ------------------------------------------------------------------
# dict1 = {"kare":[i**2 for i in range(1,11) if i%2 == 0]}
# print(dict1["kare"])
# list1 = []
# for i in range(1,11):
#     if i %2==0:
#         list1.append(i)
# [dict1["kare"].append(i**2) for i in range(1,11) if i%2==0]
# ------------------------------------------------------------------
even_list = []
odd_list = []
def evenodd(number):
    for i in range(len(number)):
        if number[i] %2 == 0:
            even_list.append(number[i])
        else:
            odd_list.append(number[i])
    return even_list, odd_list
list1 = [2,13,28,93,42,37]
evenodd(list1)
print(even_list)
print(odd_list)