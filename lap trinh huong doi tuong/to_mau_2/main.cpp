#include <graphics.h>

using namespace std;

void to_mau(int xa, int ya, int xb, int yb, int xc, int yc, int xd, int yd, int color)
{
    int ymax =yc, ymin=ya;
    int y=ymin;

    for(y; y<=ymax;  y++)
    {
        int xm1 = ((xd-xa)/(ymax-ymin))*(y-ymin)+xa;
        int xm2 = ((xb-xc)/(ymax-ymin))*(y-ymin)+xb;
        for(xm1; xm1<=xm2; xm1++)
        {
            putpixel(xm1,y,color);
        }
    }
}

int main()
{
    initwindow(480,720);
    to_mau(20,20,90,20,40,70,60,70,60);
    getch();
}
