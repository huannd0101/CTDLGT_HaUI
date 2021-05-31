#include<bits\stdc++.h>
using namespace std;

int FindMax(int *a, int l, int r){
    if(l==r)
    	return a[l];
    int maxL = FindMax(a, l, (l+r)/2);
    int maxR = FindMax(a, (l+r)/2 + 1, r);
    if(maxL < maxR)
    	return maxR;
    return maxL;
}

int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i=0; i<n; i++)
    	cin >> a[i];
	cout << "Max of array: " << FindMax(a, 0, n-1);
    return 0;
}
