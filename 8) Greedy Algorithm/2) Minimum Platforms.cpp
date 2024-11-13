//https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

int findPlatform(int arr[], int dep[], int n)
    {
        
        sort(arr, arr + n);
        sort(dep, dep + n);
    
        // plat_needed indicates number of platforms
        // needed at a time
        int plat_needed = 1, result = 1;
        int i = 1, j = 0;
    
        while (i < n) {
            //arrival is less so we need a new platform for the train
            if (arr[i] <= dep[j]) {
                plat_needed++;
                i++;
            }
            //if dep is less than arrival then it means that train is leaving so 
            //one platform is cleared now!
            else {
                plat_needed--;
                j++;
            }
            if (plat_needed > result)
                result = plat_needed;
        }
    
        return result;
    }




- brute force way:
  
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        vector<int> dp(2361);
        int n=arr.size(),ans=0;
        
        for(int i=0;i<n;i++){
            dp[arr[i]]++;
            dp[dep[i]+1]--;
        }
        ans=dp[0];
        for(int i=1;i<2361;i++){
            dp[i]+=dp[i-1];
            ans=max(ans,dp[i]);
        }
        return ans;        // Your code here
    }
