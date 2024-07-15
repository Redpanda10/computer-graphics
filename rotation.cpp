#include<iostream>
#include<graphics.h>
#include<math.h>
#define pi 3.1415
using namespace std;

int sine(int x){
	return int((sin(180/pi)*x));
	
}
int cosine(int x){
	return int((cos(180/pi)*x));
}

int main(){
	initwindow(500,500);
	int x1,x2,x3,y1,y2,y3,angle;
	int a,b,c,d,e,f;
	cout << "Enter coordinates of a: ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of b: ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of c: ";
    cin >> x3 >> y3;
    
    cout<<"Enter the rotating angle in degree : ";
    cin>>angle;
    
    
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    
    x1=x1*cosine(angle)-y1*sine(angle);
    x2=x2*cosine(angle)-y2*sine(angle);
    x3=x3*cosine(angle)-y3*sine(angle);
    y1=x1*sine(angle)+y1*cosine(angle);
    y2=x2*sine(angle)+y2*cosine(angle);
    y3=x3*sine(angle)+y3*cosine(angle);
    
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    cout<<"result out now";
    getch();
}
