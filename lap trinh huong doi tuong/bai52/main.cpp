#include <bits/stdc++.h>

using namespace std;

class priter
{
protected:
    float tronglg;
    char hangsx[30];
    int namsx;
    float tocdo;
};

class dotprinter:public priter
{
    int matdokim;
public:
    void nhap();
    void xuat();
};

class lasepriter:public priter
{
    int dophandai;
public:
    void nhap();
    void xuat();
};

void dotprinter::nhap()
{
    cout<<"nhap trong luong: ";cin>>tronglg;
    cout<<"nhap hang san xuat: ";fflush(stdin);gets(hangsx);
    cout<<"nhap nam san xuat: ";cin>>namsx;
    cout<<"nhap toc do: ";cin>>tocdo;
    cout<<"nhap mat do kim: ";cin>>matdokim;
}

void dotprinter::xuat()
{
    cout<<"trong luong: "<<tronglg<<endl;
    cout<<"hang san xuat: "<<hangsx<<endl;
    cout<<"nam san xuat: "<<namsx<<endl;
    cout<<"toc do: "<<tocdo<<endl;
    cout<<"mat do kim: "<<matdokim<<endl;
}

void lasepriter::nhap()
{
    cout<<"nhap trong luong: ";cin>>tronglg;
    cout<<"nhap hang san xuat: ";fflush(stdin);gets(hangsx);
    cout<<"nhap nam san xuat: ";cin>>namsx;
    cout<<"nhap toc do: ";cin>>tocdo;
    cout<<"nhap do phan giai: ";cin>>dophandai;
}

void lasepriter::xuat()
{
    cout<<"trong luong: "<<tronglg<<endl;
    cout<<"hang san xuat: "<<hangsx<<endl;
    cout<<"nam san xuat: "<<namsx<<endl;
    cout<<"toc do: "<<tocdo<<endl;
    cout<<"do phan giai: "<<dophandai;
}

int main()
{
    dotprinter a;
    a.nhap();
    a.xuat();
    lasepriter b;
    b.nhap();
    b.xuat();
    return 0;
}
