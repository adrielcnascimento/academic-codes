area1 = float(input())
area2 = float(input())

if ((area1**2) * 3.14159)/10000 == ((area2**2) * 3.14159)/10000:
    print("Iguais")
elif ((area1**2) * 3.14159)/10000 > ((area2**2) * 3.14159)/10000:
    print("Primeiro circulo")
else:
    print("Segundo circulo")