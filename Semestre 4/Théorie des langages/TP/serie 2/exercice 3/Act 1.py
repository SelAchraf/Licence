def shuffle_symbol(word,c):
    L=[]
    n=len(word)
    for i in range (n+1):
            L.append(word[:i]+c+word[i:])
    return L
print(shuffle_symbol('abcd','x'))