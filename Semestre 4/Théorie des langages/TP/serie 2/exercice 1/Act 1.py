def flattess_word(*w_tuple):
    L=[]
    for i in w_tuple:
        for j in range (i[1]):      
            L.append(i[0])
    return "".join(L)
print (flattess_word(('a',2),('b',4),('c',3)))        