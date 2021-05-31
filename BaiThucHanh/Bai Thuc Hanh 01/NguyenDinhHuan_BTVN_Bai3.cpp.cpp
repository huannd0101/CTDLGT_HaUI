#include<bits\stdc++.h>
using namespace std;

char Find(char *a, int l, int r, char x){
	if(l > r)
		return -1;
	int mid = (l+r)/2;
	if(a[mid] == x)
		return mid;
	if(x < a[mid])
		return Find(a, l, mid-1, x);
	return Find(a, mid+1, r, x);
}

void Sort(char *a, int n){
	for(int i=0; i<n-1; i++)
		for(int j=n-1; j>i; j--)
			if(a[j-1] > a[j]){
				char temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
}

int main(){
	int n;
	char x;
	cout << "Nhap n = ";
	cin >> n;
	char *a = new char[n];
	for(int i=0; i<n; i++){
		cin.ignore();
		cin.get(a[i]);
	}
	
	Sort(a, n);

	cout << "Nhap ky tu x = ";
	cin.ignore();
	cin.get(x);
	if(x == ' ')
		if(Find(a, 0, n-1, x) != -1)
			cout << "Co dau cach trong tu dien";
		else 
			cout << "Khong co dau cach trong tu dien"; 
	else 
		if(Find(a, 0, n-1, x) != -1)
			cout << "Co ky tu \"" << x << "\" trong tu dien";
		else 
			cout << "Khong co ky tu \"" << x << "\" trong tu dien"; 
	return 0;
}

