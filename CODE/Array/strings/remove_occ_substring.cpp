#include<iostream>
using namespace std;

string remove_substr(string s , string part)
{
    int position = s.find(part);

    while(position != string::npos)
    {
        s.erase(position,part.length());
        position = s.find(part);
    }

    return s;
}

int main()
{
    string s , part;
    cout<<"Enter string  --> ";
    getline(cin,s);
    cout<<"Enter substring to remove --> ";
    getline(cin,part);

    cout<<"THe string you enter is --> "<< s << " and the substring you enter is --> "<<part<<endl;
    cout<<"Your output is --> "<<remove_substr(s,part);




    return 0;
}