//https://leetcode.com/problems/kth-largest-element-in-a-stream/

class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int> > pq;
    int k1;
    KthLargest(int k, vector<int>& nums) {
        
        int n = nums.size();
        k1=k;
        for(int i=0;i<k && i<n;i++){
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size(); i++){
            if(nums[i] > pq.top() ){
                pq.pop();
                pq.push(nums[i]);
            }
        }
    }
    
    int add(int val) {
        if(pq.size() < k1){
            pq.push(val);
        }
        else if( val > pq.top() ){
             
            pq.push(val);pq.pop();
            
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
