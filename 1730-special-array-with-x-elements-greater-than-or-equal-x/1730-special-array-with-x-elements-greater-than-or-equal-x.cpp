class Solution {
public:
    int specialArray(vector<int>& nums) {
        int low=1; int high= nums.size();
        
        while (low<=high){
            //count no. of elements >=mid; if equal to mid
            int mid= low+(high-low)/2;
            int x=0;
            for (int i=0; i<nums.size(); i++){
                if (nums[i]>=mid)x++;
            }
            if (mid==x)return mid;
            if (x<mid)high= mid-1;
            else low= mid+1;
        }
        return -1;
    }
};