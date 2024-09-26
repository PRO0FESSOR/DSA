//solution 1 highly optimised using unordered_set

/*class Solution {*/
/*public:*/
/*    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {*/
/**/
/*    std::unordered_set<int> elementsSet(nums1.begin(), nums1.end());  // Store elements of first array*/
/*    std::unordered_set<int> resultSet;  // To store unique intersection elements*/
/*    std::vector<int> result;*/
/**/
/*    for (const auto& elem : nums2) {*/
/*        if (elementsSet.find(elem) != elementsSet.end()) {*/
/*            resultSet.insert(elem);  // Insert into result if found in the first array*/
/*        }*/
/*    }*/
/**/
/*    // Convert the resultSet to a vector*/
/*    result.assign(resultSet.begin(), resultSet.end());*/
/**/
/*    return result;*/
/*  }*/
/*}*/

//Solution 2 using 2 pointers 

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

    vector<int>ans;
    sort(nums1.begin() , nums1.end());
    sort(nums2.begin() , nums2.end());

    auto n = nums1.size();
    auto m = nums2.size();

    auto i=0,j=0;

    while(i<n && j<m){
        if(nums1[i] == nums2[j]){
            if(ans.empty() || ans.back() != nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j]) i++;
        else j++;
    }

    return ans;
    
  }
};
