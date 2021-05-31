#include<bits\stdc++.h>
using namespace std;

void Tron(int a[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];

    for(i=0; i<n1; i++)
        L[i] = a[l + i];
    for(j=0; j<n2; j++)
        R[j] = a[m + 1 + j];
    
	i = 0; j = 0; k = l;

    while (i < n1 && j < n2){
        if (L[i] <= R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }
    while (i < n1)
        a[k++] = L[i++];
    
    while (j < n2)
        a[k++] = R[j++];
}

void Sort(int a[], int l, int r){
    if (l < r){
        int mid = (l+r)/2;
        Sort(a, l, mid);
        Sort(a, mid+1, r);
        Tron(a, l, mid, r);
    }
}

int main(){
    int n; 
	cout << "Nhap n = ";
	cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
        cin >> a[i];
    
    Sort(a, 0, n-1);

    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    
	return 0;
}