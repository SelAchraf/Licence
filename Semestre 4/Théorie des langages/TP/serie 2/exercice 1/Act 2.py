def unflattess_word(word):
    L=[]
    cpt=1
    for i in range (len (word)-1) :
        if word[i]==word[i+1]:
            cpt+=1
        else: 
            L.append((word[i],cpt))    
            cpt=1
    L.append((word[len(word)-1],cpt))  
    return L         
print (unflattess_word('aabbbbccc'))     
                
                