#include<bits\stdc++.h>
using namespace std;

int Count(int *a, int l, int r, int x){
	if(l==r)
		return a[l]==x;
	int tongL = Count(a, l, (l+r)/2, x);
	int tongR = Count(a, (l+r)/2 + 1, r, x);
	return tongL + tongR;
}

int main(){
	int n, x;
	cout << "nhap n = ";	cin >> n;
	cout << "nhap x = ";	cin >> x;
	int *a = new int[n];
	for(int i=0; i<n; i++){
		cout << "nhap a[" << i << "] = ";
		cin >> a[i];
	}

	cout << "Co " << Count(a, 0, n-1, x) << " so";
	return 0;
}