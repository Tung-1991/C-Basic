#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	double x,F;
	cout<<"Nhap vao gia tri cua x:";
	cin>>x;
    F = pow(x,5) + 5*pow(x,5./3) - 6; 
	cout<<"Gia tri cua F:"<<F;
}

