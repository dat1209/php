#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include "hcn.h"


using namespace std;



int main()
{
    HCN a;
    a.nhap();
    cout<<"chu vi hinh la:"<<a.chuvi()<<endl;
    cout<<"dien tich hinh la:"<<a.dientich()<<endl;
    a.ve();
    return 0;
}
