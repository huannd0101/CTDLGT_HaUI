#include<bits/stdc++.h>
using namespace std;

void quickSort(string *a, int left, int right){
    if(left < right){
        int i=left;
        int j=right;
        string t=a[(left+right)/2];
        while(i<=j){
            while(a[i] < t) i++;
            while(a[j] > t) j--;
            if(i <= j){
                string temp = a[i];
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

void output(string *a, int n){
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}

int main(){
    int n = 7;
    string a[] = {"John", "Try", "Thor", "Zil", "Adam", "Dany", "Milk"};

    quickSort(a, 0, n-1);

    cout << "Sap xep: ";
    output(a, n);
    return 0;
}