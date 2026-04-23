I = int (input ())
F = int (input ())

if ((I > 0 and I < 25) and (F > 0 and F < 25)):
    if (F < I):
        print ("Eu odeio a professora!")
    elif (I < F - 3):
        print ("Muito bem! No prazo!")
    elif ((I <= F -2) and (F < 24)):
        print ("Parece o trabalho do meu filho!")
    elif (F < 24):
        F = F + 2
        print ("Trabalho Apresentado!")
    elif ((I <= F - 2) and (F > 24)):
        print ("Parece o trabalho do meu filho!")
        print ("Voce falhou! Ate a proxima!")
    else: print ("Voce falhou! Ate a proxima!")
else:   print ("Voce falhou! Ate a proxima!")