#include<bits/stdc++.h>
using namespace std;

void selectionSort(string *a, int n){
    for(int i=0; i<n-1; i++){
        int m = i;
        for(int j=i+1; j<n; j++){
            if(a[m] > a[j])
                m = j;
        }
        string temp = a[m];
        a[m] = a[i];
        a[i] = temp;
    }  
}

int main(){
    string x[] = {"John", "Try", "Thor", "Zil", "Adam", "Dany", "Milk"};
    int n = 7;

    selectionSort(x, n);

    for(int i=0; i<n; i++)
        cout << x[i] << " ";

    return 0;
}