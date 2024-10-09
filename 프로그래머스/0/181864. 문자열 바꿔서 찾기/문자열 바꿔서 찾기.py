def solution(myString, pat):
    answer = 0
    reverse = ''
    dict = {"A": "B", "B": "A"}
    for i in myString:
        reverse+=(dict[i]) 
    print(reverse)
    return 1 if pat in reverse else 0