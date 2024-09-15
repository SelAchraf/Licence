L=[1,3,5,7,9,10,8,6,4,2]
L1=[]
def symmetric_browse(L):                                                                                                                   #   j=len(L)-1                                               
    k=len(L)-1 
    i=0                                                         
    s=int(len(L)/2 if len(L)%2==0 else (len(L)/2)+1)                     
    for i in range (s):                                                             
        L1.append(L[i])                                                 
        if k==i : 
            break                                                           
        L1.append(L[k])                                                            
        k-=1                                         
    return (L1)                                                           
print(symmetric_browse(L))