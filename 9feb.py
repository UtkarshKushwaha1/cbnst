# -*- coding: utf-8 -*-
"""
Created on Tue Feb  9 09:40:30 2021

@author: Luke

1. write a program to print sum of all +ve and -ve numbers in a given list 
2. write a program to print counts of int, float, strings in a given list
"""
positive =0
negative =0
count_int =0
count_float =0
count_string =0
lst1 = [] 
lst2 = []
n = int(input("Enter number of elements in list 1 : "))  
for i in range(n): 
    elements = int(input())
    if elements>0:
        positive +=elements
    else:
        negative +=elements
    lst1.append(elements) 
print(lst1)
print("sum of positive : ", positive)
print("sum of negative : ", negative) 
n = int(input("Enter number of elements in list 2 : "))  
for i in range(n): 
    elements = input()
    try:
        if int(elements):
            count_int += 1
    except:
        try:
            if float(elements):
                count_float += 1
        except:
            count_string += 1
    lst2.append(elements)
print(lst2)
print("number of int : ", count_int)
print("number of float : ", count_float)
print("number of string : ", count_string) 
