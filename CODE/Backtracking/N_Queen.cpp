#include <iostream>
#include<vector>
using namespace std;

bool safee(vector<vector<char>>&board, int row, int col,int n)
{
    int i = row;
    int  j = col;
    // row 
    while(j>=0)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }        
        j--;
    }

    //left up diagonal 
    i = row;
    j = col;

    while(i>=0 && j>=0)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }

    //left down diagonal
    i = row;
    j = col;

    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i++;
        j--;
    }

    return true;

}

void printans(vector<vector<char>> &board , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j = 0 ;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }cout<<endl;
    }

    cout<<endl<<endl;
}

void solve(vector<vector<char>> &board, int col , int n)
{
    //base case
    if(col >= n)
    {
        printans(board,n);
        return;
    }

    //ek case
    for(int row=0;row<n;row++)
    {
        if(safee(board,row,col,n))
        {
            board[row][col] = 'Q';
            solve(board,col+1,n);
            board[row][col] = '-';
        }
    }
}

int main()
{ 
    //size of 2d array 4X4
    int n = 4;
    //2d array initialised of vector<int> 
    vector<vector<char>> board(n,vector<char>(n,'-'));

    int col = 0;

    solve(board,col,n);

    return 0;

}