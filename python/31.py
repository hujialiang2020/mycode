a=int(input('请输入a:'))
b=int(input('请输入b:'))
c=int(input('请输入c:'))
if a>b and a>c:
    print(a)
if b>a and b>c:
    print(b)
if c>a and c>b:
    print(c)
if a==b and b==c and a==c:
    print(a)
if a==b and b>c:
    print(b)
if a==c and c>a:
    print(c)
if b==c and b>a:
    print(b)
