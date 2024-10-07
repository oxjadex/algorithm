def solution(video_len, pos, op_start, op_end, commands):
    answer = ''
    start_second= int(op_start[0:2]) * 60 + int(op_start[3:5])
    end_second=int(op_end[0:2]) * 60 + int(op_end[3:5])
    video_second = int(video_len[0:2]) * 60 + int(video_len[3:5])
    pos_second = int(pos[0:2]) * 60 + int(pos[3:5])
    for i in commands:
        if start_second<=pos_second <=end_second:
            pos_second = end_second
        if i == "prev":
            if pos_second - 0 <10:
                pos_second = 0
                
            else: pos_second=pos_second-10
        
        if i == "next":
            if video_second-pos_second <10:
                pos_second = video_second
            else: pos_second+=10   
        
    if start_second<=pos_second <=end_second:
            pos_second = end_second
    
    minutes = int(pos_second//60)
    seconds = int(pos_second%60)
            
    answer= "%02d:%02d" %(minutes, seconds)
    return answer