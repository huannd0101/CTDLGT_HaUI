#include<bits/stdc++.h>
using namespace std;

struct nhanvien{
    char macb[10];
    char hodem[30];
    char ten[10];
    char gioitinh[10];
    int tuoi;
    float hesl;
};

struct listt{
    int n;
    nhanvien E[100];
};

void nhap(listt &L){
    cout<<"So luong nhan vien: ";
    cin>>L.n;
    for(int i=0 ; i<L.n ; i++){
        cout<<"Nhap ma can bo: ";
        fflush(stdin);
        gets(L.E[i].macb);
        cout<<"Nhap ho dem: ";
        fflush(stdin);
        gets(L.E[i].hodem);
        cout<<"Nhap ten: ";
        fflush(stdin);
        gets(L.E[i].ten);
        cout<<"Nhap gioi tinh: ";
        fflush(stdin);
        gets(L.E[i].gioitinh);
        cout<<"Nhap tuoi: ";
        cin>>L.E[i].tuoi;
        cout<<"Nhap ho so luong: ";
        cin>>L.E[i].hesl;
    }
}

void xuat(listt &L){
    cout<<setw(10)<<"Ma can bo"<<setw(20)<<"Ho dem"<<setw(20)<<"Ten"<<
    setw(10)<<"Gioi tinh"<<setw(10)<<"Tuoi "<<setw(10)<<"He so luong"<<setw(20)<<"Luong co ban"<<endl;
    for(int i=0 ; i<L.n; i++){
        cout<<setw(10)<<L.E[i].macb<<setw(20)<<L.E[i].hodem<<setw(20)<<L.E[i].ten<<
        setw(10)<<L.E[i].gioitinh<<setw(10)<<L.E[i].tuoi<<setw(10)<<L.E[i].hesl<<setw(20)<<L.E[i].hesl*149000<<endl;
    }
}

void nu_50(listt &L){
    int vt;
    for(int i=0; i,L.n; i++)
        if(strcmp(L.E[i].gioitinh, "Nu")==0&&L.E[i].tuoi<50){
            vt=i;
            cout<<setw(10)<<L.E[vt].macb<<setw(20)<<L.E[vt].hodem<<setw(20)<<L.E[vt].ten<<
            setw(10)<<L.E[vt].gioitinh<<setw(10)<<L.E[vt].tuoi<<setw(10)<<L.E[vt].hesl<<setw(20)<<L.E[vt].hesl*149000<<endl;
        }
}

void canbo_Tung(listt &L){
    int vt;
    for(int i=0; i,L.n; i++)
        if(strcmp(L.E[i].ten, "Tung")==0){
            vt=i;
            cout<<setw(10)<<L.E[vt].macb<<setw(20)<<L.E[vt].hodem<<setw(20)<<L.E[vt].ten<<
            setw(10)<<L.E[vt].gioitinh<<setw(10)<<L.E[vt].tuoi<<setw(10)<<L.E[vt].hesl<<setw(20)<<L.E[vt].hesl*149000<<endl;
            return;
        }
}

void them(listt &L){
    int k=3;
	for(int i=L.n; i>=k; i--)
	    L.E[i+1]=L.E[i];
    cout<<"Nhap ma can bo: ";
    fflush(stdin);
    gets(L.E[k].macb);
    cout<<"Nhap ho dem: ";
    fflush(stdin);
    gets(L.E[k].hodem);
    cout<<"Nhap ten: ";
    fflush(stdin);
    gets(L.E[k].ten);
    cout<<"Nhap gioi tinh: ";
    fflush(stdin);
    gets(L.E[k].gioitinh);
    cout<<"Nhap tuoi: ";
    cin>>L.E[k].tuoi;
    cout<<"Nhap ho so luong: ";
    cin>>L.E[k].hesl;
    L.n++;
}

int main(){
    listt V;
    nhap(V);
    xuat(V);
    cout<<"Nhan vien nu co tuoi duoi 50 la; "<<endl;
    nu_50(V);
    cout<<"Nhan vien ten la Tung: "<<endl;
    canbo_Tung(V);
    them(V);
    xuat(V);

    return 0;
}
