#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	double x,y,G;
	cout<<"Nhap vao gia tri x:";
	cin>>x;
	cout<<"Nhap vao gia tri y:";
	cin>>y;
	G = x*y - pow(x,2) + x*pow(y,2) - pow(y,3);
	cout<<"Gia tri cua G:"<<G;
}

