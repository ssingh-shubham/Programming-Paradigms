#Largest Nnumber
a = int(input("enter a number: "))
b = int(input("enter second number: "))
c = int(input("enter third number: "))
largest = 0
if a > b and a > c:
largest = a
if b > a and b > c:
largest = b
if c > a and c > b:
largest = c
print(largest, "is the largest of the three numbers")

