class Solution {
public:
    int longestPalindrome(string s) {
    map<int,int> m;
        bool odd=false;
        int ans=0;
      for(auto it :s)
      {
      m[it]++;
      }
        for(auto it:m)
        {
            ans+=it.second/2;
            if(it.second & 1)
                odd=true;
        }
        ans*=2;
        if(odd)  ans++;
        return ans;
        
        
    }
};
