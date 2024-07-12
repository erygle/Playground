import pandas as pd
import seaborn as sbn
import numpy as np
import random

a = random.randint(0, 50)
print(a)
# ----------------------------------------------------
# dataFrame = pd.Series([1,2,4,3,8])
# print(dataFrame)
# print(type(dataFrame))
# print(dataFrame.index)
# print(dataFrame.dtype)
# print(dataFrame.ndim)
# print(dataFrame.values)
# print(type(dataFrame.values))
# print(dataFrame.head(2))
# print(dataFrame.tail(2))
# ----------------------------------------------------
# df = pd.read_excel("titanic3.xls")
# print(df.head())
# print(df.tail())
# print(df.shape)
# print(df.info())
# print(df.columns)
# print(df.index)
# print(df.describe().T)
# print(df.isnull().values.any())
# print(df.values)
# print(df.isnull().values)
# print(df.isnull().sum())
# print(df["sex"].head())
# print(df["sex"].value_counts())
# ----------------------------------------------------
# print(df.index)
# print(df.info())
# df.index = df.age
# df.drop("age",axis = 1, inplace=True)
# print(df.columns)
# print(df.head())
# df["age"] = df.index
# print(df["age"])
# df = df.reset_index()
# print(df.columns)
# ----------------------------------------------------
# pd.set_option("display.max_columns",None)
# print(df.head())
# print(df.age)
# print(type(df["age"]))
# print(type(df[["age"]]))
# print(df.loc[:,df.columns.str.contains("age")].head())
# print(df.loc[:,~df.columns.str.contains("age")].head())
# ----------------------------------------------------
# products ={
#     "prices":[100,200,300],
#     "amount":[30,15,10]
#     }
# df = pd.DataFrame(products,columns=["prices","amount"])
# print(type(df))
# df.to_csv('dataframe.csv',index = False,header = True)
# print(df)
# ----------------------------------------------------
# df = pd.read_csv("business.csv")
# print(df.head())
# ----------------------------------------------------
