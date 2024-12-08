from itertools import permutations

def isPrime(n):
    if n < 2:  
        return False
    for i in range(2, int(n**0.5)+1):
        if n%i == 0: return False
    return True

def solution(numbers):
    unique_numbers = set() 
    
    n = list(permutations(numbers, 3))
    cnt = 0
    for i in range(1, len(numbers) + 1):
        perms = permutations(numbers, i)
        
        for tup in perms:
            unique_numbers.add(int(''.join(tup)))
        
    for num in unique_numbers:
        if isPrime(num):
            cnt += 1
    return cnt