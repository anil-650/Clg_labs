1. WAP to  implement Bresenham's line drawing algorithm in c

```c
#include<stdio.h>
#include<graphics.h>

void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;
    while(x<x1)
    {
        if(p>=0)
        {
            putpixel(x,y,7);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,7);
            p=p+2*dy;}
        x=x+1;
    }
}

int main()
{
    int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    printf("Enter co-ordinates of first point: ");
    scanf("%d%d", &x0, &y0);
    printf("Enter co-ordinates of second point: ");
    scanf("%d%d", &x1, &y1);
    drawline(x0, y0, x1, y1);
    return 0;
}

```

2. WAP to implement mid-point circle drawing algorithm.

```c
#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void main()
{
    int x,y,x_mid,y_mid,radius,dp;
    int g_mode,g_driver=DETECT;
    clrscr();
    initgraph(&g_driver,&g_mode,"C:\\TURBOC3\\BGI");
    printf("*********** MID POINT Circle drawing algorithm ********\n\n");
    printf("\nenter the circle center= ");
    scanf("%d %d",&x_mid,&y_mid);
    printf("\n  enter the radius =");
    scanf("%d",&radius);
    x=0;
    y=radius;
    dp=1-radius;
    do
    {
        putpixel(x_mid+x,y_mid+y,YELLOW);
        putpixel(x_mid+y,y_mid+x,YELLOW);
        putpixel(x_mid-y,y_mid+x,YELLOW);
        putpixel(x_mid-x,y_mid+y,YELLOW);
        putpixel(x_mid-x,y_mid-y,YELLOW);
        putpixel(x_mid-y,y_mid-x,YELLOW);
        putpixel(x_mid+y,y_mid-x,YELLOW);
        putpixel(x_mid+x,y_mid-y,YELLOW);
        if(dp<0) {
            dp+=(2*x)+1;
        }
        else{
            y=y-1;
            dp+=(2*x)-(2*y)+1;
        }
        x=x+1;
    }while(y>x);
    getch();
}
```

3. WAP  to clip a line using Cohen and Sutherland line clipping algorithm

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <graphics.h>
#include <dos.h>

typedef struct coord {
    int x, y;
    char code[4];
} PT;

void drawwindow();
void drawline(PT p1, PT p2);
PT setcode(PT p);
int visibility(PT p1, PT p2);
PT resetendpt(PT p1, PT p2);

void main()
{
    int gd = DETECT, v, gm;
    PT p1, p2, p3, p4, ptemp;

    printf("\nEnter x1 and y1\n");
    scanf("%d %d", &p1.x, &p1.y);
    printf("\nEnter x2 and y2\n");
    scanf("%d %d", &p2.x, &p2.y);

    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    drawwindow();
    delay(500);

    drawline(p1, p2);
    delay(500);
    cleardevice();

    delay(500);
    p1 = setcode(p1);
    p2 = setcode(p2);
    v = visibility(p1, p2);
    delay(500);

    switch (v) {
        case 0:
            drawwindow();
            delay(500);
            drawline(p1, p2);
            break;
        case 1:
            drawwindow();
            delay(500);
            break;
        case 2:
            p3 = resetendpt(p1, p2);
            p4 = resetendpt(p2, p1);
            drawwindow();
            delay(500);
            drawline(p3, p4);
            break;
    }

    delay(5000);
    closegraph();
}

void drawwindow()
{
    line(150, 100, 450, 100);
    line(450, 100, 450, 350);
    line(450, 350, 150, 350);
    line(150, 350, 150, 100);
}

void drawline(PT p1, PT p2)
{
    line(p1.x, p1.y, p2.x, p2.y);
}

PT setcode(PT p) //for setting the 4 bit code
{
    PT ptemp;

    if (p.y < 100)
        ptemp.code[0] = '1'; //Top
    else
        ptemp.code[0] = '0';

    if (p.y > 350)
        ptemp.code[1] = '1'; //Bottom
    else
        ptemp.code[1] = '0';

    if (p.x > 450)
        ptemp.code[2] = '1'; //Right
    else
        ptemp.code[2] = '0';

    if (p.x < 150)
        ptemp.code[3] = '1'; //Left
    else
        ptemp.code[3] = '0';

    ptemp.x = p.x;
    ptemp.y = p.y;

    return (ptemp);
}

int visibility(PT p1, PT p2)
{
    int i, flag = 0;

    for (i = 0; i < 4; i++) {
        if ((p1.code[i] != '0') || (p2.code[i] != '0'))
            flag = 1;
    }

    if (flag == 0)
        return (0);

    for (i = 0; i < 4; i++) {
        if ((p1.code[i] == p2.code[i]) && (p1.code[i] == '1'))
            flag = '0';
    }

    if (flag == 0)
        return (1);

    return (2);
}

PT resetendpt(PT p1, PT p2)
{
    PT temp;
    int x, y, i;
    float m, k;

    if (p1.code[3] == '1')
        x = 150;

    if (p1.code[2] == '1')
        x = 450;

    if ((p1.code[3] == '1') || (p1.code[2] == '1')) {
        m = (float)(p2.y - p1.y) / (p2.x - p1.x);
        k = (p1.y + (m * (x - p1.x)));
        temp.y = k;
        temp.x = x;

        for (i = 0; i < 4; i++)
            temp.code[i] = p1.code[i];

        if (temp.y <= 350 && temp.y >= 100)
            return (temp);
    }

    if (p1.code[0] == '1')
        y = 100;

    if (p1.code[1] == '1')
        y = 350;

    if ((p1.code[0] == '1') || (p1.code[1] == '1')) {
        m = (float)(p2.y - p1.y) / (p2.x - p1.x);
        k = (float)p1.x + (float)(y - p1.y) / m;
        temp.x = k;
        temp.y = y;

        for (i = 0; i < 4; i++)
            temp.code[i] = p1.code[i];

        return (temp);
    }
    else
        return (p1);
}
```

```
O/P:-
Enter x1 and y1
100
100
Enter x2 and y2
200
200
```

4. WAP to clip a polygon using Sutherland Hodgeman algorithm

```c
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void clip(float,float,float);
int i,j=0,n;
int rx1,rx2,ry1,ry2;
float x1[8],y1[8];

void main()
{
    int gd=DETECT,gm;
    int i,n;
    float x[8],y[8],m;

    clrscr();

    initgraph(&gd,&gm,"");
    printf("coordinates for rectangle : ");
    scanf("%d%d%d%d",&rx1,&ry1,&rx2,&ry2);
    printf("no. of sides for polygon : ");
    scanf("%d",&n);
    printf("coordinates : ");

    for(i=0;i<n;i++)
    {
        scanf("%f%f",&x[i],&y[i]);
    }

    cleardevice();

    outtextxy(10,10,"Before clipping");
    outtextxy(10,470,"Press any key....");
    rectangle(rx1,ry1,rx2,ry2);

    for(i=0;i<n-1;i++)
        line(x[i],y[i],x[i+1],y[i+1]);
    line(x[i],y[i],x[0],y[0]);

    getch();
    cleardevice();

    for(i=0;i<n-1;i++)
    {
        m=(y[i+1]-y[i])/(x[i+1]-x[i]);
        clip(x[i],y[i],m);
        clip(x[i+1],y[i+1],m);
    }

    m=(y[i]-y[0])/(x[i]-x[0]);
    clip(x[i],y[i],m);
    clip(x[0],y[0],m);
    outtextxy(10,10,"After clipping");
    outtextxy(10,470,"Press any key....");
    rectangle(rx1,ry1,rx2,ry2);

    for(i=0;i<j-1;i++)
        line(x1[i],y1[i],x1[i+1],y1[i+1]);

    getch();
}

void clip(float e,float f,float m)
{
    while(e<rx1 e>rx2 f<ry1 f>ry2)
    {
        if(e<rx1)
        {
            f+=m*(rx1-e);
            e=rx1;
        }
        else if(e>rx2)
        {
            f+=m*(rx2-e);
            e=rx2;
        }
        if(f<ry1)
        {
            e+=(ry1-f)/m;
            f=ry1;
        }
        else if(f>ry2)
        {
            e+=(ry2-f)/m;
            f=ry2;
        }
    }

    x1[j]=e;
    y1[j]=f;
    j++;
}
```

5. WAP to fill a polygon using Scan line fill algorithm.

```c
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#define maxHt 800
#define maxWd 600
#define maxVer 10000
FILE *fp;

typedef struct edgebucket
{
    int ymax;
    float xofymin;
    float slopeinverse;
}EdgeBucket;

typedef struct edgetabletup
{
    int countEdgeBucket;
    EdgeBucket buckets[maxVer];
}EdgeTableTuple;

EdgeTableTuple EdgeTable[maxHt], ActiveEdgeTuple;

void initEdgeTable()
{
    int i;
    for (i=0; i<maxHt; i++)
    {
        EdgeTable[i].countEdgeBucket = 0;
    }
    ActiveEdgeTuple.countEdgeBucket = 0;
}

void printTuple(EdgeTableTuple *tup)
{
    int j;
    if (tup->countEdgeBucket)
        printf("\nCount %d-----\n",tup->countEdgeBucket);
    for (j=0; j<tup->countEdgeBucket; j++)
    {
        printf(" %d+%.2f+%.2f",tup->buckets[j].ymax, tup->buckets[j].xofymin,tup->buckets[j].slopeinverse);
    }
}

void printTable()
{
    int i,j;
    for (i=0; i<maxHt; i++)
    {
        if (EdgeTable[i].countEdgeBucket)
            printf("\nScanline %d", i);
        printTuple(&EdgeTable[i]);
    }
}

void insertionSort(EdgeTableTuple *ett)
{
    int i,j;
    EdgeBucket temp;
    for (i = 1; i < ett->countEdgeBucket; i++)
    {
        temp.ymax = ett->buckets[i].ymax;
        temp.xofymin = ett->buckets[i].xofymin;
        temp.slopeinverse = ett->buckets[i].slopeinverse;
        j = i - 1;
        while ((temp.xofymin < ett->buckets[j].xofymin) && (j >= 0))
        {
            ett->buckets[j + 1].ymax = ett->buckets[j].ymax;
            ett->buckets[j + 1].xofymin = ett->buckets[j].xofymin;
            ett->buckets[j + 1].slopeinverse = ett->buckets[j].slopeinverse;
            j = j - 1;
        }
        ett->buckets[j + 1].ymax = temp.ymax;
        ett->buckets[j + 1].xofymin = temp.xofymin;
        ett->buckets[j + 1].slopeinverse = temp.slopeinverse;
    }
}

void storeEdgeInTuple (EdgeTableTuple *receiver,int ym,int xm,float slopInv)
{
    (receiver->buckets[(receiver)->countEdgeBucket]).ymax = ym;
    (receiver->buckets[(receiver)->countEdgeBucket]).xofymin = (float)xm;
    (receiver->buckets[(receiver)->countEdgeBucket]).slopeinverse = slopInv;
    insertionSort(receiver);
    (receiver->countEdgeBucket)++;
}

void storeEdgeInTable (int x1,int y1, int x2, int y2)
{
    float m,minv;
    int ymaxTS,xwithyminTS, scanline; //ts stands for to store
    if (x2==x1)
    {
        minv=0.000000;
    }
    else
    {
        m = ((float)(y2-y1))/((float)(x2-x1));
        if (y2==y1)
            return;
        minv = (float)1.0/m;
        printf("\nSlope string for %d %d & %d %d: %f",x1,y1,x2,y2,minv);
    }
    if (y1>y2)
    {
        scanline=y2;
        ymaxTS=y1;
        xwithyminTS=x2;
    }
    else
    {
        scanline=y1;
        ymaxTS=y2;
        xwithyminTS=x1;
    }
    storeEdgeInTuple(&EdgeTable[scanline],ymaxTS,xwithyminTS,minv);
}

void removeEdgeByYmax(EdgeTableTuple *Tup,int yy)
{
    int i,j;
    for (i=0; i< Tup->countEdgeBucket; i++)
    {
        if (Tup->buckets[i].ymax == yy)
        {
            printf("\nRemoved at %d",yy);
            for ( j = i ; j < Tup->countEdgeBucket -1 ; j++ )
            {
                Tup->buckets[j].ymax =Tup->buckets[j+1].ymax;
                Tup->buckets[j].xofymin =Tup->buckets[j+1].xofymin;
                Tup->buckets[j].slopeinverse = Tup->buckets[j+1].slopeinverse;
            }
            Tup->countEdgeBucket--;
            i--;
        }
    }
}

void updatexbyslopeinv(EdgeTableTuple *Tup)
{
    int i;
    for (i=0; i<Tup->countEdgeBucket; i++)
    {
        (Tup->buckets[i]).xofymin =(Tup->buckets[i]).xofymin + (Tup->buckets[i]).slopeinverse;
    }
}

void ScanlineFill()
{
    int i, j, x1, ymax1, x2, ymax2, FillFlag = 0, coordCount;
    for (i=0; i<maxHt; i++)//4. Increment y by 1 (next scan line)
    {
        for (j=0; j<EdgeTable[i].countEdgeBucket; j++)
        {
            storeEdgeInTuple(&ActiveEdgeTuple,EdgeTable[i].buckets[j].
                    ymax,EdgeTable[i].buckets[j].xofymin,
                    EdgeTable[i].buckets[j].slopeinverse);
        }
        printTuple(&ActiveEdgeTuple);
        removeEdgeByYmax(&ActiveEdgeTuple, i);
        insertionSort(&ActiveEdgeTuple);
        printTuple(&ActiveEdgeTuple);
        j = 0;
        FillFlag = 0;
        coordCount = 0;
        x1 = 0;
        x2 = 0;
        ymax1 = 0;
        ymax2 = 0;
        while (j<ActiveEdgeTuple.countEdgeBucket)
        {
            if (coordCount%2==0)
            {
                x1 = (int)(ActiveEdgeTuple.buckets[j].xofymin);
                ymax1 = ActiveEdgeTuple.buckets[j].ymax;
                if (x1==x2)
                {
                    if (((x1==ymax1)&&(x2!=ymax2))||((x1!=ymax1)&&(x2==ymax2)))
                    {
                        x2 = x1;
                        ymax2 = ymax1;
                    }
                    else
                    {
                        coordCount++;
                    }
                }
                else
                {
                    coordCount++;
                }
            }
            else
            {
                x2 = (int)ActiveEdgeTuple.buckets[j].xofymin;
                ymax2 = ActiveEdgeTuple.buckets[j].ymax;
                FillFlag = 0;
                if (x1==x2)
                {
                    if (((x1==ymax1)&&(x2!=ymax2))||((x1!=ymax1)&&(x2==ymax2)))
                    {
                        x1 = x2;
                        ymax1 = ymax2;
                    }
                    else
                    {
                        coordCount++;
                        FillFlag = 1;
                    }
                }
                else
                {
                    coordCount++;
                    FillFlag = 1;
                }
                if(FillFlag)
                {
                    glColor3f(0.0f,0.7f,0.0f);
                    glBegin(GL_LINES);
                    glVertex2i(x1,i);
                    glVertex2i(x2,i);
                    glEnd();
                    glFlush();
                }
            }
            j++;
        }
        updatexbyslopeinv(&ActiveEdgeTuple);
    }
    printf("\nScanline filling complete");
}

void myInit(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,maxHt,0,maxWd);
    glClear(GL_COLOR_BUFFER_BIT);
}

void drawPolyDino()
{
    glColor3f(1.0f,0.0f,0.0f);
    int count = 0,x1,y1,x2,y2;
    rewind(fp);
    while(!feof(fp) )
    {
        count++;
        if (count>2)
        {
            x1 = x2;
            y1 = y2;
            count=2;
        }
        if (count==1)
        {
            fscanf(fp, "%d,%d", &x1, &y1);
        }
        else
        {
            fscanf(fp, "%d,%d", &x2, &y2);
            printf("\n%d,%d", x2, y2);
            glBegin(GL_LINES);
            glVertex2i( x1, y1);
            glVertex2i( x2, y2);
            glEnd();
            storeEdgeInTable(x1, y1, x2, y2);
            glFlush();
        }
    }
}

void drawDino(void)
{
    initEdgeTable();
    drawPolyDino();
    printf("\nTable");
    printTable();
    ScanlineFill();
}

void main(int argc, char** argv)
{
    fp=fopen ("PolyDino.txt","r");
    if ( fp == NULL )
    {
        printf( "Could not open file" ) ;
        return;
    }
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(maxHt,maxWd);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("Scanline filled dinosaur");
    myInit();
    glutDisplayFunc(drawDino);
    glutMainLoop();
    fclose(fp);
}
```

```
O/P:-
Filled up dinosaur: 
```

6. WAP to apply various 2D transformations on a 2D object(se homogenous coordinates).

```c
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>

void main()
{
    int gm;
    int gd=DETECT;
    int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
    int sx,sy,xt,yt,r;
    float t;
    initgraph(&gd,&gm,"c:\tc\bg:");
    printf("\t Program for basic transactions");
    printf("\n\t Enter the points of triangle");
    setcolor(1);
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    getch();
    printf("\n 1.Transaction\n 2.Rotation\n 3.Scalling\n 4.exit");
    printf("Enter your choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("\n Enter the translation factor");
            scanf("%d%d",&xt,&yt);
            nx1=x1+xt;
            ny1=y1+yt;
            nx2=x2+xt;
            ny2=y2+yt;
            nx3=x3+xt;
            ny3=y3+yt;
            line(nx1,ny1,nx2,ny2);
            line(nx2,ny2,nx3,ny3);
            line(nx3,ny3,nx1,ny1);
            getch();

        case 2:
            printf("\n Enter the angle of rotation");
            scanf("%d",&r);
            t=3.14*r/180;
            nx1=abs(x1*cos(t)-y1*sin(t));
            ny1=abs(x1*sin(t)+y1*cos(t));
            nx2=abs(x2*cos(t)-y2*sin(t));
            ny2=abs(x2*sin(t)+y2*cos(t));
            nx3=abs(x3*cos(t)-y3*sin(t));
            ny3=abs(x3*sin(t)+y3*cos(t));
            line(nx1,ny1,nx2,ny2);
            line(nx2,ny2,nx3,ny3);
            line(nx3,ny3,nx1,ny1);
            getch();

        case 3:
            printf("\n Enter the scalling factor");
            scanf("%d%d",&sx,&sy);
            nx1=x1*sx;
            ny1=y2*sy;
            nx2=x2*sx;
            ny2=y2*sy;
            nx3=x3*sx;
            ny3=y3*sy;
            line(nx1,ny1,nx2,ny2);
            line(nx2,ny2,nx3,ny3);
            line(nx3,ny3,nx1,ny1);
            getch();

        case 4:
            break;
        default:
            printf("Enter the correct choice");
    }
    closegraph();
}
```

7. WAP  to apply various 3D transformations on a 3D object and the apply parallel and perspective projection on it.

```c
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int maxx,maxy,midx,midy;

void axis()
{
    getch();
    cleardevice();
    line(midx,0,midx,maxy);
    line(0,midy,maxx,midy);
}
void main()
{
    int gd,gm,x,y,z,ang,x1,x2,y1,y2;
    detectgraph(&gd,&gm);

    initgraph(&gd,&gm,"C:/TC/BGI");
    setfillstyle(3,25);

    maxx=getmaxx();
    maxy=getmaxy();
    midx=maxx/2;
    midy=maxy/2;
    outtextxy(100,100,"ORIGINAL OBJECT");

    line(midx,0,midx,maxy);
    line(0,midy,maxx,midy);

    bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
    axis();

    outtextxy(100,20,"TRANSLATION");

    printf("\n\n Enter the Translation vector: ");
    scanf("%d%d",&x,&y);

    bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
    bar3d(midx+(x+100),midy-(y+20),midx+(x+60),midy-(y+90),20,5);
    axis();

    outtextxy(100,20,"SCALING");

    printf("\n Enter the Scaling Factor: ");
    scanf("%d%d%d",&x,&y,&z);

    bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
    bar3d(midx+(x*100),midy-(y*20),midx+(x*60),midy-(y*90),20*z,5);
    axis();

    outtextxy(100,20,"ROTATION");

    printf("\n Enter the Rotation angle: ");
    scanf("%d",&ang);

    x1=100*cos(ang*3.14/180)-20*sin(ang*3.14/180);
    y1=100*sin(ang*3.14/180)+20*sin(ang*3.14/180);
    x2=60*cos(ang*3.14/180)-90*sin(ang*3.14/180);
    y2=60*sin(ang*3.14/180)+90*sin(ang*3.14/180);
    axis();

    printf("\n After rotating about z-axis\n");

    bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
    bar3d(midx+x1,midy-y1,midx+x2,midy-y2,20,5);
    axis();

    printf("\n After rotating about x-axis\n");

    bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
    bar3d(midx+100,midy-x1,midx+60,midy-x2,20,5);
    axis();

    printf("\n After rotating about y-axis\n");

    bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
    bar3d(midx+x1,midy-20,midx+x2,midy-90,20,5);
    axis();

    closegraph();
}
```
