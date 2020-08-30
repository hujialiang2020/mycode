n=int(input('请输入一个时间'))
print(n)
if n==0:
    print('半夜好')
elif n<6:
    print('凌晨好')
elif n<8:
    print('早晨好')
elif n<11:
    print('上午好')
elif n<13:
    print('中午好')
elif n<17:
    print('下午好')
elif n<19:
    print('傍晚好')
elif n<23:
    print('晚上好')
else:
    print('半夜好')
