#include<bits/stdc++.h>
using namespace std;

struct Student {
    char hoTen[30], gt[15];
    int namSinh;
    double diemTK;
};

void input(Student *a, int n){
    for(int i=0; i<n; i++){
        cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
        cout << "Nhap ho ten: "; cin.ignore();
        gets(a[i].hoTen);
        cout << "Nhap gioi tinh: ";
        gets(a[i].gt);
        cout << "Nhap nam sinh: ";
        cin >> a[i].namSinh;
        cout << "Nhap diem TK: ";
        cin >> a[i].diemTK;
    }
}

void output(Student *a, int n){
    cout << left << setw(20) << "Ho Ten" << setw(15) << "Gioi Tinh"
            << setw(15) << "Nam Sinh" << setw(15) << "Diem TK" << endl;
    for(int i=0; i<n; i++)
        cout << left << setw(20) << a[i].hoTen << setw(15) << a[i].gt
            << setw(15) << a[i].namSinh << setw(15) << a[i].diemTK << endl;
}

//----------------------quick sort
void quickSort(Student *a, int left, int right){
    if(left < right){
        int i=left;
        int j=right;
        Student t=a[(left+right)/2];
        while(i<=j){
            while(stricmp(a[i].hoTen, t.hoTen) < 0) i++;
            while(stricmp(a[j].hoTen, t.hoTen) > 0) j--;
            if(i <= j){
                Student temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
                j--;
            }
        }
        quickSort(a, left, j);
        quickSort(a, i, right);
    }
}

//---------------------------heap sort
void swap(Student &a, Student &b){
    Student temp = a;
    a = b;
    b = temp;
}

void heapify(Student *a, int n, int i){
    int l = 2 * i + 1; 
    int r = 2 * i + 2;
    int smallest = i; 

    if (l < n && stricmp(a[l].hoTen, a[smallest].hoTen) > 0)
        smallest = l;
 
    if (r < n && stricmp(a[r].hoTen, a[smallest].hoTen) > 0)
        smallest = r;
 
    if (smallest != i) {
        swap(a[i], a[smallest]);
 
        heapify(a, n, smallest);
    }
}
 
void heapSort(Student *a, int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
 
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

//--------------------------merge sort
void merge(Student *a, int low, int high, int mid){

    int i=low, j=mid+1, k=0;
    Student temp[high-low+1];

    while(i<=mid && j<=high){
        if(stricmp(a[i].hoTen, a[j].hoTen) < 0)            
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i<=mid)
        temp[k++]=a[i++];
        
    while(j<=high)
        temp[k++]=a[j++];
        
    for(i=low;i<=high;i++)
        a[i]=temp[i-low];

    return;
}


void mergeSort(Student *a, int low, int high){
    if(low < high){
        int mid = (low+high)/2;

        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);

        merge(a, low, high, mid);
    }

    return;
}

int main(){
    int n;
    cout << "Nhap so sinh vien: ";  cin >> n;
    Student *a = new Student[n];
    
    input(a, n);

    // quickSort(a, 0, n-1);
    // heapSort(a, n);
    mergeSort(a, 0, n-1);

    output(a, n);

    return 0;
}