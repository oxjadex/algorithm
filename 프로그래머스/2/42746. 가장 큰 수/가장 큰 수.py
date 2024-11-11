def solution(numbers):
    answer = ''
    Sn = []
    for i in numbers:
        Sn.append(str(i)) 
    number = sorted(Sn, key = lambda x : (x[0], x*3), reverse=True)
    for i in number:
        answer+= i 
    if (int(answer)==0): answer = '0'
    return answer