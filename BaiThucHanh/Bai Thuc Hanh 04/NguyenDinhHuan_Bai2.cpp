#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void heapify(int *a, int n, int i){
    int l = 2 * i + 1; 
    int r = 2 * i + 2;
    int smallest = i; 

    if (l < n && a[l] < a[smallest])
        smallest = l;
 
    if (r < n && a[r] < a[smallest])
        smallest = r;
 
    if (smallest != i) {
        swap(a[i], a[smallest]);
 
        heapify(a, n, smallest);
    }
}
 
void heapSort(int *a, int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
 
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

void output(int *a, int n){
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}

int main(){
    int x[] = {14, 24, 54, 84, 64, 94, 74};
    int n = 7;
    heapSort(x, n);
    cout << "Sap xep giam dan: ";
    output(x, n);
    return 0;
}