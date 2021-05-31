#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *a, int n){
    for(int i=0; i<n-1; i++)
        for(int j=n-1; j>i; j--)
            if(a[j-1] < a[j]){
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }         
}

int main(){
    int x[] = {34, 14, 24, 54, 84, 64, 94, 74, 04};
    int n = 9;

    bubbleSort(x, n);

    for(int i=0; i<n; i++)
        cout << x[i] << " ";
        
    return 0;
}