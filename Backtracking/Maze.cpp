#include <iostream>

using namespace std;

bool isPossible(int A[][5], int x, int y, int n)
{
    if(x<n && y<n && x>=0 && y>=0 && A[x][y]==1)
        return true;
    return false;
}

bool solve_maze(int A[][5], int x, int y, int n)
{
    if(x==n-1 && y==n-1 && A[x][y]==1)
    {
        A[x][y]=2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    if(isPossible(A, x, y, n))
    {
        A[x][y]=2;
        if(solve_maze(A, x, y+1, n))
            return true;
        if(solve_maze(A, x+1, y, n))
            return true;
        if(solve_maze(A, x, y-1, n))
            return true;
        if(solve_maze(A, x-1, y, n))
            return true;
        A[x][y]=1;
    }
    return false;
}

int main()
{
    int A[5][5] = { { 1, 0, 0, 0, 1 },
                    { 1, 0, 1, 1, 1 },
                    { 1, 0, 1, 0, 1 },
                    { 1, 1, 1, 0, 1 },
                    { 0, 0, 0, 0, 1} };
    bool b = solve_maze(A, 0, 0, 5);
    if(b)
        cout<<"Maze solved!!"<<endl;
    else
        cout<<"Maze could not be solved!"<<endl;
    return 0;
}