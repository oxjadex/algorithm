def solution(s):
    answer = [0, 0]
    while (s!='1'):
        answer[0]+=1
        lens = s.count('1')
        answer[1]+=len(s) - lens
        s = bin(lens)[2:]
    return answer