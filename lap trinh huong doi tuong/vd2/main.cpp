#include <bits/stdc++.h>

//tạo 2 lớp: lớp date gồm D,M,Y; lớp hàng gồm tenh, gia, date.
//nhập danh sách gồm n mặt hàng.
//sắp danh sách tăng dần theo chiều của giá.
//cho biết bao nhiêu mặt hàng trong sản xuất trog tháng 12.

using namespace std;

class hang;

class date
{
    int D,M,Y;
    friend class hang;
    friend int thang12(hang *a, int n);
};

class hang
{
    char tenh[50];
    float gia;
    date ngay;
public:
    void nhap();
    void xuat();
    friend void sapxep(hang *a, int n);
    friend int thang12(hang *a, int n);
};

void hang::nhap()
{
    cout<<"nhap ten hang: ";
    fflush(stdin);
    gets(tenh);
    cout<<"nhap gia: ";
    cin>>gia;
    cout<<"nhap ngay, thang, nam nhap hang: ";
    cin>>ngay.D>>ngay.M>>ngay.Y;
}

void sapxep(hang *a, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i].gia>a[j].gia)
            {
                swap(a[i],a[j]);
            }
        }
    }
}

int thang12(hang *a, int n)
{
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(a[i].ngay.M==12)
            dem++;
    }
    return dem;
}

void hang::xuat()
{
    cout<<setw(15)<<tenh<<setw(15)<<gia<<setw(12)<<ngay.D<<"/"<<ngay.M<<"/"<<ngay.Y<<endl;
}

int main()
{
    int n; cout<<"nhap n: ";cin>>n;
    hang *a=new hang[n];
    for(int i=0; i<n; i++)
    {
        a[i].nhap();
    }
    sapxep(a,n);
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }
    cout<<"so mat hang thang 12 = "<<thang12(a,n);
    return 0;
}
