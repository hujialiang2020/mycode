p_score=int(input('请输入您的Python成绩：'))
m_score=int(input('请输入您的数学成绩：'))
if p_score>=90 and m_score>=90:
    print('优秀')
if (p_score>=90 and m_score<60) or (p_score<60 and m_score>=90):
    print('偏科')
