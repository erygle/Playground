import random
import numpy as np
counter = int(input("Kac sayi girmek istiyorsunuz : "))
py_list = []
py_list_random = []
for i in range(counter):
    choice = int(input(f"{i+1}. Sayi : "))
    x = random.randint(1,50)
    py_list.append(choice)
    py_list_random.append(x)
py_list_sum = [[np.array(py_list)],[np.array(py_list_random)]]
py_list_sum = np.array(py_list_sum)
bool_array = np.array([py_list_sum[0]<py_list_sum[1]])
print(bool_array.ndim)