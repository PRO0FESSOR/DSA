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

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // To handle the case where k > n
        int count = 0;  // To keep track of how many elements have been moved

        // Start at each index and move the elements in cycles
        for (int start = 0; count < n; start++) {
            int current = start;
            int prev = nums[start];  // Store the value to be moved

            do {
                int next = (current + k) % n;  // Calculate the next index
                int temp = nums[next];         // Save the value at the next position
                nums[next] = prev;             // Move the value to its new position
                prev = temp;                   // Update the value to be moved
                current = next;                // Move to the next position
                count++;                       // Increase the count of moved elements
            } while (start != current);        // Stop when we complete the cycle
        }
    }
};

