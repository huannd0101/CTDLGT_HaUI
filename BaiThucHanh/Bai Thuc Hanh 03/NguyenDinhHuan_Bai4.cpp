#include<bits/stdc++.h>
using namespace std;

struct HocSinh {
    char hoTen[30], gioiTinh[15];
    int namSinh;
    double diemTK;
    
    void nhap(){
        cout << "Nhap ho ten   : "; fflush(stdin); gets(hoTen);
        cout << "Nhap gioi tinh: "; fflush(stdin); gets(gioiTinh);
        cout << "Nhap nam sinh : "; cin >> namSinh;
        cout << "Nhap diem TK  : "; cin >> diemTK;
    }

    void xuat(){
        cout << left << setw(20) << hoTen << setw(20) << gioiTinh << setw(15) << namSinh << setw(15) << diemTK << endl;
    }
};

void bubbleSort(HocSinh *a, int n){
    for(int i=0; i<n-1; i++)
        for(int j=n-1; j>i; j--)
            if(stricmp(a[j-1].hoTen, a[j].hoTen) > 0){
                HocSinh temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }  
}

void insertionSort(HocSinh *a, int n){
    for(int i=1; i<n; i++){
        HocSinh temp = a[i];
        int j = i-1;
        while(j>=0 && stricmp(temp.hoTen, a[j].hoTen) < 0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }  
}

void selectionSort(HocSinh *a, int n){
    for(int i=0; i<n-1; i++){
        int m = i;
        for(int j=i+1; j<n; j++){
            if(stricmp(a[j].hoTen, a[m].hoTen) < 0)
                m = j;
        }
        HocSinh temp = a[m];
        a[m] = a[i];
        a[i] = temp;
    }  
}

int main(){
    int n;
    cout << "Nhap so hoc sinh: ";
    cin >> n;
    HocSinh *a = new HocSinh[n];

    for(int i=0; i<n; i++){
        cout << "Nhap thong tin hoc sinh thu: " << i + 1 << endl;
        a[i].nhap();
    }

    // bubbleSort(a, n);

    // selectionSort(a, n);

    insertionSort(a, n);

    for(int i=0; i<n; i++){
        a[i].xuat();
    }

    return 0;
}