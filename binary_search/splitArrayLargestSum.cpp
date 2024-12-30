class Solution {
public:
    bool isPossibleSolution(int number, std::vector<int>& nums, int TotalArrCount) {
        auto toBeAns = number;
        auto arrCount = 1;
        auto sumCount = 0;

        for (size_t i = 0; i < nums.size(); ++i) {
            if (nums[i] + sumCount <= toBeAns) {
                sumCount += nums[i];
            } else {
                arrCount++;
                if (arrCount > TotalArrCount) return false;
                sumCount = nums[i];
            }
        }
        return true;
    }

    int splitArray(std::vector<int>& nums, int k) {
        auto s = *std::max_element(nums.begin(), nums.end()); // Fix lower bound
        auto sum = 0;

        for (auto num : nums) {
            sum += num;
        }

        auto e = sum;
        auto ans = INT_MAX;

        while (s <= e) {
            auto mid = s + (e - s) / 2;

            if (isPossibleSolution(mid, nums, k)) {
                ans = std::min(ans, mid);
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return ans;
    }
};

