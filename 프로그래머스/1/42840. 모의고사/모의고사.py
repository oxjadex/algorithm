def solution(answers):
    answer = []
    # 식을 하나마들기?
    Su1=[1, 2, 3, 4, 5]
    Su2=[2, 1, 2, 3, 2, 4, 2, 5]
    Su3=[3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    
    cnt = [0, 0, 0]
    
    for index, val in enumerate(answers):
        if val== Su1[index%len(Su1)]: cnt[0]+=1
        if val== Su2[index%len(Su2)]: cnt[1]+=1
        if val== Su3[index%len(Su3)]: cnt[2]+=1
    
    for i, s in enumerate(cnt):
        if s == max(cnt): answer.append(i+1)
    
    return answer