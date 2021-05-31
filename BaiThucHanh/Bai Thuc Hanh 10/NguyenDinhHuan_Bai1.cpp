#include<bits\stdc++.h>
using namespace std;

int F(int a, int n){
    if(n==1)
        return a;
    return F(a, n-1) * a;
}

int main(){
    int a, n;
    cout << "Nhap a:"; 
    cin >> a;
    cout << "Nhap n :"; 
    cin >> n;
    cout << "f = " << F(a, n);
    return 0;
}