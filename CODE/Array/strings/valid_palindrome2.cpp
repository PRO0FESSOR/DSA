#include<iostream>
using namespace std;

bool check_palindrome(string s,int i , int j)
{
    while(i<=j)
    {
        if(s[i] != s[j])
        {
            return false;
        }
        else{
            return true;
        }
    }
    return -1;
}

bool valid_palindrome(string s)
{
    int i = 0;
    int j = s.length()-1;

    while(i<=j)
    {
        if(s[i] != s[j])
        {
            return check_palindrome(s,i+1,j) || check_palindrome(s,i,j-1);
        }
        else{
            i++;
            j--;
        }
    }

    return true;
}

int main()
{
    string s;
    getline(cin,s);

    bool ans  = valid_palindrome(s);

    if (ans== true)
    {
        cout<<"TRUE , this string is a palindrome "<<endl;
    }
    else{
        cout<<"False , this string is not a palindrome "<<endl;
    }

    return 0;
}