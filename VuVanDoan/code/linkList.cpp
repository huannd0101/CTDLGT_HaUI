#include <bits\stdc++.h>
using namespace std;

struct HP{
	char maHP[10];
    char tenHP[15];
    int soTC;

    void nhap(){
        cout << "Nhap maHP : "; fflush(stdin); gets(maHP);
        cout << "Nhap tenHP: "; fflush(stdin); gets(tenHP);
        cout << "Nhap soTC : "; cin >> soTC;
    }

    void xuat(){
        cout << left << setw(15) << maHP << setw(15) << tenHP << setw(15) << soTC << endl;
    }
};

struct Node{
	HP infor;
	Node *next;
};

typedef Node* TRO;

TRO L = NULL;
Node *CreateNode(HP x){
    Node *tmp = new Node;
    tmp->next = NULL;
    tmp->infor = x;
    return tmp;
}
Node *AddElement(Node *p, HP x){
    Node *tmp = CreateNode(x);
    p->next = tmp; // phần tử cuối trỏ tới phần tử cần add vào
    return tmp; //return node cuối cùng
}

// c) chèn học phần mới vào vị trí thứ 3(pos = 1) trong danh sách gồm 5 học phần
void insert(TRO &L, HP x, int pos){
    TRO Q = L;
    int i=0;
    while(Q != NULL){
        if(i==pos)
            break;
        i++;
        Q = Q->next;
    }


    // tạo node mới lưu giá trị x
    TRO P = new Node;
    P->infor = x;
    P->next = Q->next;

    Q->next = P;
}

void deleteInPos(TRO &L, int pos){
    TRO Q = L;
    int i=0;
    while(Q != NULL){
        if(i==pos-1)
            break;
        i++;
        Q = Q->next;
    }

    TRO T = Q->next;
    Q->next = T->next;
    delete T;
}

int main(){
    TRO L, P;
    int n;
    cout << "Nhap so HP: ";
    cin >> n;

    HP temp;
    temp.nhap();
    L = CreateNode(temp);
    P = L;
    for(int i=1; i<n; i++){
        temp.nhap();
        P = AddElement(P, temp);
    }

    //insert
    int pos;
    cout << "Nhap pos = ";
    cin >> pos;
    // temp.nhap();
    // insert(L, temp, pos-2);
    deleteInPos(L, pos);
    //Xuất
    TRO x = L;
    while(x != NULL){
        x->infor.xuat();
        x = x->next;
    }


    return 0;
}