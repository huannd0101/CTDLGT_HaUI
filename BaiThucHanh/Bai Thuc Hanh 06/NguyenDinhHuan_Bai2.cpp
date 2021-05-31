#include<bits/stdc++.h>
using namespace std;

struct sinhvien{
    int stt;
    char masv[10];
    char hodem[20];
    char ten[10];
    char gioitinh[10];
    int namsinh;
    float diem;
};

struct listt{
    int n;
    sinhvien E[100];
};

void nhap(listt &L){
    cout<<"Nhap so sinh vien: ";
    cin>>L.n;
    for(int i=0; i<L.n; i++){
        cout<<"Nhap STT: ";
        cin>>L.E[i].stt;
        cout<<"Nhap ma sinh vien: ";
        fflush(stdin);
        gets(L.E[i].masv);
        cout<<"Nhap ho dem: ";
        fflush(stdin);
        gets(L.E[i].hodem);
        cout<<"Nhap ten: ";
        fflush(stdin);
        gets(L.E[i].ten);
        cout<<"Nhap nam sinh: ";
        cin>>L.E[i].namsinh;
        cout<<"Nhap diem: ";
        cin>>L.E[i].diem;
    }
}

void xuat(listt &L){
    cout<<"Bang sinh vien: "<<endl;
	for(int i=0; i<L.n; i++){
		cout<<"STT: "<<L.E[i].stt<<endl;
    	cout<<"Ma sv: "<<L.E[i].masv<<endl;
   		cout<<"Ho dem: "<<L.E[i].hodem<<endl;
    	cout<<"Ten: "<<L.E[i].ten<<endl;
    	cout<<"Nam sinh: "<<L.E[i].namsinh<<endl;
    	cout<<"Diem: "<<L.E[i].diem<<endl;
	}
}

void sxluachon(listt &L){
    for(int i=0 ; i<L.n ; i++){
        int m=i;
        for(int j=i+1 ; j<L.n ; j++)
            if(strcmp(L.E[j].ten,L.E[m].ten)<0)/*tang dan*/
                m=j;
        swap(L.E[i],L.E[m]);
    }
}

void xoa(listt &L, int k){
    if(k<= L.n+1 && k>0){
        for(int i=k ; i<L.n; i++)
            L.E[i - 1] = L.E[i];
        L.n--;
    }
    else
        cout<<"Khong xoa dc"<<endl;
}

void chen(listt &L, int k){
    if( k<= L.n+1 && k>0 ){
        for (int i = L.n; i>=k-1; i--)
            L.E[i+1] = L.E[i] ;
        cout<<"Nhap STT: ";
        cin>>L.E[k].stt;
        cout<<"Nhap ma sinh vien: ";
        fflush(stdin);
        gets(L.E[k].masv);
        cout<<"Nhap ho dem: ";
        fflush(stdin);
        gets(L.E[k].hodem);
        cout<<"Nhap ten: ";
        fflush(stdin);
        gets(L.E[k].ten);
        cout<<"Nhap nam sinh: ";
        cin>>L.E[k].namsinh;
        cout<<"Nhap diem: ";
        cin>>L.E[k].diem;
    }
    else
        cout<<"Khong chen dc"<<endl;
    xuat(L);
}

int main(){
    listt L;
    nhap(L);
    sxluachon(L);
    xuat(L);
    int k;
    cout<<"Vt xoa: ";
    cin>>k;
    xoa(L,k);
    xuat(L);
    int k,x;
    cout<<"Vi tri can chen:";
    cin>>k;
    cout<<"so luong can chen: ";
    cin>>x;
    chen(L,k);
    
	return 0;
}
