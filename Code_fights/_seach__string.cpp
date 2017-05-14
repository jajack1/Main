int strstr(std::string s, std::string x) {
    
    for(int index = x.size() - 1; index < s.size(); ++index)
    {
        if(s[index] != x.back())
            continue;
        
        if(!s.compare(index - x.size() + 1, x.size(), x))
            return index - x.size() + 1;
    }
    
    return -1;
}
