def solution(sides):
    cnt=0
    max_sides = max(sides)
    sum_sides = sum(sides)-max_sides
    
            
    print(max_sides, cnt)
    if max_sides < sum_sides: return 1
    else: return 2;
    
