#include<bits/stdc++.h>
using namespace std;

void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

void heapify(string *a, int n, int i){
    int l = 2 * i + 1; 
    int r = 2 * i + 2;
    int langest = i; 

    if (l < n && a[l] > a[langest])
        langest = l;
 
    if (r < n && a[r] > a[langest])
        langest = r;
 
    if (langest != i) {
        swap(a[i], a[langest]);
 
        heapify(a, n, langest);
    }
}
 
void heapSort(string *a, int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
 
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

void output(string *a, int n){
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}

int main(){
    int n = 7;
    string a[] = {"John", "Cool", "Bee", "Try", "Thor", "Zil", "Adam"};

    heapSort(a, n);

    cout << "Sap xep: ";
    output(a, n);

    return 0;
}