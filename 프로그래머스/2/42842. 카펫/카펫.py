def solution(brown, yellow):
    answer = []
    
    MyA = []
    nul = brown + yellow
    for i in range(1,nul):
        j = nul/i
        if (i-2) * (j-2) == yellow: 
            print(i, j)
            answer.append(j)
            answer.append(i)
            return answer
                    

