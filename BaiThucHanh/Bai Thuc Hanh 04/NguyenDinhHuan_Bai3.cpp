#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int low, int high, int mid){
    int i=low, j=mid+1, k=0;
    int temp[high-low+1];

    while(i<=mid && j<=high){
        if(a[i] > a[j])            
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i<=mid)
        temp[k++]=a[i++];
        
    while(j<=high)
        temp[k++]=a[j++];
        
    for(i=low;i<=high;i++)
        a[i]=temp[i-low];

    return;
}


void mergeSort(int *a, int low, int high){
    if(low < high){
        int mid = (low+high)/2;

        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);

        merge(a, low, high, mid);
    }

    return;
}

void output(int *a, int n){
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}

int main(){
    int  x[] = {34, 14, 24, 54, 84, 64, 94, 74, 04};
    int n = 9;
    mergeSort(x, 0, n-1);
    cout << "Sap xep giam dan: ";
    output(x, n);
    return 0;
}