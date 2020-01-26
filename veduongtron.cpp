#include<graphics.h>

void ve8diem(int x, int y ,int x0, int y0, int mau)
{
    putpixel(x0+x,y0+y,mau);
    putpixel(x0+x,y0-y,mau);
    putpixel(x0-x,y0+y,mau);
    putpixel(x0-x,y0-y,mau);
    putpixel(x0+y,x0+x,mau);
    putpixel(x0+y,x0-x,mau);
    putpixel(x0-y,x0+x,mau);
    putpixel(x0-y,x0-x,mau);
}
void vehinhtron(int x0, int y0, int r,int mau)
{
    int x = 0, y = r;
    int  p = 3 - 4*r;
    while(x<=y)
    {
        ve8diem(x,y,x0,y0,mau);
        if(p<0) p += 4*x+6;
        else
        {
            p += 4*(x-y)+10;
            y +=1;
        }
        x +=1;
    }
}
int main()
{
    initwindow(640,480);
    vehinhtron(300,300,100,RED);
    getch();
    return 0;
}
