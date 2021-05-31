#include<bits\stdc++.h>
using namespace std;

int Sum(int *a, int l, int r){
	if(l==r)
		return a[l];
	int temp = 0;
	temp += Sum(a, l, (l+r)/2);
	temp += Sum(a, (l+r)/2 + 1, r);
	return temp;
}

int main(){
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int *a = new int[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	cout << "Ket qua: " << Sum(a, 0, n-1);
	return 0;
}
