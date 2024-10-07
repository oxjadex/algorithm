def solution(s):
    answer = -1
    
    stack=[]
    for i in s:
        if stack and stack[-1] == i: stack.pop()
        else: stack.append(i)
        
        
    return 0 if stack else 1
#     for i in range(len(s)-1):
#         if s[i]==s[i+1]:
#             s.replace(s[i], '').replace(s[i+1], '')
            
#     cnt =0
#     for i in range(len(s)-1): 
#         if s[i]==s[i+1]: cnt+=1

#     if (cnt): answer=1
#     else: answer=0
    # return answer