
#  Pythonは10^6ループでもきついかも？？



#入力 1つ

n = input()
n = int(input()



#入力 空白区切り   上はstring  下はint

A = raw_input().split()
print A[0]
print A[1]
print A[2]



A = map(int, raw_input().split())
print A[0]
print A[1]
print A[2]


A,B,C = map(int, raw_input().split())
print A
print B
print C


# 他の入力
http://qiita.com/lethe2211/items/6cbade2bc547649bc040



#出力 空白区切り

print A,B,C


# 出力 文字列と整数の組み合わせ		例  Case 1: A B

print 'Case 1: {0} {1}'.format(A, B)



# 配列(pythonではlist) の出力 0 or n-1

A = ["aeffeeee", "b", "c", "d", "e"] 
print A[0]
pirnt A[-1]


# 他の配列操作
http://d.hatena.ne.jp/yumimue/20071205/1196839438



# 関数とグローバル変数と出力

a = "abc"

def F():
	global a
	a = "def"
	print a
 
F() # def
print a # def






# c++のreturn文 ###

a = input()
if a == 0:
	quit()





# for文 ######

n = 5

for i in range(n):
	print i


# for文 逆順

for i in reversed(range(5)):
    print i
# 4
# 3
# 2
# 1
# 0



# for文 配列

A = [1, 2, 3, 4, 5]
for x in A:
	print x




# まとめ    // は切捨ての乗算

def F(n):
    s = (n-1) // 2
    return (16*s*s*s + 30*s*s + 26*s + 3) // 3


a = int(input())
for i in range(a):
	n = int(input())
	print F(n)%1000000007



	
# 文字列処理
http://d.hatena.ne.jp/yumimue/20071223/1198407682	


	
	
	
	
	
	
