#include<bits\stdc++.h>

using namespace std;

long long fibonacci(int n){
    if(n == 1 || n == 2)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << "So fibanacci thu " << n << " la: " << fibonacci(n) << endl;
    cout << "Day so gom n so fibonacci la: ";
    for(int i=1; i<=n; i++)
        cout << fibonacci(i) << " "; 
    return 0;
}