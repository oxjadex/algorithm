def solution(nums):
    answer = 0
    numsS = set()
    for num in nums: 
        numsS.add(num)
    
    answer=min((len(nums)/2, len(numsS)))
    
    return answer