#include <bits/stdc++.h>
using namespace std;


class StepsConstruct{
	public:
	string construct(vector <string> board, int k) {
		if(board[0][0]=='#') return "";
		
		int vis[100][100];
		memset(vis,0,sizeof(vis));
		int dx[]={1,-1,0,0};
		int dy[]={0,0,-1,1};
		
		int n=board.size();
		int m=board[0].size();
		
		queue<pair<int,int>> q;
		q.push(make_pair(0,0));
		queue<string> q2;
		q2.push("");
		
		while(!q.empty()){
			int x = q.front().first;
			int y = q.front().second;
			string s2 = q2.front();
			q.pop();
			q2.pop();
			
			vis[x][y]=1;
			
			if(x==n-1&&y==m-1){
				if(k==s2.size()) return s2;
				if((k-s2.size())%2!=0||k<s2.size()) return "";
				
				int z = k-s2.size();
				int len=s2.size()-1;
				string s3="";
				s3+=s2[len];
				if(s2[len]=='U')
					s3+="D";
				else if(s2[len]=='D')
					s3+="U";
				else if(s2[len]=='L')
					s3+="R";
				else
					s3+="L";
				
				reverse(s3.begin(),s3.end());
				for(int i=0;i<z;i++){
					s2+=s3[i%2];
				}
				return s2;
			}
			
			for(int i=0;i<4;i++){
				int xx=x+dx[i];
				int yy=y+dy[i];
				if(xx>=0&&xx<n && yy>=0&&yy<m && board[xx][yy]=='.' && !vis[xx][yy]){
					q.push(make_pair(xx,yy));
					
					if(i==0)
						s2+= "D";
					else if(i==1)
						s2+="U";
					else if(i==2)
						s2+="L";
					else
						s2+="R";
					
					q2.push(s2);
				}
			}
			
		}
		
		return "";
	}
};

int main(){
	StepsConstruct AAA;
	
	int n;
	cin >> n;
	vector<string> s;
	string s2;
	for(int i=0;i<n;i++){
		cin >> s2;
		s.push_back(s2);
	}
	for(int i=0;i<n;i++){
		cout << s[i] << endl;;
	}
	cout << endl;
	
	
	
	cout << AAA.construct(s,6) << endl;
	
	return 0;
}
