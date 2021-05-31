#include<bits/stdc++.h>
using namespace std;

struct hang{
    int stt;
    char mahang[20];
    char tenhang[20];
    char dvtinh[20];
    int dongia;
    int soluong;
};

struct listt{
    int n;
    hang E[100];

};

void nhap(listt &L){
    cout<<"So luong hang: ";
    cin>>L.n;
    for(int i=0 ; i<L.n ; i++){
        cout<<"Nhap stt: ";
        cin>>L.E[i].stt;
        cout<<"Nhap ma hang: ";
        fflush(stdin);
        gets(L.E[i].mahang);
        cout<<"Nhap ten hang: ";
        fflush(stdin);
        gets(L.E[i].tenhang);
        cout<<"Nhap DV tinh: ";
        fflush(stdin);
        gets(L.E[i].dvtinh);
        cout<<"Nhap don gia: ";
        cin>>L.E[i].dongia;
        cout<<"Nhap so luong: ";
        cin>>L.E[i].soluong;
    }
}

void xuat(listt &L){
    cout<<setw(5)<<"STT"<<setw(20)<<"MA HANH"<<setw(20)<<"TEN HANH"<<
    setw(20)<<"DV TINH"<<setw(20)<<"DON GIA"<<setw(20)<<"SO LUONG"<<setw(20)<<"THANH TIEN"<<endl;
    for(int i=0 ; i<L.n; i++){
        cout<<setw(5)<<L.E[i].stt<<setw(20)<<L.E[i].mahang<<setw(20)<<L.E[i].tenhang<<
        setw(20)<<L.E[i].dvtinh<<setw(20)<<L.E[i].dongia<<setw(20)<<L.E[i].soluong<<setw(20)<<L.E[i].dongia*L.E[i].soluong<<endl;
    }
}

void xoa(listt &L,int k){
    for(int i=k-1 ; i<L.n ; i++)
        L.E[i-1]=L.E[i];
        L.n--;
}
void chen(listt &L, int k){
    if( k<= L.n+1 && k>0 ){
        for (int i = L.n; i>=k-1; i--)
            L.E[i+1] = L.E[i] ;
        cout<<"Nhap STT: ";
        cin>>L.E[k].stt;
        cout<<"Nhap ma hang : ";
        fflush(stdin);
        gets(L.E[k].mahang);
        cout<<"Nhap ten hang: ";
        fflush(stdin);
        gets(L.E[k].tenhang);
        cout<<"Nhap dv tinh: ";
        fflush(stdin);
        gets(L.E[k].dvtinh);
        cout<<"Nhap so luong : ";
        cin>>L.E[k].soluong;
        cout<<"Nhap don gia: ";
        cin>>L.E[k].dongia;
    }
    else
        cout<<"Khong chen dc"<<endl;
    xuat(L);
}
void sxnoibot(listt &l){
    for(int i=0;i<l.n;i++)
        for(int j=i+1; j<l.n; j++)
            if((l.E[i].soluong*l.E[i].dongia)>(l.E[j].soluong*l.E[j].dongia))
                swap(l.E[i],l.E[j]);
}

int main(){
    listt V;
    nhap(V);
    xuat(V);
    int k;
    cout<<"Vt can xoa: ";
    cin>>k;
    xoa(V,k);
    xuat(V);
    sxnoibot(V);
    xuat(V);
    cout<<"Vt can chen: ";
    cin>>k;
    chen(V,k);

}
