#include<bits/stdc++.h>
using namespace std;

struct DoVat{
    float TrongLuong,GiaTri,DonGia;
};

void quickSort(DoVat a[], int l, int r)
{
    if( l >= r ) return;

    float m = a[r].DonGia;
    int i=l-1;
    for(int j=l; j<=r-1; j++)
        if(a[j].DonGia > m){
            i++;
            swap(a[i],a[j]);
        }
    
    swap(a[i+1],a[r]);
    quickSort(a,l,i);
    quickSort(a,i+2,r);
}

void nhap(DoVat a[], int &n, int &w)
{
    cin>>n>>w;
    for(int i=0; i<n; i++)
    {
        cin>>a[i].TrongLuong>>a[i].GiaTri;
        a[i].DonGia=a[i].GiaTri/a[i].TrongLuong;
    }
}
void xepbalo(DoVat a[], int n, int w)
{
    quickSort(a,0,n-1);
    cout<<"so do vat cho vao balo la:\n";
    for(int i=0; i<n; i++)
    {
       if(w >= a[i].TrongLuong)
       {
           w-=a[i].TrongLuong;
           cout<<a[i].TrongLuong<<" "<<a[i].GiaTri<<"\n";
       }else break;
    }
}

int main()
{
    DoVat a[100];
    int n,w;
    nhap(a,n,w);
    xepbalo(a,n,w);
}