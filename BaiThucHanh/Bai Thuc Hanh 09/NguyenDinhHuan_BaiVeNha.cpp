#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
struct node{
    string key;
    node *left,*right;
};

typedef node *TRO;

TRO createnode(string key){
    TRO p=new node;
    if(p==NULL){
        return NULL;
        cout<<"\nKhong du bo nho ";
    }
    p->key=key;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void makenull(TRO &a){
    a=NULL;
}

void insertnode(TRO &a,string x){
    if(a==NULL)
        a=createnode(x);
    else{
        if(a->key==x)
            cout<<"\nNut da ton tai";
        else
            if(a->key<x)
                if(a->right==NULL)
                    a->right=createnode(x);
                else
                    insertnode(a->right,x);
            else
                if(a->left==NULL)
                    a->left=createnode(x);
                else
                    insertnode(a->left,x);
    }
}

void addnode(TRO &a){
    char c;
    string key;
    do{

        cout<<"\nNhap key = ";cin>>key;
        insertnode(a,key);
        cout<<"\nTiep tuc nhan enter,ket thuc nhan Esc\n";
        c=getch();
    }while(c!=27);
}

void tttruoc(TRO a){
    if(a!=NULL){
        cout<<"  "<<a->key;
        tttruoc(a->left);
        tttruoc(a->right);
    }
}

void ttgiua(TRO a){
    if(a!=NULL){
        ttgiua(a->left);
        cout<<"  "<<a->key;
        ttgiua(a->right);
    }
}

void ttsau(TRO a){
    if(a!=NULL){
        ttsau(a->left);
        ttsau(a->right);
        cout<<"  "<<a->key;
    }
}

int chen(TRO &a,string &x){
    TRO p,q;
    p=new node;
    p->key=x;
    p->left=NULL;
    p->right=NULL;
    if(a==NULL){
        a=p;
        return 1;
    }
    else{
        q=a;
    while(q!=NULL){
        if(x<q->key){
            if(q->left!=NULL)
                    q=q->left;
                else{
                    q->left = p;
                    return 1;
                }
            }else{
                if(x>q->key){
                    if(q->right!=NULL)  
                        q=q->right;
                else{
                        q->right=p;
                        return 1;
                    }
                }
                else 
                    return 0;
            }
        }
    }
    
}
TRO timkiem(TRO a,string x){
    while(true){
        if(a==NULL)
            return NULL;
        if(a->key==x)
            return a;
        else
            if(a->key<x)
                a=a->right;
            else
                a=a->left;
    }
}
int Delete(TRO &a,string x){
     TRO Q;
    if (a==NULL) 
        return 0;
    else if (a->key > x) 
        return Delete(a->left, x);
    else if (a->key < x) 
        return Delete(a->right, x);
    else {
        if (a->left == NULL) a = a->right;    
        else if (a->right == NULL) a = a->left;   
        else {
            Q = a->left;
            while (Q->right != NULL){
                Q = Q->right;
            }
            a->key = Q->key;
           Delete(a->left, Q->key);
        }
    }
    return 1;
}
int main()
{
    TRO a;
    makenull(a);
    addnode(a);

    cout<<"\n---------------------------------------\n";
    tttruoc(a);

    cout<<"\n---------------------------------------\n";
    ttgiua(a);

    cout<<"\n---------------------------------------\n";
    ttsau(a);

    cout<<"\n---------------------------------------\n";
    string x="world";
    chen(a,x);

    cout<<"\n---------------------------------------\n";
    ttgiua(a);

    cout<<"\n---------------------------------------\n";
    TRO vt=timkiem(a,"hello");
    if(vt==NULL)
        cout<<"\nKHong tim thay";
    else
        cout<<"\nDa tim thay  "<<vt->key;
    cout<<"\n---------------------------------------\n";
    Delete(a,"bee");

    cout<<"\n---------------------------------------\n";
    ttgiua(a);
    
    return 0;
}
