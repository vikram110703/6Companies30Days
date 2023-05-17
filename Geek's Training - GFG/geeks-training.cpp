//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
  
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        vector<vector<int>>dp(n,vector<int>(3,-1));
        for(int i=0;i<n;i++)
        {
       
           if(i==0)
           {
            dp[i][0]=points[i][0];
            dp[i][1]=points[i][1];
            dp[i][2]=points[i][2];
            }
          else
           {
             dp[i][0]=points[i][0]+max(dp[i-1][1],dp[i-1][2]);
             dp[i][1]=points[i][1]+max(dp[i-1][0],dp[i-1][2]);
             dp[i][2]=points[i][2]+max(dp[i-1][0],dp[i-1][1]);

           }
        
        }
        return max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends