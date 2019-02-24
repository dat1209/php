#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include "sinhvien.h"

using namespace std;

void sinhvien::nhap()
{
    cout<<"nhap ma sv:";fflush(stdin);gets(masv);
    cout<<"nhap ten sinh vien:";fflush(stdin); gets(hoten);
    cout<<"nhap tuoi:";cin>>tuoi;
    cout<<"nhap diem:";cin>>diem;
}

void sinhvien::xuat()
{
    cout<<"masv:"<<masv<<endl;
    cout<<"ho ten:"<<hoten<<endl;
    cout<<"tuoi:"<<tuoi<<endl;
    cout<<"diem:"<<diem<<endl;
}
