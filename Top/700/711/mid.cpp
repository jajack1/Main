#include <bits/stdc++.h>
using namespace std;


class StringTransform{
	public:
	string isPossible(string s, string t){
		int A[26];
		for(int i=0;i<26;i++){
			A[i]=0;
		}
		
		for(int i=0;i<s.size();i++){
			A[s[i]-'a']++;
			if(s[i]!=t[i]){
				if(A[t[i]-'a']==0){
					return "Impossible";
				}
			}
		}
		
		return "Possible";
	}
};

int main(){
	StringTransform AAA;
	
	string s,t;
	vector<int> v;
	cin >> s >> t;
	cout << AAA.isPossible(s,t) << endl;
	
	return 0;
}
