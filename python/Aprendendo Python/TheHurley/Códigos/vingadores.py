nome = input()
atk = input()
energia = int(input())

if nome == "Fulano":
    print("Vingador Inválido")
else:
    if nome == "Capitão América":
        if atk == "Escudo" :
            if energia >= 7:
                print("%s conseguiu derrotar Thanos"%nome)
            else:
                print("%s NAO conseguiu derrotar Thanos, chamem outro Vingador"%nome)
        elif atk == "Armadura de Ferro":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Homem de Ferro"%nome)
        elif atk == "Força Bruta":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Hulk"%nome)
        elif atk == "Martelo":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Thor"%nome)
        elif atk == "Arco e Flecha":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Gavião Arqueiro"%nome)
        else:
            print("%s NAO conseguiu derrotar Thanos Esse é o poder da Viúva Negra"%nome)
    elif nome == "Homem de Ferro":
        if atk == "Armadura de Ferro" :
            if energia >= 10:
                print("%s conseguiu derrotar Thanos"%nome)
            else:
                print("%s NAO conseguiu derrotar Thanos, chamem outro Vingador"%nome)
        elif atk == "Escudo":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Capitão América"%nome)
        elif atk == "Força Bruta":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Hulk"%nome)
        elif atk == "Martelo":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Thor"%nome)
        elif atk == "Arco e Flecha":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Gavião Arqueiro"%nome)
        else:
            print("%s NAO conseguiu derrotar Thanos Esse é o poder da Viúva Negra"%nome)
    elif nome == "Hulk":
        if atk == "Força Bruto" :
            if energia >= 5:
                print("%s conseguiu derrotar Thanos"%nome)
            else:
                print("%s NAO conseguiu derrotar Thanos, chamem outro Vingador"%nome)
        elif atk == "Escudo":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Capitão América"%nome)
        elif atk == "Armadura de Ferro":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Homem de Ferro"%nome)
        elif atk == "Martelo":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Thor"%nome)
        elif atk == "Arco e Flecha":
            print("%s NAO conseguiu derrotar Thanos Esse é o poder do Gavião Arqueiro"%nome)
        else:
            print("%s NAO conseguiu derrotar Thanos Esse é o poder da Viúva Negra"%nome)