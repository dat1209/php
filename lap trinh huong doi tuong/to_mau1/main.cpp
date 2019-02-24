#include <graphics.h>

using namespace std;

void loang(int x, int y, int color, int bien)
{
    int diem=getpixel(x,y);
    if(diem!=color && diem!=bien)
    {
        putpixel(x,y,color);
        loang(x+1,y,color,bien);
        loang(x,y+1,color,bien);
        loang(x-1,y,color,bien);
        loang(x,y-1,color,bien);
    }
}

int main()
{
    initwindow(480,720);
    rectangle(10,20,300,600);
    loang(30,30,6,15);
    //delay(100);
    getch();
}
