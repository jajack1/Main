std::string alienBit(std::string s) {
    int a;
    string s2,s3;
    for(int i=2;i<s.size();i+=3){
        s2=s.substr(i,3);
        a=stoi(s2);
        s3+=a;
    }
    
    return s3;
}

// ----------------------------------------------------------------------------------
// my code
// stoi or atoi


#include <bits/stdc++.h>
using namespace std;



int main(){
	int a;
    string s,s2,s3;
	cin >> s;
    for(int i=2;i<s.size();i+=3){
        s2=s.substr(i,3);
        a=atoi(s2.c_str());
        s3+=a;
    }
	cout << s3 << endl;
	return 0;
}
