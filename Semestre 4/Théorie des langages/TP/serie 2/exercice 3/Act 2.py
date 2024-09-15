def shuffle_symbol(word,c):
    L=[]
    n=len(word)
    for i in range (n+1):
            L.append(word[:i]+c+word[i:])
    return L
def shuffle_word(word1,word2):
    A=len(word1)
    B=len(word2)
    if A==1:
        return shuffle_symbol(word2,word1);
    elif B==1:
        return shuffle_symbol(word1,word2);
    else:
        return [word1[0] + s for s in shuffle_word(word1[1:],word2)] + [word2[0] + s for s in shuffle_word(word1, word2[1:])]
print (shuffle_word("ab","12"))    