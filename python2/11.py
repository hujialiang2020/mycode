p_score=int(input('请输入您的Python成绩:'))
m_score=int(input('请输入您的数学成绩:'))
if p_score>=90:
    if m_score>=90:
        print('优秀')
    elif m_score<60:
        print('偏科')
    else:
        print('中等偏上')
elif p_score<60:
    if m_score>=90:
        print('偏科')
    elif m_score<60:
        print('很差')
    else:
        print('中等偏下')
else:    
    if m_score <60:
        print('中等偏下')
    elif m_score >=90:
        print('中等偏上')
    else:
        print('中等')
    
