def max_de_tres(n1, n2, n3):
    if n1 and n2 < n3:
        print(n3)
    elif n1 and n3 < n2:
        print(n2)
    elif n2 and n3 < n1:
        print(n1)
    else:
        print('igualdad')

max_de_tres(input('#1: '), input('#2: '), input('#3: '))
