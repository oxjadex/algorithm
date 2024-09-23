def solution(s, n):
    answer = ''
    for i in s:
        if i == ' ':  
            answer += ' '
        elif i.islower(): 
            answer += chr((ord(i) - ord('a') + n) % 26 + ord('a'))
        elif i.isupper(): 
            answer += chr((ord(i) - ord('A') + n) % 26 + ord('A'))
    return answer


#chr 함수..써봐...식에다가...
# z == 122
# 123이 97가 같은 취급이 될려면 %123-97 = 26 나머지가 96이 나 뭐로 나누면 나머지가 97?? 
# a == 97

# 97 122 
# 123 97
# 256 

# A == 65
# B == 66