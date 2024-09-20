#solution 1  n^2

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();

        for(int i=0;i<n;i++){
            int value = nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]==value){
                    return true;
                }
            }
        }

        return false;
        
    }
};


#Solution 2 logn 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(),nums.end());

        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }

        return false;
        
    }
};

#solution 2 o(n) using unordered set 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

         unordered_set<int> seen;

        for (int num : nums) {
            // If num is already in the set, it's a duplicate
            // if num not found then only it returns pointer seen.end()
            if (seen.find(num) != seen.end()) {
                return true;
            }
            // Add num to the set
            seen.insert(num);
        }

        // If no duplicates found
        return false;
        
    }
};
