// letter combination of a phone number

#include<iostream>
#include<vector>
using namespace std;

void solve(vector<string>&ans,vector<string>&mappings,int index,string digits,string output)
{
    //base case
    if(index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    //recursive operation

    int number = digits[index] - '0';
    string value = mappings[number];
 

    for(int i=0;i<value.length();i++)
    {
        char ch = value[i];
        output.push_back(ch);

        solve(ans,mappings,index+1,digits,output);

        output.pop_back();

    }

}


int main()
{
    vector<string>ans;


    string digits = "23234";
    int i=0;
    string output = "";


    vector<string>mappings(10);
    mappings[2] = "abc";
    mappings[3] = "def";
    mappings[4] = "ghi";
    mappings[5] = "jkl";
    mappings[6] = "mno";
    mappings[7] = "pqrs";
    mappings[8] = "tuv";
    mappings[9] = "wxyz";

    // mappings.push_back("abc");
    // mappings.push_back("def");
    // mappings.push_back("ghi");
    // mappings.push_back("jkl");
    // mappings.push_back("mno");
    // mappings.push_back("pqrs");
    // mappings.push_back("tuv");
    // mappings.push_back("wxyz");

    solve(ans,mappings,i,digits,output);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;


    return 0;
}