bool sumOfTwo(std::vector<int> a, std::vector<int> b, int v) {
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        int L=0,R=b.size();
        while(L<=R){
            int M=(L+R)/2;
            if(a[i]+b[M]==v) return true;
            
            if(a[i]+b[M]>v) R=M-1;
            else L=M+1;
            
        }
    }
    return false;
}
