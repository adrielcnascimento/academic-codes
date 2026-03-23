''' multa velocidade '''
velocidade = float (input ("Entre com a velocidade: \n"))

if velocidade <= 80:
    print ("Sem multas")
else:
    multa = 5 * (velocidade - 80)
    print ("O valor da multa em R$ é: %5.2f" %multa)