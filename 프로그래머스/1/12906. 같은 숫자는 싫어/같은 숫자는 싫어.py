def solution(arr):
    answer = []
    isSame = -1
    for i in arr:
        if isSame != i:
            answer.append(i)
            isSame = i
        
            
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    print('Hello Python')
    return answer