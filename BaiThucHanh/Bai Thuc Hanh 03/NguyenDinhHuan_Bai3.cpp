#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *a, int n){
    for(int i=1; i<n; i++){
        int temp = a[i];
        int j = i-1;
        while(j>=0 && temp > a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }  
}

int main(){
    int x[] = {34, 14, 24, 54, 84, 64, 94, 74, 04};
    int n = 9;

    insertionSort(x, n);

    for(int i=0; i<n; i++)
        cout << x[i] << " ";
        
    return 0;
}