class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxi=0;
        int i=0,j=n-1;
        while(i<j){
            int h=min(height[i],height[j]);
            int l=j-i;
            maxi=max(maxi,h*l);
            if(height[i]<=height[j])i+=1;
            else j-=1;
            
        }
        return maxi;
    }
};