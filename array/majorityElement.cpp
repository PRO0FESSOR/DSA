
// majority element - element which is more that n/2

// solution1 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        auto ans = nums[0];
        auto ansCount = 0;
        auto ele = nums[0];
        auto count = 0;

        for(size_t in = 0 ; in<nums.size() ; ++in){
            if(nums[in] == ele){
                count++;
                if(count > nums.size()/2) ans = ele;
            }
            else{
                ele = nums[in];
                count = 1;
            }
        }

        return ans;       
    }
};

// solution 2 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                count++;
                }
            }
        
        if(count>n/2)
        {
        return nums[i];
        }
        }
        return -1;
        
        
    }
};

// optimised solution 3
// moore voting algorithm - The intuition behind the Moore's Voting Algorithm is based on the fact that if there is a majority element in an array, it will always remain in the lead, even after encountering other elements.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt =0;
        int candidate;
        
        for(int i=0;i<nums.size();i++){
            
            if(cnt ==0){
                candidate =nums[i];
                cnt =1;              
            } 
            else {
                if(nums[i]==candidate) cnt++;
                else cnt--;
            }
        }
        return candidate;
    }
};
