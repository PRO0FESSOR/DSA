// 22 leetcode medium - generate all valid combinations of parantheses 

#include<iostream>  
#include<vector>
using namespace std;

void solve(vector<string> &ans,int n,int open,int close,string output)
{
    //bc
    if(open == 0 && close == 0)
    {
        ans.push_back(output);
        return;
    }

    //recursive operation 
    //include open
    if(open > 0)
    {
        output.push_back('(');

        solve(ans,n,open-1,close,output);

        //backtrack
        output.pop_back();
    }

    if(close > open)
    {
        output.push_back(')');

        solve(ans,n,open,close-1,output);

        //backtrack
        output.pop_back();
    }
}

int main()
{
    int n;
    cout<<"Enter number --> ";
    cin>>n;

    int open = n;
    int close = n;

    vector<string>ans;
    string output = "";

    solve(ans,n,open,close,output);

    for (auto & element : ans) 
    {
        cout << element << " ";
    }cout<<endl;



    return 0;
}