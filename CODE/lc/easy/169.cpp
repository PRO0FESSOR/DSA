#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



// o(1)


int majorityElemento1(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int ans = nums[nums.size()/2];
    return ans;
}


// o(n)

    int majorityElementon(vector<int>& nums) {
        int c = 0;
        int element = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(c == 0){
                element = nums[i];
            }
            if(nums[i] == element){
                c++;
            }else{
                c--;
            }
        }
        return element;
    }



int main()
{
    return 0;
}