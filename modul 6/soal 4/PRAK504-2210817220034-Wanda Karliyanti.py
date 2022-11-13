def reverse(a):
    b=0
    while(a!=0):
        b=b*10
        b=b+a%10
        a=a/10
    return b
A, B=map(int,input().split())
A=reverse(A)
B=reverse(B)
C=A+B
print(reverse(C))