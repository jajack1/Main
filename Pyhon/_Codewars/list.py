# http://udemy.benesse.co.jp/development/python-list.html
def find_multiples(a, b):
    list=[]
    for num in range(int(b/a)):
        x=((num+1)*a)
        list.append(x)
        
    return list;
