#define pb push_back

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int n=num_people;
        vector<int> v(n);
     int left=1;
        int right=sqrt(INT_MAX)-1,mid;
      while(left<=right)
      {
            mid=(left+right)/2;
        if((mid*(mid+1))/2<candies)
        {
            left=mid+1;
            
        }
          else if((mid*(mid+1))/2> candies)
              right=mid-1;
          else
              break;
          
      }
     if((mid*(mid+1))/2>candies)
         mid--;
        
    int k=mid/n;
        candies-=(k*n*(k*n+1))/2;
        for(int i=0;i<n;i++)
        {
            v[i]=(i+1)*(k) + ((k-1)*(k)/2)*n+min(candies,k*n+i+1);
            candies-=min(candies,k*n+i+1);
        }
        
  //  v.pb(mid);
        return v;
        
        
        
    }
};
