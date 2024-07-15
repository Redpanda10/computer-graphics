#include <graphics.h>
#include <iostream>
using namespace std;

int main()
{
    int x1, x2, y1, y2, x3, y3, dx, dy;
     initwindow(1000, 1000);
    cout << "Enter coordinates of a: ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of b: ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of c: ";
    cin >> x3 >> y3;
    
   
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    cout << "Enter the scaling factor for x: ";
    cin >> dx;
    cout << "Enter the scaling factor for y: ";
    cin >> dy;
    line(x1 * dx, y1 * dy, x2 * dx, y2 * dy);
    line(x2 * dx, y2 * dy, x3 * dx, y3 * dy);
    line(x3 * dx, y3 * dy, x1 * dx, y1 * dy);
    getch();
    closegraph();
}
