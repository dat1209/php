#include <bits/stdc++.h>

using namespace std;

class person
{
protected:
    char hoten[30];
    char ngaysinh[10];
    char quequan[50];
};
class KYSU:public person
{
    char nganh[10];
    int namtn;
public:
    void nhap();
    void xuat();
    friend void in(KYSU *a, int n);
};

void KYSU::nhap()
{
    cout<<"nhap ho ten: ";fflush(stdin);gets(hoten);
    cout<<"nhap ngay sinh: ";fflush(stdin);gets(ngaysinh);
    cout<<"nhap que quan: ";fflush(stdin);gets(quequan);
    cout<<"nhap nganh hoc: ";fflush(stdin);gets(nganh);
    cout<<"nhap nam tot nghiep: ";cin>>namtn;
}

void KYSU::xuat()
{
    cout<<setw(20)<<hoten<<setw(15)<<ngaysinh<<setw(30)<<quequan<<setw(15)<<nganh<<setw(10)<<namtn<<endl;
}

void in(KYSU *a, int n)
{
    int M=0;
    for(int i=0; i<n; i++)
    {
        if(M<a[i].namtn)
        {
            M=a[i].namtn;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i].namtn==M)
        {
            a[i].xuat();
        }
    }
}

int main()
{
    int n;cout<<"nhap so sinh vien: ";cin>>n;
    KYSU *a=new KYSU[n];
    for(int i=0; i<n; i++)
    {
        a[i].nhap();
    }
    in(a,n);
    return 0;
}
