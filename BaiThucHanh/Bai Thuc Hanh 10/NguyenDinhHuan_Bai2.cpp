#include<bits\stdc++.h>
using namespace std;

void input(int  a[], int n){
    for(int i=0;i<n;i++){
        cout<<" nhap mang a["<<i<<"] =";
        cin>>a[i];
    }
}
void output(int a[], int n){
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
void sort(int a[], int n){
    for(int i=0; i<n; i++)
        for(int j=n-1; j>i; j--)
        if(a[j]>a[j-1]){
            int tg=a[j];
            a[j]=a[j-1];
            a[j-1]=tg;
        }
}

int main(){
    int n;
    cout << "Nhap n:";
    cin >> n;
    int *a = new int[n];

    input(a,n);
    output(a,n);

    cout<<"\nsap xep  mang theo  chieu giam dan cua phuong phap noi bot\n";

    sort(a,n);
    output(a,n);

    return 0;
}