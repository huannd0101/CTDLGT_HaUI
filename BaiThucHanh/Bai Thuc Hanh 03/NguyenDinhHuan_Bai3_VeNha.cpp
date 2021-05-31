#include<bits/stdc++.h>
using namespace std;

void insertionSort(string *a, int n){
    for(int i=1; i<n; i++){
        string temp = a[i];
        int j = i-1;
        while(j>=0 && temp < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }  
}

int main(){
    string x[] = {"John", "Try", "Thor", "Zil", "Adam", "Dany", "Milk"};
    int n = 7;

    insertionSort(x, n);

    for(int i=0; i<n; i++)
        cout << x[i] << " ";

    return 0;
}