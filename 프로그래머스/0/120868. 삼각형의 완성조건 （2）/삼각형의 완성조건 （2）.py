def solution(sides):
    answer = 0
    sidesMax = max(sides)
    sidesMin = min(sides)
    
    # 가장 긴 변이 i 중 있을 경우
    for j in range(sidesMax+1-sidesMin, sidesMax+1):
        answer +=1
    # 나머지 한 변이 가장 긴 변인 경우
    for j in range(sidesMax+1, sidesMin+sidesMax):
        answer +=1
    return answer