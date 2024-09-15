L=[1,3,5,7,9,8,6,4,2]
L1=[]
def symmetric_browse(L):                                                
    i=0                                                                                                                
    j=len(L)-1                                                          
    k=int(len(L)/2 if len(L)%2==0 else (len(L)/2)+1)                   
    while i < (k):                                                                                                                                                           
        if j >= k :                                    # L1.append (L[i])                           
            L1.extend ([L[i],L[j]])                    # i+=1                               
            i+=1                                       # if j >= k :
            j-=1                                       #    L1.append (L[j])
        else :                                         #    j-=1
            L1.append (L[i])                      
            i+=1                                                            
    return(L1)    
print(symmetric_browse(L))