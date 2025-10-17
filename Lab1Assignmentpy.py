# Imports should always be at the top
import os
import sys
from collections import Counter

def main():
    a=int(input("Enter first side: "))
    b=int(input("Enter first side: "))
    c=int(input("Enter first side: "))
    output=True;
    if a>b and a>c:
        output=a<(b+c)
    elif b>c:
        output=b<(a+c)
    else:
        output=c<(a+b)
    if output:
        print("Yes, the sides can form a triangle according to The Triangle Inequality Theorem")
    else:
        print("No, the sides cannot form a triangle according to The Triangle Inequality Theorem")
if __name__ == "__main__":
    while True:
       main()
       