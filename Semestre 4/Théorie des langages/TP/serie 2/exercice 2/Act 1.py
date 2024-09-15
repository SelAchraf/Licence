def prefixes(word):
    L=[""]
    for i in range (len (word)):
        L.append(word[:i+1])
    return L              
print(prefixes('aaabbbccc'))    