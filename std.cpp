// srm659_down_1E
// srm417_E2_end


#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<utility>
#include <fstream>
#include<set>
#include<map>
#include<cctype>
#include<cmath>
#include<algorithm>
#include <numeric>
using namespace std;


#define clr(a) memset((a), 0 ,sizeof(a))







// erase(','),  split number
// ','の削除
// 入力の修正する問題
// 1,2,5,8 ⇒ 1 2 5 8

int k=0;
		for(int j=1;j<i;j++){
			if(s[j]==','){
				s2=s.substr(k,j-k);
				const char *c4=s2.c_str();
				a=atoi(c4);
				vc.push_back(a);
				k=j+1;
			}
		}



// split " " && set
// ユニークな文字列の総数
// srm453.5_2E
// sample 1,	 {"abcd EDE OF", "abcd ZZZ OF"}
//				 set.insert		"abcd", "EDE", "OF", "ZZZ"
//				 return 4;

class	ToolsBox  {
public:
	int countTools(vector<string> need){
		set<string> se;
		for(int i=0;i<need.size();i++){
			stringstream ss(need[i]);
			string t;
			while(ss>>t) se.insert(t);
		}
		return se.size();
	}
};




// map count 1 prog
// autoの為、保留
int main(){
	int n,a,cnt=0;
	mi mp;
	cin >> n;
	while(n--){
		cin >> a;
		mp[a]++;
	}
	for(auto it=mp.begin();it!=mp.end();it++){
		if(it->second==1)cnt++;
	}
	cout << cnt << endl;
	return 0;
}



// gcd
int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b,a%b);
}


// dfs 
// 全ての組み合わせの順列を列挙する問題
// 25 39 51 58 64 76 83 90....
int A[]={25,39,51,76,163,111,128,133,138};
vector<int> vc;
 
void dfs(int a,int b){
	if(a==9){
		vc.push_back(b);
		return;
	}
	dfs(a+1,b);
	dfs(a+1,b+A[a]);
}
 
int main(){
	dfs(0,0);
	dfs(0,58);
	dfs(0,136);
	sort(ALL(vc));
	for(int i=0;i<vc.size();i++){
		if(i==0||vc[i]!=vc[i-1])
			cout << vc[i] << endl;
	}
	return 0;
}



// dfs && memo
bool memo[10000];
int A[]={25,39,51,76,163,111,128,133,138};
vector<int> vc;

void dfs(int a,int b){
	if(a==10) return;
	if(memo[b]==false)vc.push_back(b);
	memo[b]=true;
	dfs(a+1,b);
	dfs(a+1,b+A[a]);
}

int main(){
	dfs(0,0);
	dfs(0,58);
	dfs(0,136);
	sort(ALL(vc));
	for(int i=0;i<vc.size();i++){
		cout << vc[i] << endl;
	}
	return 0;
}




// BFS
// srm439
// max square	area
// 始点から右、下、斜め下の点を、BFSで広げていく
// 面積を求める問題
// sample 1,				{"42101",
//							 "22100",
//							 "22101"}		"1" square==3*3
//							return 9
class SquareOfDigits{
public:
	int getMax(vector<string> data){
		int Y=data.size();
		int X=data[0].size();
		int M=0;
		int a=min(X,Y);
		
		for(int i=0;i<Y;i++){
			for(int j=0;j<X;j++){
				for(int k=0;k<a;k++){
					if(i+k>=Y||j+k>=X) continue;	
					
					char c=data[i][j];
					if(c==data[i][j+k]&&c==data[i+k][j]&&c==data[i+k][j+k])
						M=max(M,(k+1)*(k+1));
				}
			}
		}
		return M;
	}
};




// greedy ABC_024_c
int A[10010],B[10010];

int main(){
	int m,n,k,i,j;
	cin >> m >> n >> k;
	for(i=0;i<n;i++){
		cin >> A[i] >> B[i];
	}
	
	for(j=0;j<k;j++){
		int a,b,x,y;
		cin >> a >> b;
		x=a,y=a;
		for(i=0;i<n;i++){
			if(A[i]<=x&&x<=B[i])
				x=A[i];
			if(A[i]<=y&&y<=B[i])
				y=B[i];
			if(x<=b&&b<=y){
				cout << i+1 << endl;
				break;
			}
		}
	}
	return 0;
}









// next_permutation
// mini element number
// コストの最小値を求める、組み合わせ問題

int main(){
    int L[3],r,b,y;
    cin>>L[0]>>L[1]>>L[2]>>r>>b>>y;
    int ans=INF;
    sort(L,L+3);
    do{
        int cost=0;
        cost+=2*(L[1]+L[2])*r;
        cost+=2*(L[0]+L[2])*b;
        cost+=2*(L[0]+L[1])*y;
        ans=min(ans,cost);
    }while(next_permutation(L,L+3));
    cout<<ans<<endl;
    return 0;
}




// srm626_2E_SumOfPower
// サンプルとコードが合わないので保留

//  	{1,2}
//		Returns: 6
//
//	    {1} => 1
//	    {2} => 2
//	    {1,2} => 3
//		1+2+3=6.


#include<bits/stdc++.h>
using namespace std;



class SumOfPower{
public:
	int findSum(vector<int> array){
		int res=0;
		int A[1010]={0};
		for(int i=0;i<array.size();i++){
			res+=array[i]*(i+1)*(array.size()-1);
		}
		
		return res;
	}

};





// uniqe number sequence
// 必ず移動いた時の、uniqeな組み合わせ
// n桁の数も使うため、文字列で処理
// 組み合わせ問題
// 
// {4,7,4} ->  return 3
// {4,7,4},{7,4,4},{4,4,7};

// {1,47} -> return 1;
// {47,1}


vector<int> sequence;

int main(){
	string s;
	int a;
	while(cin >> a){
		sequence.push_back(a);
	}
	
	for(int i=0;i<sequence.size();i++) s+='@'+sequence[i];
	
	for(int i=0;i<s.size();i++){
		cout << s[i] << endl;
	}	
	
	set<string> m;
	for(int x=0;x<s.size();x++){
		for(int y=x+1;y<s.size();y++){
			swap(s[x],s[y]);
			m.insert(s);
			swap(s[x],s[y]);
		}
	}
	
	cout << m.size() << endl;
	
	return 0;
}



// prime table
// prime[i]==true 	prime number
// prime[i]==false	not prime number
// srm_526_2E

bool prime[2001];
	
int main(){
	for(int i=0;i<=2000;i++) prime[i]=false;
	for(int i=3;i<=2000;i+=2) prime[i]=true;
	prime[2]=true;
	
	for(int i=3;i<=n;i+=2){
		if(!prime[i]) continue;
		for(int j=i+i;j<=n;j+=i) prime[j]=false;
	}
}


// prime number search
bool isprime(int n){
  if(n == 0 || n == 1) return false;
  for(int i = 2; i * i <= n; i++){
    if(n % i == 0)
      return false;
  }
  return true;
}



// KUPC2015 -- A
// find string count 2 words
// dp[0] start dp[s.size()] end		DP

// 検索した文字列の総数問題

int main(){
	int n;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		vector<int> dp(s.size()+1);
		for(int i=0;i<s.size();i++){
			if(i+5<=s.size() && s.substr(i,5)=="tokyo" || s.substr(i,5)=="kyoto"){
				dp[i+5]=dp[i]+1;
			}
			dp[i+1]=max(dp[i+1],dp[i]);
		}
		cout << dp[s.size()] << endl;
		
	}
	return 0;
}



// next uniqe digit
// but int or long long
// 答えが出るまで、n++ 問題
// sample 1, 1987 ⇒ 2013
// sample 2, 999  ⇒ 1023

int n;
int d[10];

bool F(int a){
	for(int i=0;i<10;i++) d[i]=0;
	while(a){
		d[a%10]++;
		a/=10;
	}
	for(int i=0;i<10;i++) if(d[i]>1) return 1;
	return 0;
}

int main(){
	cin >> n;
	while(F(++n));
	cout << n << endl;
	return 0;
}



// MAX turn
// cards[i]==card[i+1]-1  erase
// 幅がa and a+1 の MAX turn 問題
// 数え上げ問題
// sample 1, 	1 2 3 4 5	⇒ 1 3 5
// sample 2,	4 5 8 10 11 ⇒ 4 8 10
// srm 500_E


class SRMCards {
public:
	int maxTurns(vector<int> cards){
		set<int> se(cards.begin(),cards.end());
		
		int res=0;
		while(!se.empty()){
			int a=*se.begin();
			se.erase(a);
			se.erase(a+1);
			res++;
		}

		return res;
	}
};




// set (syuugou)
// 理解不能　保留
// srm_484_2E
// sample 1,  answer[0]=='Y' ⇒ A[0] ... answer[4]=='N' ⇒ not A[4];


class NumberMagicEasy  {
public:
	int theNumber(string answer){
		int A[4][8] ={
		 			{ 1, 2, 3, 4, 5, 6, 7, 8 },
					{ 1, 2, 3, 4, 9, 10, 11, 12 },
		 			{ 1, 2, 5, 6, 9, 10, 13, 14 },
					{ 1, 3, 5, 7, 9, 11, 13, 15 }
		};
		
		for(int i=1;i<16;i++){
			bool ok=true, ok2=false;
			for(int j=0;j<4;j++){
				if(answer[j]=='N'){
					for(int k=0;k<8;k++)
						if(A[j][k]==i)
							ok=false;
				}
				else{
					for(int k=0;k<8;k++)
						if(A[j][k]==i)
							ok2=true;
				}
			}
			if(ok&&ok2) return i;
		}
	
		return 16;
	}

};




// all sum element & avg
// sample 1,	1, 2, 3, 4 ⇒ 2.5
// double 平均値
// srm482_2E

#include <vector>
#include <numeric>
using namespace std;


class AverageAverage{
public:
	double average(vector<int> numList){
		return (double)accumulate(numList.begin(),numList.end(),0)/numList.size();
	}
};



// all multiplies element & min_element++;
// 答え不明 保留
// 1, 2 , 3 , 4 (answer< 2^62)
// srm 480

#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;

class Cryptography{public:
long long encrypt( vector <int> numbers )
{
    ++*min_element( numbers.begin(), numbers.end() );
    return accumulate( numbers.begin(), numbers.end(), 1ll, multiplies<long long>() );
}
};


// +++++ short function ++++++++


// vector<string> == s[n][?]
vector<string> s(n);

// int MAX
int n=INT_MAX;

// long long MAX
long long n=1e18;


// PI 3.14....
double pi=acos(-1.0);

// bit and
// n=7 ⇒ 111 , i=1 ⇒ 001	,  return 001 ⇒ 1
n&i


// return 2^n
return 1 << n;


// return a/(2^n)
return a >> n;


// set find
for(int i=0;i<n;i++){
	if(se.find(A[i])==se.end){
		se.insert(A[i]*k);
	}
}


// count element
if ( count( obtain.begin(), obtain.end(), m ) > 1 )


// obtain[find m element index]
// obtainの中の m の要素番号. index A[]になっているのは不明
A[ find(obtain.begin(),obtain.end(),m) - obtain.begin() ];


// long long ⇒ String
string toString(long long n){
	stringstream ss; ss<<n;
	return ss.str();
}


// int ⇒ String
void F(int n){
	stringstream ss;
	ss << n;
	string s = ss.str();
}


// String ⇒ long long
long long toNumber(string s){
	stringstream ss; long long n;
	ss<< s; ss >> n;
	return n;
}


// "ABCD" ⇒ "abcd"	
transform(s.begin(),s.end(),s.begin(),::tolower);


// kaiten jiten
// abcdef⇒bcdefa⇒cdefab
rotate(s.begin(), s.begin() + 1, s.end());



// bit count (1 count)
int countBits(int mask){
	int res=0;
	while(mask) mask&=(mask-1),++res;
	return res;
}


// vector v[][]
vector<vector<int> > v(h, vector<int>(w));



// goto
for(int i=0;i<n;i++){
	if(i==0){
		goto aa;
	}
}
aa:;

//--------------------------------------------------




// n bases ⇒ decimal
// all sum decimal element A and B   ">", "<", "="
// n進数を10進数に戻して、合計値の計算。2組を等符号で判定
// 合計を求める問題
// sample 1, 	6 2
//				1 0 1 1 1 1   ⇒	2 base, sum = 47
//				2 10
//				4 7			  ⇒	10 base, sum = 47
//				return "=";
int main(){
	int n,b,x;
	long long A=0,B=0;
	
	cin >> n >> b;
	for(int i=0;i<n;i++) cin >> x,A=A*b+x;
	cin >> n >> b;
	for(int i=0;i<n;i++) cin >> x,B=B*b+x;
	
	if(A==B) cout << "=" << endl;
	else if(A>B) cout << ">" << endl;
	else cout << "<" << endl;
	
	return 0;
}







// syakutori && ruiseki
// 不明、保留
// min
int F(int N, int K, vector<int> workingDay){
	vector<int> day(N);
	for(int i=0;i<workingDay.size();i++)
		day[workingDays[[i]-1]=1;
	int ans=K;
	for(int i=0;i<=N-K;i++){
		ans=min(ans,accumulate(day.begin()+i,day.begin()+i+K,0));
	}
	return ans;
}



// tentousuu
// TopCoder Open 2010 Algorithm Qualification Round 1
// 辞書順で最小、最大になるための行動数
// sample 1, 	string row = "BGGBG" ⇒ 	"BBGGG" or "GGGBB"
//				min count swap(row[i],row[i-1]) ⇒	 2 or 4
//				answer	2;


class GirlsAndBoys   {
public:
	int sortThem(string row){
		int i,j,n=row.size();
		int a=0,b=0;
		
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(row[i]=='G'&&row[j]=='B') a++;
				if(row[i]=='B'&&row[j]=='G') b++;
			}
		}
		return min(a,b);
	}
};


// String Insert
//	left + s[i] + right   argorithm
// aがないため保留
// 文字列の文字の並び替え問題
// srm420
// sample 1,	"BRBRR"
//				{0,0,1,0,3}
//				return "RRBRB";


class DeckRearranging   {
public:
	string rearrange(string deck, vector<int> above){
		string ans="";
		for(int i=0;i<deck.size();i++){
			ans=a.substr(0,above[i])+deck[i]+a.substr(above[i]);
		}
		
		return ans;
	}
};



// string search
// srm 441_2E
// 違う文字の最小個数、下記の場合、koder, coderで1つの違いが最小
// 文字を判定する問題
// sample 1,		"koder"
//					"topcoder"
//					return 1;


class DifferentStrings  {
public:
	int minimize(string A, string B){
		int res=INT_MAX;
		for(int i=0;i<=B.size()-A.size();i++){
			int cnt=0;
			for(int j=0;j<A.size();j++)
				if(B[i+j]!=A[j]) cnt++;
			
			res=min(res,cnt);
		}
		return res;
	}
};



// palindromes	parinndoro-mu
// 回文の最小文字列の問題
// srm428
//	sample 1,		 "abab"				"abacaba"
//	min palindromes	 "ababa" size=5		"abacaba" size=7
//					 return 5			return 7
class ThePalindrome   {
public:
	int find(string s){
		string s2=s;
		reverse(s2.begin(),s2.end());
		for(int i=0;i<s.size();i++){
			string s3=s.substr(i);
			string s4=s2.substr(0,s2.size()-i);
			if(s3==s4) return s.size()+i;
		}
		return s.size()*2-1;
	}
};




// srm468_2E
// 0<=A<=K
// A flight Saitankeiro
// 最短経路の問題 (実装は不明)
// sample 1, 	3
//				{4, 6, 7}
//				{1, 2, 3}
//				1
//				choose 1 + 6 + 7 = 13
//				return 13


class RoadOrFlightEasy{
public:
	int minTime(int N, vector<int> road, vector<int> flight, int K){
		int i,res=0;
		int reduce[50];
		for(i=0;i<N;i++) reduce[i]=max(0,road[i]-flight[i]);
		sort(reduce,reduce+N);
		for(i=0;i<N;i++) res+=road[i];
		for(i=0;i<K;i++) res-=reduce[N-1-i];
		
		return res;
	}
};




// price == b? + b? ...
// srm466_2E
// priceの数値があるか調べる(要素の合計値)
// 数値の探索問題
// コードに不明部分あり
// sample 1,	15, 1, 5, 10, 50
//				⇒ 5 + 10 = 15 
//				return "POSSIBLE"


class	LotteryTicket   {
public:
	string buy(int price, int b1, int b2, int b3, int b4){
		int i,j,go[4]={b1,b2,b3,b4},sum;
		for(i=0;i<1<<4;i++){
			sum=0;
			for(j=0;j<4;j++) if(i&(1<<j)) sum+=go[j];
			if(sum==price) return "POSSIBLE";
		}
		
		return "IMPOSSIBLE";
	}
};



// srm 462   Archery 
// each i expected point
// 答えが不明　保留
// sample 1,    4
//				{100, 0, 100, 0, 100}
//				return 60.0

class Archery    {
public:
	double expectedPoints(int N, vector<int> pt){
		int i;
		double res=0;
		for(i=0;i<N+1;i++) res+=pt[i]*(2*i+1);
		res/=(N+1)*(N+1);
		
		return res;
	}
};




// start{1,1} ~ trap		Manhattan min distance
// srm_461_2E
// 配列 min(trapX[i]-1+trapY[i]-1)
// 最小値の検索
// 削除候補
// sample 1, 			{4, 6, 8}
//						{1, 2, 1}
//						(4-1)+(1-1)= 3 ... min distance
//						reutrn 3


class TrappingRabbit  {
public:
	int findMinimumTime(vector<int> trapX, vector<int> trapY){
		int d=INT_MAX;
		for(int i=0;i<trapX.size();i++)
			d=min(d,(trapX[i]-1)+trapY[i]-1));
		return d;
	}

};



//F and D	'D' is diffusion
// srm 458_2E
// 3*3の配列の幅優先探索で Dをどこまで増やせるか
// 移動できる場所の総数問題
// sample 1,		"FFF"			sample 2,	"FFF"
//					"FDF"						"FDF"
//					"FFF"						"FFF"
//					1							2
//					return 5;					return 9;

class Desertification  {
public:
	int desertArea(vector<string> island, int T){
		int h=island.size();
		int w=island[0].size();
		
		for(int t=0;t<min(T,h+w);t++){
			vector<string> temp = island;
			
			for(int y=0;y<h;y++)
			for(int x=0;x<w;x++)
			if(temp[y][x]=='D'){
				for(int d=0;d<4;d++){
					if(x>=1) island[y][x-1]='D';
					if(y>=1) island[y-1][x]='D';
					if(x<w-1) island[y][x+1]='D';
					if(y<h-1) island[y+1][x]='D';
				}
			}
		}
		
		int cnt=0;
		for(int y=0;y<h;y++)
		for(int x=0;x<w;x++)
			if(island[y][x]=='D')
				cnt++;
		
		return cnt;
	}
};



// hash map
// srm445_2E
// ハッシュのmapの中にあるかを判定して、a.b.c....z と文字列を格納していく
// 文字の検索と文字生成問題
//
// sample 1,		"hello"
//					s[0]='a', s[1]='b', s[2]='c', 
//					s[2]==s[3] ⇒ s[3]='c', s[4]='d'
//					return "abccd"

class TheEncryptionDivTwo{
public:
	string encrypt(string s){
		string s2;
		map<char,char> mp;
		int cnt=0;
		
		for(int i=0;i<s.size();i++)
		if(mp.find(s[i])!=mp.end())
			s2+=mp[s[i]];
		else{
			mp[s[i]]='a'+cnt++;
			s2+=mp[s[i]];
		}		

		return s2;
	}
};



// hash map && set iteratro && set.size()
// srm_442_2E
// ユニークな文字列 S[i]*S[i] の合計値
// 文字列の検索問題
// sample 1,		{"orange", "orange" }
//					{"strawberry", "orange", "grapefruit", "watermelon" }
//					p[i]==d[j]&&unique ⇒ "orange" ⇒ p[i].size()==6 ⇒ 6*6
//					Returns: 36


class	SimpleWordGame  {
public:
	int points(vector<string> p, vector<string> d){
		map<string, bool> mp;
		set<string> se;
		int sum=0;
		for(int i=0;i<p.size();i++) se.insert(p[i]);
		for(int i=0;i<d.size();i++) mp[d[i]]=true;
		set<string>::iterator it;
		
		for(it=se.begin();it!=se.end();it++){
			if(mp.find(*it)!=mp.end())
			sum+=it->size()*it->size();
		}
		return sum;
	}
};



// Set&&Graph & Search & dfs 1 
// srm 436
// memo化したらいいかも！？
// 文字の探索問題
// 探索する経路(問題を)理解していない 保留
// sample 1, 	"NYY"
//				"YNN",
//				"YYN"
//				friend && friend friend ⇒ DFS 1
//				return 2;
class FriendScore  {
public:
	int highestScore(vector<string> friends){
		int M=0;
		for(int i=0;i<friends.size();i++){
			set<int> se;
			for(int j=0;j<friends.size();j++){
				if(friends[i][j]=='Y'){
					se.insert(j);
					for(int k=0;k<friends.size();k++){
						if(friends[j][k]=='Y') se.insert(k);
					}
				}
			}
			M=max(M,int(se.size()-1));
		}
		return M;
	}
};





// (ALL Seach bfs)
//	2009 TCO Algorithm Qualification Round 2 - Division I, Level One
// board == board1 or board2,  Min matigai
// 構造理解が不可　保留


char board1[8][8] = {{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
					{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
					{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, 
					{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
					{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, 
					{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                    {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
					{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}};

char board2[8][8] = {{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
					{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
					{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
					{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                    {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
					{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}};
/*

string board1[8] = {"WBWBWBWB",
					"BWBWBWBW",
					"WBWBWBWB", 
					"BWBWBWBW",
					"WBWBWBWB", 
					"BWBWBWBW",
					"WBWBWBWB", 
					"BWBWBWBW"};
					
	
string board2[8] = {"BWBWBWBW",
						"WBWBWBWB", 
						"BWBWBWBW",
						"WBWBWBWB", 
						"BWBWBWBW",
						"WBWBWBWB", 
						"BWBWBWBW",
						"WBWBWBWB"};
*/

class RepaintTheChessboard	{
public:
	int minimumChanges(vector<string> board){
		int res=INT_MAX;
		for(int i=0;i<=board.size()-8;i++){
			for(int j=0;j<=board[0].size();j++){
				
				int tmp=0,tmp2=0;
				for(int k=0;k<8;k++){
					for(int o=0;o<8;o++){
						if(board[i+k][j+o]!=board1[k][o]) tmp++;
						if(board[i+k][j+o]!=board2[k][o]) tmp2++;
					}
				}
				
				res=min(res,min(tmp,tmp2));
			}
		}
		return res;
	}
};


// arithmetic	sansuu
// srm 430
// mnより小さいと、Mxより大きい集合の合計でまとめる
// 数値の場合分け問題
// sample 1,	{10,20}				{20,8,6}
//			 	10					10
//			 	15					15
//			 	return 5			return 6

int A[2],B[2];

class CreateGroups  	{
public:
	int minChanges(vector<int> G, int mn, int Mx){
		A[0]=mn*G.size();
		A[1]=Mx*G.size();
		int total=0;
		for(int i=0;i<G.size();i++){
			total+=G[i];
		}
		if(total<A[0]||total>A[1]) return -1;
		for(int i=0;i<G.size();i++){
			if(G[i]<mn){
				B[0]+=mn-G[i];
			}
			else if(G[i]>Mx){
				B[1]+=G[i]-Mx;
			}
		}
		return max(B[0],B[1]);
		return -1;
	}
};



// to-nament
// srm426
// you == rival まで続ける問題　貪欲法
// n++ 無限試行問題
// sample 1,	16					1000
//				8					20
//				9					31
//				return 4			return 4

class KnockoutTourney   {
public:
	int meetRival(int N, int you, int rival){
		int ans=0;
		while(you!=rival){
			you=(you+1)/2;
			rival=(rival+1)/2;
			ans++;
		}
		return ans;
	}
};


// String sort
// srm 424
// A or Z reverse,		AZAAAZ ⇒ ZAAAZA
// sはAとZの逆順の文字列。元の文字列にAまたはZがあるならば、sの文字を格納する。
// 文字の場合分けと文字列の生成問題
// sample 1,		"AZ"				"ABACADA"
//					return ZA			ABACADA
class MagicSpell   {
public:
	string fixTheSpell(string spell){
		string s,s2;
		for(int i=0;i<spell.size();i++){
			if(spell[i]=='A'||spell[i]=='Z') s+=spell[i];
		}
		reverse(s.begin(),s.end());
	
		for(int i=0,j=0;i<spell.size();i++){
			if(spell[i]=='Z'||spell[i]=='A'){
				s2+=s[j];
				j++;
			}
			else s2+=spell[i];
		}	
		return s2;
	}
};

// srm 424		NO2,
//	senter
// 構造が不明　保留
//	for(int i=0,j=0;i<spell.size();i++){
	if(spell[i]!='Z'||spell[i]!='A'){
		string f="";
		f.push_back(spell[i]);
		s.insert(i,f);
	}
	return s;
	}
};





// int Reverse Sum
// srm 417
// reverse(reverse(x) + reverse(y))
// 数値の変換問題
// sample 1,		123,100
//					123		⇒ 321
//					100		⇒ 1
//					return 223		⇒ 321+1=322 reverse 223

class ReversedSum   {
public:
	int rev(int x){
		int y=0;
		while(x){
			y*=10;
			y+=x%10;
			x/=10;
		}
		return y;
	}
	
	int getReversedSum(int x, int y){
		return rev(rev(x)+rev(y));
	}
};





// Class & Array
// HACER RANK	Classes and Objects
// 合計値1 よりも、ほかの合計値が大きければ、cnt++ する。
// クラスで表現した、合計値の比較問題
// コンパイルエラー　保留
// sample 1,		3
//					30 40 45 10 10		1st 30+40+45+10+10=135
//					40 40 40 10 10		2nd 40+40+40+10+10=140
//					50 20 30 10 10		3rd 50+20+30+10+10=130
//					return 1			1st < 2nd   count++;
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
public:
    int sum=0;
    void Input(){
        for(int i=0;i<5;i++){
            int a;
            cin >> a;
            sum+=a;
        }
    }
    int CalculateTotalScore(){
        return sum;
    }
};

int main() {
   int n;
     cin>>n;
     Student s[n];
     for(int i=0;i<n;i++)
      s[i].Input();
     int count=0;
     int krish_score=s[0].CalculateTotalScore();
     for(int i=1;i<n;i++)
    {
      int total=s[i].CalculateTotalScore();
      if(total>krish_score)
        count++;
    }
     cout<<count;
    return 0;
}


// Class & template
// hacker rank		C++ Class Templates
// double, int, string の全てに対応する加算
// クラスで表現する a + b 問題
// sample 1,	3
//				string John Doe
//				int 1 2
//				float 4.0 1.5
//
//		return JohnDoe
//				3
//				5.5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;


template <class T>
class AddElements {
T element;
public:
    AddElements (T arg) {element=arg;}
    T add (T arg) {return element+arg;}
    T concatenate(T arg){return element+arg;}
};


int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}


// seach && count combination
// codeforces  B. Chocolate
// 問題が理解不能 保留
// sample 1,	3					5
//				0 1 0				1 0 1 0 1
//		return	1					4
//
//		10 | 10  | 1			1 count combination
//		1  | 010 | 1			not 0 combination
//		10 | 1   | 01
//		1  | 01  | 01

int main(){
	long long p,k,s=0,n=0,ans=1;
	cin >> p;
	for(int i=0;i<p;i++){
		cin >> k;
		if(k==1&&s==1) ans*=n+1;
		if(k==1){s=1;n=0;}
		if(k==0) n++;
	}
	if(s==0) cout << 0 << endl;
	else cout << ans << endl;
	return 0;
}

