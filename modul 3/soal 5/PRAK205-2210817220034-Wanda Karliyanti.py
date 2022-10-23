import math

A, B=input().split()
A=int(A)
B=int(B)
a=C=math.sqrt(B*B-A*A)
t=A
k=A+B+C
l=0.5*a*t
print("Alas       = {} cm".format(round(a)))
print("Tinggi     = {} cm".format(round(t)))
print("Keliling   = {} cm".format(round(k)))
print("Luas       = {} cm^2\n".format(round(l)))

A=int(input())
B=int(input())
a=C=math.sqrt(B*B-A*A)
t=A
k=A+B+C
l=0.5*a*t
print("Alas       = {} cm".format(round(a)))
print("Tinggi     = {} cm".format(round(t)))
print("Keliling   = {} cm".format(round(k)))
print("Luas       = {} cm^2".format(round(l)))