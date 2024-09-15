def replace_many(s,L1,L2):
    L3=[]   
    for i in range (len(s)): 
        if s[i] not in L1:
            L3.append(s[i])
        for j in range (len(L1)):
            if s[i]==L1[j]:
                L3.append(L2[j])                    
                break           
    return "".join(L3)
print (replace_many("avabc",["a","b","c"],["b","a","d"]))     
