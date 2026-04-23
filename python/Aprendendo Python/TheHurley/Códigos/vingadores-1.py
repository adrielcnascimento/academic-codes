nome = input()


if nome != "Homem de Ferro" and nome != "Capitão América" and nome != "Hulk" and nome != "Thor" and nome != "Gavião Arqueiro" and nome != "Viúva Negra" :
    print("Vingador Inválido")
else:
    atk = input()
    energia = int(input())
    if nome == "Capitão América":
        if atk == "Escudo" :
            if energia >= 7:
                print("%s conseguiu derrotar Thanos"%nome)
            else:
                print("%s NAO conseguiu derrotar Thanos, chamem outro Vingador"%nome)
        elif atk == "Armadura de Ferro":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Homem de Ferro"%nome)
        elif atk == "Força Bruta":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Hulk"%nome)
        elif atk == "Martelo":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Thor"%nome)
        elif atk == "Arco e Flecha":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Gavião Arqueiro"%nome)
        else:
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder da Viúva Negra"%nome)
    elif nome == "Homem de Ferro":
        if atk == "Armadura de Ferro" :
            if energia >= 10:
                print("%s conseguiu derrotar Thanos"%nome)
            else:
                print("%s NAO conseguiu derrotar Thanos, chamem outro Vingador"%nome)
        elif atk == "Escudo":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Capitão América"%nome)
        elif atk == "Força Bruta":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Hulk"%nome)
        elif atk == "Martelo":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Thor"%nome)
        elif atk == "Arco e Flecha":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Gavião Arqueiro"%nome)
        else:
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder da Viúva Negra"%nome)
    elif nome == "Hulk":
        if atk == "Força Bruta" :
            if energia >= 5:
                print("%s conseguiu derrotar Thanos"%nome)
            else:
                print("%s NAO conseguiu derrotar Thanos, chamem outro Vingador"%nome)
        elif atk == "Escudo":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Capitão América"%nome)
        elif atk == "Armadura de Ferro":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Homem de Ferro"%nome)
        elif atk == "Martelo":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Thor"%nome)
        elif atk == "Arco e Flecha":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Gavião Arqueiro"%nome)
        else:
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder da Viúva Negra"%nome)
    elif nome == "Thor":
        if atk == "Martelo" :
            if energia >= 4:
                print("%s conseguiu derrotar Thanos"%nome)
            else:
                print("%s NAO conseguiu derrotar Thanos, chamem outro Vingador"%nome)
        elif atk == "Escudo":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Capitão América"%nome)
        elif atk == "Armadura de Ferro":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Homem de Ferro"%nome)
        elif atk == "Força Bruta":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Hulk"%nome)
        elif atk == "Arco e Flecha":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Gavião Arqueiro"%nome)
        else:
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder da Viúva Negra"%nome)
    elif nome == "Gavião Arqueiro":
        if atk == "Arco e Flecha" :
            if energia >= 12:
                print("%s conseguiu derrotar Thanos"%nome)
            else:
                print("%s NAO conseguiu derrotar Thanos, chamem outro Vingador"%nome)
        elif atk == "Escudo":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Capitão América"%nome)
        elif atk == "Armadura de Ferro":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Homem de Ferro"%nome)
        elif atk == "Martelo":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Thor"%nome)
        elif atk == "Força Bruta":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Hulk"%nome)
        else:
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder da Viúva Negra"%nome)
    else:
        if atk == "Inteligência" :
            if energia >= 20:
                print("%s conseguiu derrotar Thanos"%nome)
            else:
                print("%s NAO conseguiu derrotar Thanos, chamem outro Vingador"%nome)
        elif atk == "Escudo":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Capitão América"%nome)
        elif atk == "Armadura de Ferro":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Homem de Ferro"%nome)
        elif atk == "Martelo":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Thor"%nome)
        elif atk == "Força Bruta":
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Hulk"%nome)
        else:
            print("%s NAO conseguiu derrotar Thanos\nEsse é o poder do Gavião Arqueiro"%nome)