#define all(v) v.begin(),v.end()

class Solution {
public:
    int hIndex(vector<int>& cit) {
        if(cit.size()==0)
            return 0;
        int ans=0;
        sort(all(cit));
        ans=0;
      for(int i=cit.size()-1;i>=0;i--)
      {
       if(cit[i]>=cit.size()-i)
           ans=cit.size()-i;
          else break;
      }
        
        return ans;
    }
}; 
