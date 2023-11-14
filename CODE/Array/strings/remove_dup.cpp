#include<iostream>
using namespace std;

string removeduplicate(string str)
{
    string ans;

    int i=0;

    while(i<str.length())
    {
        if(str[i]==ans[ans.length()-1])
        {
            ans.pop_back();
        }
        else{
            ans.push_back(str[i]);
        }

        i++;
    }

    return ans;
}

int main()
{
    string str;

    getline(cin,str);

    cout<<"you entered -->"<<str<<endl;

    cout<<"your output is -->"<<removeduplicate(str)<<endl;


    return 0;
}