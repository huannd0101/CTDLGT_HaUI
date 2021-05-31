#include<bits/stdc++.h>
using namespace std;
const int maxn=100;

int a[maxn][maxn];
int X[8] = { -2,-2,-1,-1, 1, 1, 2, 2};
int Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1};
int n,dem=0;

void tao()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            a[i][j]=0;
}

void xuat()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<setw(5)<<a[i][j];
        cout<<"\n";
    }

}

void quayLui(int x, int y)
{
    dem++;
    a[x][y]=dem;
    for(int i=0; i<8; i++)
    {
        if(dem == n*n) {
            xuat();
            exit(0);
        }

        int u = x + X[i];
        int v = y + Y[i];
        if(u >=0 && v >=0 && u<n && v<n && a[u][v] == 0)
            quayLui(u,v);
    }
    dem--;
    a[x][y]=0;
}


int main()
{
    cin>>n;
    int a,b;
    cin>>a>>b;
    tao();
    quayLui(a,b);
    return 0;

}