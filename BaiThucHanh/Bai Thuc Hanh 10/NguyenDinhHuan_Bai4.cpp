#include<bits\stdc++.h>
using namespace std;
#define max 100
struct sinhvien{
	char sobaodanh[10];
	char hoten[20];
	float tongdt;
};

struct List{
	int count;
	sinhvien E[max];
};

void initializer(List &L ){
    L.count=-1;
}

int full(List L){
	return L.count== max -1;
}

int empty(List L){
	return L.count==-1;
}

int add(List &L,sinhvien x){
	if(full(L))
	return 0;
	else{
		L.count++;
		L.E[L.count]=x;
		return 1;
	}
}

void nhapsv(sinhvien &sv){
    cout<<"nhap so bao danh:";fflush(stdin);gets(sv.sobaodanh);
    if(strcmp(sv.sobaodanh,"***")==0) return;
    cout<<"nhap ho ten:";fflush(stdin);gets(sv.hoten);
    cout<<"nhap tong diem:";cin>>sv.tongdt;
}

void nhapds(List &L){
    initializer(L);
    sinhvien x;
    int i=1;
    do{
        cout<<"Nhap sv thu "<<i<<endl;
        nhapsv(x);
        if(strcmp(x.sobaodanh,"***")==0) return;
        if(!add(L,x)) return;
        ++i;
    }while(true);
}
void xuatds(List L){
    cout<<setw(5)<<"STT";
    cout<<setw(10)<<"so bao danh";
    cout<<setw(25)<<"Ho Ten";
    cout<<setw(10)<<"Tong Diem"<<endl;
    for(int i=0;i<=L.count;i++){
        cout<<setw(5)<<i+1<<endl;
        cout<<setw(10)<<L.E[i].sobaodanh;
        cout<<setw(25)<<L.E[i].hoten;
        cout<<setw(10)<<L.E[i].tongdt<<endl;
    }
}

int insert(int k,List &L){
	int i;
	sinhvien x;
	if(!full(L) && k<=L.count+1 && k>=1){
		cout<<"\nnhap sinh vien can bo sung\n";
		nhapsv(x);
		for(i=L.count;i>=k;i--)
		L.E[i+1]=L.E[i];
		L.count=L.count+1;
		L.E[k-1]=x;
		return 1;
	}
	return 0;
}
int main(){
	List L;

	nhapds(L);
	cout<<"danh sach vua nhap\n";
	xuatds(L);
    
	insert(3,L);
	cout<<"danh sach vua bo sung ";
	xuatds(L);

    return 0;
}