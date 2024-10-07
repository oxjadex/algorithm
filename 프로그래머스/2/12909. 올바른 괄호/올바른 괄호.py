def solution(s):
    answer = True
    
    stack = []
    for i in s:
        if i == '(': stack.append(i)
        if i == ')': 
            if len(stack)==0: return False
            stack.pop()
    
    return False if stack else True
            
    
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    print('Hello Python')

    return True