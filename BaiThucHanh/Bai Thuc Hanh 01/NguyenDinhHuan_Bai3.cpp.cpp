//ước số chung lớn nhất bằng thuật toán Euclid
#include<bits\stdc++.h>
using namespace std;

int USLN(int a, int b){
    if(b == 0) 
        return a;
    return USLN(b, a % b);
}

int main(){
    int a, b;
    cout << "nhap a, b: ";
    cin >> a >> b;
    cout << "Uoc so chung lon nhat: " << USLN(a, b);
 
    return 0;
}