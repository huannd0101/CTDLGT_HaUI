#include<bits\stdc++.h>
using namespace std;

long long an(int a, int n){
	long long temp = pow(a, n/2);
	if(n%2==0)
		return temp*temp;
	return temp*temp*a;
}

int main(){
	int a, n;
	cout << "Nhap a, n: ";
	cin >> a >> n;
	cout << a << "^" << n << " = " << an(a, n);
	return 0;
}
