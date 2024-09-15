L1 = [5,8,12,1,13,17]
L2 = [6,7,12,5,17]
L3 = []
def substract (L1,L2):  
    for i in range (len (L1)) :                
        if L1[i] not in L2 :                 
            L3.append(L1[i])
    return L3
print (substract(L1,L2)) 
         
          
    


