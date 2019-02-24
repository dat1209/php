#include <iostream>
#include <bits/stdc++.h>
#include "hang.h"

using namespace std;

void hang::nhap()
{
    cout<<"nhap ma hang:";fflush(stdin);gets(mahang);
    cout<<"nhap ten hang:";fflush(stdin);gets(tenhang);
    cout<<"nhap gia:";cin>>donggia;
    cout<<"nhap so luong";cin>>soluong;
}
void hang::xuat()
{
    cout<<mahang<<"\t"<<tenhang<<"\t"<<donggia<<"\t"<<soluong<<"\t"<<soluong*donggia<<endl;
}
