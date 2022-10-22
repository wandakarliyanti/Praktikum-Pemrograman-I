import math

A, B=input().split()
A=float(A)
B=float(B)
a=C=math.sqrt(B*B-A*A)
t=A
k=A+B+C
l=0.5*a*t
print("Alas       = %.0f cm" %a)
print("Tinggi     = %.0f cm" %t)
print("Keliling   = %.0f cm" %k)
print("Luas       = %.0f cm^2\n" %l)

A=float(input())
B=float(input())
a=C=math.sqrt(B*B-A*A)
t=A
k=A+B+C
l=0.5*a*t
print("Alas       = %.0f cm" %a)
print("Tinggi     = %.0f cm" %t)
print("Keliling   = %.0f cm" %k)
print("Luas       = %.0f cm^2" %l)