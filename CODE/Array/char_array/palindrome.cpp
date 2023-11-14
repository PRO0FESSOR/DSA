#include<iostream>
#include<cstring>
using namespace std;

int palindrome(char arr[])
{
    int length = strlen(arr);
    int i = 0;
    int j = length-1;

    while(i<=j)
    {
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else{
            // cout<<"The string you entered is not a palindrome ."<<endl;
            return 0;
        }
    }
    return 1;
}

int main()
{
    char arr[20];

    cin.getline(arr,20);

   if(palindrome(arr) == 0)
   {
    cout<<"The string you entered is not a palindrome ."<<endl;
   }
   else{
    cout<<"The string you entered is a palindrome."<<endl;
   }

    return 0;
}