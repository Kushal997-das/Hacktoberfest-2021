#include <iostream>

using namespace std;

int r=3,c=3;
int A[3][3] = {{0,0,0},
               {1,1,0},
               {0,0,1}};
void flood_fill(int a, int b, int n, int m)
{
    if(a<0 || b<0 || a>(r-1) || b>(r-1))
        return;
    if(A[a][b]==m)
    {
        A[a][b]=n;
        flood_fill(a+1,b,n,m);
        flood_fill(a,b+1,n,m);
        flood_fill(a-1,b,n,m);
        flood_fill(a,b-1,n,m);
        flood_fill(a+1,b+1,n,m);
        flood_fill(a-1,b-1,n,m);
    }
    else
        return;

}



int main()
{
    int a,b,n;
    cout<<"Enter rows: ";
    cin>>a;
    cout<<"Enter columns: ";
    cin>>b;
    cout<<"Enter number: ";
    cin>>n;
    int m=A[a][b];
    flood_fill(a,b,n,m);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}