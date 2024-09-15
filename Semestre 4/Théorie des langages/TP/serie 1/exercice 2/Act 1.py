def crange(*cinterv):
    L=[]  
    for i in cinterv :
        start = ord(i[0])  
        end = ord(i[1])
        for j in range (start , end+1):
            L.append (chr(j))
    return "".join(L)        
print (crange(["a","z"],["A","Z"],["0","9"]))