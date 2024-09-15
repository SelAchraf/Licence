def accept_L1 (word):
    cpt_a=0;
    cpt_b=0;
    cpt_c=0;
    for i in range (len(word)):
        if word[i]=='a':
            cpt_a+=1;
        if word[i]=='b':
            cpt_b+=1;
        if word[i]=='c':
            cpt_c+=1;    
    if  cpt_a%2==0 and cpt_b%3==0 and cpt_c%6==0:
        print("accept")
    else:
        print("not accept")  
print(accept_L1 ("aabbbcccccc"))                
            