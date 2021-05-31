#include<bits/stdc++.h>
using namespace std;

void soLuong()
{
    int n,m;
    cout<<"Nhap chieu dai va chieu rong: ";
    cin>>n>>m;
    int x1=n/2;
    int y1=m/2;
    int a=n-x1*2;
    int b=m-y1*2;
    if (a == 1 and b == 1)
    {
        cout<<"can: "<<x1*y1<<" manh bia 2x2\n";
        cout<<"can: "<<x1+y1<<" manh bia 2x1\n";
        cout<<"can: 1 manh bia 1x1";
    }else if (a == 1 and b == 0)
    {
        cout<<"can: "<<x1*y1<<" manh bia 2x2\n";
        cout<<"can: "<<y1<<" manh bia 2x1\n";
    }else if (a == 0 and b == 1)
    {
        cout<<"can: "<<x1*y1<<" manh bia 2x2\n";
        cout<<"can: "<<x1<<" manh bia 2x1\n";
    }else {
        cout<<"can: "<<x1*y1<<" manh bia 2x2";
     }
}

int main()
{
    soLuong();
    return 0;
}
