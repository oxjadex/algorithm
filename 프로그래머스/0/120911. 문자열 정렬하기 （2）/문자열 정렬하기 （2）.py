def solution(my_string):
    answer = ''
    middle= []
    for i in my_string:
        if (i.isupper()):
            middle.append(i.lower())
        else: middle.append(i)
    middle.sort()
    return ''.join(middle)