#include <iostream>

using namespace std;


bool isPossible(int board[][10], int x, int y, int n)
{
    int i,j;
    for(i=x;i>=0;i--)
    {
        if(board[i][y]==1)
            return false;
    }
    i=x;
    j=y;
    while(i>=0 && j>=0)
    {
        if(board[i--][j--]==1)
            return false;
    }

    i=x;
    j=y;
    while(i>=0 && j<n)
    {
        if(board[i--][j++]==1)
            return false;
    }

    return true;
}

bool solve_N_queen(int board[][10], int x, int n)
{
    if(x==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==1)
                    cout<<"Q ";
                else
                    cout<<"_ ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        return false;
    }
    for(int i=0;i<n;i++)
    {
        if(isPossible(board, x, i, n))
        {
            board[x][i]=1;
            bool a = solve_N_queen(board, x+1, n);
            if(!a)
            {
                board[x][i]=-1;
            }
            else
                return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int board[10][10]={-1};
    solve_N_queen(board, 0, n);
    return 0;
}