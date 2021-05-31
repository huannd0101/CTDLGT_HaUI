#include<bits/stdc++.h>
using namespace std;

void quickSort(int *a, int left, int right){
    if(left < right){
        int i=left;
        int j=right;
        int t=a[(left+right)/2];
        while(i<=j){
            while(a[i] > t) i++;
            while(a[j] < t) j--;
            if(i <= j){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
                j--;
            }
        }
        quickSort(a, left, j);
        quickSort(a, i, right);
    }
}

void output(int *a, int n){
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}

int main(){
    int x[] = {34, 14, 24, 54, 84, 64, 94, 74, 04};
    int n = 9;

    cout << "Sap xep giam dan: ";
    quickSort(x, 0, n-1);
    output(x, n);

    return 0;
}