def solution(my_strings, parts):
    answer = ''
    for i, my in enumerate(my_strings):
        answer+=my[parts[i][0]:parts[i][1]+1]
    return answer