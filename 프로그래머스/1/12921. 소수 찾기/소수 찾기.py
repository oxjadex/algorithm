def solution(n):
    a = 0  
    for i in range(2, n + 1): 
        isPrime = True  
        for j in range(2, int(i**0.5)+1): 
            if i % j == 0:  
                isPrime = False
                break
        if isPrime:  
            a += 1
    return a
