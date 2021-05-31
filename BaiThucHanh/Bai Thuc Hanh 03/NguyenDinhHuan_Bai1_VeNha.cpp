#include<bits/stdc++.h>
using namespace std;

void bubbleSort(string *a, int n){
    for(int i=0; i<n-1; i++)
        for(int j=n-1; j>i; j--)
            if(a[j-1] > a[j]){
                string temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }         
}

int main(){
    string x[] = {"John", "Try", "Thor", "Zil", "Adam", "Dany", "Milk"};
    int n = 7;

    bubbleSort(x, n);

    for(int i=0; i<n; i++)
        cout << x[i] << " ";

    return 0;
}