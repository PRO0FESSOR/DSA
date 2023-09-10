#include<iostream>
using namespace std;

char grade(int marks)
{
    if(marks/10==9 || marks==100)
    {
        return 'A';
    }
    else if(marks/10==8)
    {
        return 'B';
    }
    else if(marks/10==7)
    {
        return 'C';
    }
    else if(marks/10==6)
    {
        return 'D';
    }
    else if(marks/10==0)
    {
        return 'F';
    }
    else{
        return 'E';
    }
}

int main()
{
    int marks;
    cout<<"enter student marks -->";
    cin>>marks;
    cout<<"Student grade is -->"<<grade(marks);
    cout<<endl;
    return 0;
}