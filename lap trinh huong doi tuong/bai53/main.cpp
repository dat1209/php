#include <bits/stdc++.h>

using namespace std;

class vehicle
{
protected:
    char nhanhieu[30];
    int namsx;
    char hang[20];
public:
    void nhap();
    void xuat();
};

class oto:public vehicle
{
    int chongoi;
    float dungtich;
public:
    void nhap();
    void xuat();
};

class moto:public vehicle
{
    float phankhoi;
public:
    void nhap();
    void xuat();
};

void vehicle::nhap()
{
    cout<<"nhap nhan hieu: "; fflush(stdin); gets(nhanhieu);
    cout<<"nhap nam san xuat: "; cin>>namsx;
    cout<<"nhap hang: "; fflush(stdin); gets(hang);
}

void vehicle::xuat()
{
    cout<<"nha hieu: "<<nhanhieu<<endl;
    cout<<"nam san xuat: "<<namsx<<endl;
    cout<<"hang: "<<hang<<endl;
}

void oto::nhap()
{
    vehicle::nhap();
    cout<<"nhap so cho ngoi: ";cin>>chongoi;
    cout<<"nhap dung tich: ";cin>>dungtich;
}

void oto::xuat()
{
    vehicle::xuat();
    cout<<"so cho ngoi: "<<chongoi<<endl;
    cout<<"dung tich: "<<dungtich<<endl;
}

void moto::nhap()
{
    vehicle::nhap();
    cout<<"nhap phan khoi: ";cin>>phankhoi;
}

void moto::xuat()
{
    vehicle::xuat();
    cout<<"phan khoi: "<<phankhoi<<endl;
}

int main()
{
    oto a;
    moto b;
    cout<<"nhap thong tin oto:"<<endl;
    a.nhap();
    cout<<"nhap thong tin moto:"<<endl;
    b.nhap();
    cout<<"thong tin oto:"<<endl;
    a.xuat();
    cout<<"thong tin moto:"<<endl;
    b.xuat();
    return 0;
}
