#include <iostream>

using namespace std;

int main()

{
	int d=0,n;
	cout<<"Nhap vao so n: ";
	cin>>n;
	for(int i=1; i<=100;i++)
		if(i%3==0)
		d++;	
		cout<<"So cac so chia het cho 3 hoac 7 la:"<<d;
}

