tipo = input().upper()
grau = float(input())

#string.uper serve para transformar em maiusculo
if (tipo == "C" and grau <= -273.0) or (tipo == "F" and grau <= -459.67) or (tipo == "K" and grau <= 0.0):
    print("Valor de temperatura abaixo do minimo")
elif tipo == "C":
    print("%.2f F"%((1.8*grau)+32))
    print("%.2f K"%(grau + 273.15))
elif tipo == "K":
    print("%.2f C"%(grau - 273.15))
    print("%.2f F"%((grau-273.15)*1.8+32))
else:
    print("%.2f C"%((grau-32)/1.8))
    print("%.2f K"%(((grau-32)/1.8)+273.15))