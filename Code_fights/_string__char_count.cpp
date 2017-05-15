std::string stringReformatting(std::string s, int k) {
    string res = "";
    int cur = 0;
    reverse(s.begin(),s.end());
    for(char c:s)
    {
        if(c=='-')continue;
        ++cur;
        res.push_back(c);
        if(cur%k==0)
            res.push_back('-');
    }
    if(res.back()=='-')res.pop_back();
    reverse(res.begin(),res.end());
    return res;
}
