#include<bits/stdc++.h>
using namespace std;

void merge(string *a, int low, int high, int mid){
    int i=low, j=mid+1, k=0;
    string temp[high-low+1];

    while(i<=mid && j<=high){
        if(a[i] < a[j])            
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


void mergeSort(string *a, int low, int high){
    if(low < high){
        int mid = (low+high)/2;

        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);

        merge(a, low, high, mid);
    }
    return;
}

void output(string *a, int n){
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}

int main(){
    int n = 9;
    string a[] = {"John", "Cool", "Bee", "Try", "Thor", "Zil", "Adam", "Dany", "Milk"};

    mergeSort(a, 0, n-1);
    cout << "Sap xep: ";
    output(a, n);

    return 0;
}