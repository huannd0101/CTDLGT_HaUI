#include<bits/stdc++.h>
using namespace std;

void quickSort(int a[], int l, int r)
{
    if(l >= r ) return;
    int m= a[r];
    int i = l -1;
    for(int j=l; j<=r-1; j++)
        if(a[j] > m)
        {
            i++;
            swap(a[j],a[i]);
        }
    swap(a[i+1],a[r]);
    quickSort(a,l,i);
    quickSort(a,i+2,r);
}

int main()
{
    int a[100],s,n,dem=0,tong=0;
    cin>>n>>s;
    for(int i=0; i<n; i++)
         cin>>a[i];

    quickSort(a,0,n-1);
    for(int i=0; i<n; i++)
    {

        if(tong <= s) tong+=a[i],dem++;
        else break;
    }
    if(tong <= s) cout<<"khong";
    else cout<<"can lay "<<dem<<" so ";
    
    return 0;
}