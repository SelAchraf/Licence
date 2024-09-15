def conditional_replace(s,sub1,sub2,sub3,sub4):
    A = len (sub1)
    B = len (sub2)
    for i in range (len(s)):
        if sub1 not  in s :
            return s  
        now = s[i:i+A]  
        if now==sub1:
            next = s[i+A:i+A+B]
            if next==(sub2):
                return s.replace(sub1,sub3)
            else:
                return s.replace(sub1,sub4)                  
print (conditional_replace("abc=def","=","f","=e","=f"))
    