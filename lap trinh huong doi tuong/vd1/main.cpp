#include <bits/stdc++.h>

//nhập vào 1 lớp gồm masv, hoten và diem. Xuất ra điểm trung bình

using namespace std;

class sinhvien
{
    char masv[11];
    char hoten[50];
    float diem;
public:
    void nhap();
    void xuat();
    friend void tb(sinhvien *a, int n);
};

void sinhvien::nhap()
{
    cout<<"ma sinh vien:";
    fflush(stdin);
    gets(masv);
    cout<<"nhap ho ten:";
    fflush(stdin);
    gets(hoten);
    cout<<"nhap diem";
    cin>>diem;
}

void sinhvien::xuat()
{
    cout<<setw(10)<<masv<<setw(20)<<hoten<<setw(10)<<diem<<endl;
}

void tb(sinhvien *a, int n)
{
    float T=0;
    for(int i=0; i<n; i++)
    {
        T+=a[i].diem;
    }
    cout<<"tb = "<<T/n;
}
int main()
{
    int n;cout<<"nhap n:";cin>>n;
    sinhvien *a=new sinhvien[n];
    for(int i=0; i<n; i++)
    {
        a[i].nhap();
    }
    tb(a,n);
    return 0;
}
