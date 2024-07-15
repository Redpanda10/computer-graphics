#include<graphics.h>
#include<iostream>
using namespace std;

int main(){
	
	int x1,x2,x3,y1,y2,y3,tx,ty;
	cout<<"enter the coordinates of the triangle\n ";
	cout<<"enter x1 : ";
	cin>>x1;
	cout<<"enter y1 : ";
	cin>>y1;
	cout<<"enter x2 : ";
	cin>>x2;
	cout<<"enter y2 : ";
	cin>>y2;	
	cout<<"enter x3 : ";
	cin>>x3;
	cout<<"enter y3 : ";
	cin>>y3;
	cout<<"Enter the translation factors \n";
	cout<<"Enter tanslation parameter along x-axis : ";
	cin>>tx;
	cout<<"Enter tanslation parameter along x-axis : ";
	cin>>ty;
	initwindow(500,500);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x1,y1,x3,y3);
	
	line(x1+tx,y1+ty,x2+tx,y2+ty);
	line(x2+tx,y2+ty,x3+tx,y3+ty);
	line(x1+tx,y1+ty,x3+tx,y3+ty);
	getch();
}
