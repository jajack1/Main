#include <bits/stdc++.h>
using namespace std;


class SquareMaking{
  public:
  int getMinimalPrice(int a, int b, int c, int d){
    int A[4];
    int cnt=0,cnt2=0,ans=1e9;
    A[0]=a;
    A[1]=b;
    A[2]=c;
    A[3]=d;
    sort(A,A+4);
    for(int i=0;i<4;i++){
      cnt+=abs(A[i]-A[1]);
      cnt2+=abs(A[i]-A[2]);
    }
    ans=min(cnt,cnt2);
    return ans;
  }
};
