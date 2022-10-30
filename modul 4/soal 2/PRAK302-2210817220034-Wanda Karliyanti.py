for z in range(5):
    nilai=int(input())
    if(nilai >= 80):
        print("A\n")
    elif(nilai >= 70 and nilai <= 79):
       print("B\n")
    elif(nilai >= 60 and nilai <= 69):
        print("C\n")
    elif(nilai >= 50 and nilai <= 59):
        print("D\n")
    else:
        print("E\n")