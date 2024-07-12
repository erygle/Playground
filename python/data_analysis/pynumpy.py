import numpy as np
import pandas
import random
#---------------------------------------------------------------
listpy = [1,2,3,4,5,6]
listnumpy = np.array([1,2,3,4,5,6]) # creating numpy list                   np.array
listnumpy2 = np.array([[1,2,3,4,5,6]])                                      #.ndim
print("Python list : ")                                                     #.shape
print(listpy)                                                               #.reshape()
print("Numpy list 1 : ")
print(listnumpy)
# print(listnumpy.ndim) # returns dimension of list
# print(listnumpy.shape) # returns shape of list
# print(listnumpy.reshape(6,1))
# print(listnumpy)
# print("Numpy list 2 : ")
# print(listnumpy2)
# print(listnumpy2.ndim) 
# print(listnumpy2.shape)
# print(listnumpy2.reshape(6,1))
# print(listnumpy2.reshape(2,3))
# print(listnumpy2.reshape(3,2))
#---------------------------------------------------------------
# numpylistarange = np.arange(1,19,1)                                         np.arange()
# print(numpylistarange)
# print(numpylistarange.ndim)
# newarangelist = numpylistarange.reshape(6,3)
# print(newarangelist)
# print(newarangelist.ndim)
#---------------------------------------------------------------
# numpylistarange = np.arange(1,10,1)
# nla = numpylistarange.reshape(3,3)
# print(nla)
# print("\n\n")
# first_row = nla[1]
# print(first_row)
# print("\n")
# first_and_second_rows = nla[0:2]
# print(first_and_second_rows)
# print("\n")
# first_column = nla[:,0]
# print(first_column)
# print("\n")
# first_and_second_colums = nla[:,0:2]
# print(first_and_second_colums)
# print("\n")
# selecting_item1 = nla[1,2]
# selecting_item2 = nla[0,1]
# print(selecting_item1)
# print(selecting_item2)
#---------------------------------------------------------------
# numpylist = np.arange(1,10)                                                 np.zeros(())
# nplist = numpylist.reshape(3,3)                                             np.ones(())
# print(nplist)                                                               np.eye() 
# print("\n")
# nplist_reverse = nplist[::-1]
# print(nplist_reverse)
# print("\n")
# print(np.zeros((2,3)))
# print(np.ones((3,4,2)))
# print(np.eye(6))
#---------------------------------------------------------------
# numpy_list = np.arange(0,10)
# concat_list = np.concatenate([numpy_list,numpy_list],axis=0)                np.concatenate([])    
# print(concat_list)
# numpy_list = numpy_list.reshape(5,2)
# print(np.concatenate([numpy_list,numpy_list],axis=0))
# print(np.concatenate([numpy_list,numpy_list],axis=1))
# first_and_second_rows = np.concatenate([numpy_list,numpy_list],axis=1)[0:2]
# print(first_and_second_rows)
# columns = np.concatenate([numpy_list,numpy_list],axis=1)[:,0:3]
# print(columns)
#---------------------------------------------------------------
# numpy_list = np.array([0,1,2,3,4,5,6,7,8,9])                                .min,.max,.sum,.mean,.var,np.median,.std
# numpy_list = numpy_list.reshape(5,2)
# print(numpy_list)
# print(numpy_list.min())
# print(numpy_list.max())
# print(numpy_list.sum())
# print(numpy_list.sum(axis = 0))
# print(numpy_list.sum(axis = 1))
# print(numpy_list.mean())
# print(numpy_list.var()) #varyans
# print(np.median(numpy_list))
# print(numpy_list.std())
# print(numpy_list + numpy_list)
# print(numpy_list - numpy_list)
# print(numpy_list * numpy_list)
# print(numpy_list / numpy_list)
# print(numpy_list + 20)
# print(numpy_list[:,0:2] * 4)
#---------------------------------------------------------------
# numpy_list = np.array([0,1 , 2, 3, 4, 5, 6, 7, 8, 9])                       np.dot()
# numpy_list1 = numpy_list.reshape(5,2)                                       .T
# print(numpy_list1)
# numpy_list2 = numpy_list.reshape(2,5)
# print(numpy_list2)
# print(np.dot(numpy_list1,numpy_list2))
# print(numpy_list1.T)
# print(numpy_list[numpy_list<5])
# print(numpy_list[numpy_list>=5])
#---------------------------------------------------------------
# print(dir(np))
#---------------------------------------------------------------
# numpy_list = np.array([-1,-2,-3])                                           np.abs()
# numpy_abs = np.abs(numpy_list)
# print(numpy_abs)
#---------------------------------------------------------------
# numpy_array = np.arange(1,10)
# numpy_array2 = numpy_array.reshape(3,3)
# print(numpy_array)
# print(numpy_array2)
# x = numpy_array2[1,2]*3
# print(f"x : {x}")
# numpy_array3 = numpy_array2[:,2:3]**2
# print("Numpy array 3 : ")
# print(numpy_array3)
# numpy_array4 = np.concatenate([numpy_array2,numpy_array2**2],axis = 1)
# print(numpy_array4)
# numpy_array5 = np.arange(1,11)
# numpy_array5 = numpy_array5.reshape(5,2)
# numpy_array5 = np.concatenate([numpy_array5,numpy_array5.T],axis = 1)  -> error
# print(numpy_array5)
# python_list = [12,15,18,21,24,27,30,33]
# print(type(python_list))
# print(python_list)
# python_list = np.array(python_list)
# print(type(python_list))
# print(python_list)
# python_list = list(python_list)
# print(type(python_list))
# print(python_list)
#---------------------------------------------------------------
# numpy_list = np.random.randint(0,50, size = 12)                             np.random.randint()
# numpy_list = numpy_list.reshape(3,4)                                        np.random.normal()
# print(numpy_list)
# numpy_list2 = np.random.normal(10,5,(2,2)) #(ortalama, standart sapma, (mxn))
# print(numpy_list2)
#---------------------------------------------------------------
# ndim : boyut sayısı
# shape : boyut bilgisi
# size : toplam eleman sayısı
# dtype : array veri tipi
#---------------------------------------------------------------
