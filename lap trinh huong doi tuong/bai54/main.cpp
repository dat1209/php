#include <bits/stdc++.h>

using namespace std;

class electronic
{
protected:
    int congsuat;
    float dienap;
public:
    electronic(int a, float b);
};

electronic::electronic(int a, float b)
{
    congsuat=a;
    dienap=b;
}

class maygiat:public electronic
{
    int dungtich;
    char loai[20];
public:
    maygiat(int c, char *d, int a, float b);
    void xuat();
};

maygiat::maygiat(int c, char *d, int a, float b):electronic(a,b)
{
    dungtich=c;
    strcpy(loai,d);
}

void maygiat::xuat()
{
    cout<<"cong suat: "<<congsuat<<endl;
    cout<<"dien ap: "<<dienap<<endl;
    cout<<"dung tich: "<<dungtich<<endl;
    cout<<"loai: "<<loai<<endl;
}

class tulanh:public electronic
{
    int dungtich;
    int songan;
public:
    tulanh(int c, int d, int a, float b);
    void xuat();
};

tulanh::tulanh(int c, int d, int a, float b):electronic(a,b)
{
    dungtich=c;
    songan=d;
}

void tulanh::xuat()
{
    cout<<"cong suat: "<<congsuat<<endl;
    cout<<"dien ap: "<<dienap<<endl;
    cout<<"dung tich: "<<dungtich<<endl;
    cout<<"so ngan: "<<songan<<endl;
}


int main()
{
    tulanh a(20,10,100,30);
    a.xuat();
    maygiat b(60,"long ngang", 100,30);
    b.xuat();
    return 0;
}
