#include<bits\stdc++.h>
using namespace std;

void print(char *str){
	*str && (print(str+1), cout << *str);
}


int main(){
	char str[255];
	cout << "Nhap chuoi: ";
	gets(str);
	cout << "Chuoi dao nguoc la: ";
	print(str);
	return 0;
}
