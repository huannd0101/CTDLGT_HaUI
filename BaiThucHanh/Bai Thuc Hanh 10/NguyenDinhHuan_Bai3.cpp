#include<bits\stdc++.h>
using namespace std;

struct sinhvien{
	char sobaodanh[10];
	char hoten[20];
	float tongdt;
};
struct node{
    sinhvien sv;
    node *next;
};

typedef node *TRO;

void initializer(TRO &L ){
    L=NULL;
}

int Empty(TRO L){
    return L==NULL;
}

void nhapSV(sinhvien &sv){
    cout<<"nhap so bao danh:";fflush(stdin);gets(sv.sobaodanh);
    if(strcmp(sv.sobaodanh,"***")==0) return;
    cout<<"nhap ho ten:";fflush(stdin);gets(sv.hoten);
    cout<<"nhap tong diem:";cin>>sv.tongdt;
}
void nhapDS(TRO &L){
    initializer(L);
    sinhvien x;
    TRO Q,P;
    int i=1;
    do{
        cout<<"Nhap sv thu "<<i<<endl;
        nhapSV(x);
        if(strcmp(x.sobaodanh,"***")==0) return;
        P=new(node);
        P->sv=x;
        P->next=NULL;
        if(L==NULL) L=P;
        else Q->next=P; 
        Q=P; 
        ++i;
    }while(true);
}
void xuatDS(TRO L){
    if(L==NULL){
        cout<<"DS rong\n";
        return;
    }
    cout<<setw(10)<<"STT";
    cout<<setw(15)<<"So bao danh";
    cout<<setw(20)<<"Ho Ten";
    cout<<setw(15)<<"Tong Diem"<<endl;
    TRO Q =L;
    int i=0;
    while(Q!=NULL){
        sinhvien x=Q->sv;
        cout<<setw(10)<<i+1;
        cout<<setw(15)<<x.sobaodanh;
        cout<<setw(20)<<x.hoten;
        cout<<setw(15)<<x.tongdt<<endl;
        Q=Q->next;
    }
}
int length(TRO L){
	int n=0;
	TRO Q=L;
	while(Q!=NULL)
	{
		Q=Q->next;
		n++;
	}
}
void firtadd(TRO &L,sinhvien x){
	TRO P;
	P=new(node);
	P-> sv =x;
	P->next=L;
	L=P;
}
void insert(TRO &L,TRO Q,sinhvien x){
	TRO P;
	P=new(node);
	P->sv=x;
	P->next=Q->next;
	Q->next=P;
}
void bosung(TRO L){
	int k;
	sinhvien x;
	do{
		cout<<"nhap vi tri bo sung:";
		cin>>k;
	}while (k<1 || k>length(L));
	cout<<"nhap thong tin sinh vien can bo sung"<<endl;
	
    do{
		nhapSV(x);
		if(strcmp(x.sobaodanh,"***")==0)
		cout<<"so bao danh phai khac ***,nhap lai"<<endl;
	}while(strcmp(x.sobaodanh,"***")==0);
	
    if(k==1)
		firtadd(L,x);
	else{
		TRO Q=L;
		int d=1;
		while(d<k-1){
			d++;
			Q=Q->next;
		}
		insert(L,Q,x);
	}
	cout<<"danh sach vua bo sung\n";
	xuatDS(L);
}

int main(){
	TRO L;
	cout<<"nhap danh sach sinh vien\n";
	nhapDS(L);
	cout<<"danh sach vua nhap\n";
	xuatDS(L);
	bosung(L);

    return 0;
}