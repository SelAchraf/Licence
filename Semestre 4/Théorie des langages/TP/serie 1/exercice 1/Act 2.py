L1=[6,1]
L2=[2,4]
L3=[]
def repeat_by_list(L1,L2):
    c=0
    i=0
    for c in range (len(L1)):       
        for i in range (L2[c]):
            L3.append(L1[c]) 
    return L3
print(repeat_by_list(L1,L2))        