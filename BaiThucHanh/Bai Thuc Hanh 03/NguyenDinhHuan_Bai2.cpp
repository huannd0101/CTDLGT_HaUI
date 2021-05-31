#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *a, int n){
    for(int i=0; i<n-1; i++){
        int m = i;
        for(int j=i+1; j<n; j++){
            if(a[m] < a[j])
                m = j;
        }
        int temp = a[m];
        a[m] = a[i];
        a[i] = temp;
    }  
}

int main(){
    int x[] = {34, 14, 24, 54, 84, 64, 94, 74, 04};
    int n = 9;

    selectionSort(x, n);

    for(int i=0; i<n; i++)
        cout << x[i] << " ";
        
    return 0;
}