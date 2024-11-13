//solution 1


class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        vector<int>temp(n);

        for(size_t i =0;i<n;++i){
            temp[(i+k)%n] = nums[i];
        }

        nums = temp;
        
    }
};


// solution 2 


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n = nums.size();
        reverse(nums.begin(),nums.end());
        k = k%n;
        reverse(nums.begin(),nums.begin()+(k));
        reverse(nums.begin()+k,nums.end());        
    }
};


//solution 3 
