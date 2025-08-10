from cs50 import get_int

x = get_int("What is X? ")
y = get_int("What is Y? ")

if x < y:
    print("X is less than Y")
elif x > y:
    print("X is greater than Y")
else:
    print("X is equal to Y")
