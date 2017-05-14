bool tripletSum(int x, std::vector<int> a) {
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size()-2; i++){
        int j=i+1, k=a.size()-1;
        
        while(j != k){
            int sum = a[i] + a[j] + a[k];
            if(sum == x)
                return true;
            
            if(sum > x)
                k--;
            else
                j++;
        }
    }
    
    return false;
}
