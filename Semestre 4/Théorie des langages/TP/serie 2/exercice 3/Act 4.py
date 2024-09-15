def similate_fsa(word):
    state=0
    for i in range(len(word)):
        if(word[i] != "a" and word[i] != "b" and word[i] != "c" and word[i] != "d" ):
            return False 
        if(state == 0 and word[i] == "a"):
            state+=1
        if(state == 1):
            if(word[i] == "c" or word[i] == "d"):
                state-=1
            elif(word[i] == "b"):
                state+=1
        if(state==2 and word[i] == "c"):
            state+=1
        if(state==3):
            if(word[i] == "a" or word[i] == "b"):
                state-=1
            elif(word[i] == "d"):
                state+=1
    if(state==4):
        return True
    else:
        return False
print(similate_fsa("xaabcddb"))
print(similate_fsa("cdbaabbcdb"))
print(similate_fsa("acbdab"))
