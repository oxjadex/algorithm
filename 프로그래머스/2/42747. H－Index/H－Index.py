def solution(citations):
    answer = 0
    cnt = 0
    citations.sort()
    
    for i in range(1, len(citations)+1): 
        cnt=0
        for j in citations:
            if (j>=i): cnt +=1
        if (i>=cnt): return cnt