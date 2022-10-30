for z in range(5):
    d=int(input())
    hari=d%(86400*30)/86400
    jam=(d%86400)/3600
    menit=d%3600/60
    detik=d%60
    if(hari>=1):
        print("%d hari %.2d:%.2d:%.2d" %(hari,jam,menit,detik))
    else:
        print("%.2d:%.2d:%.2d\n" %(jam,menit,detik))