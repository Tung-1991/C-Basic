#include <iostream>
#include <string>

using namespace std;

int main()

{
	string tqg;
	double tnt,phi;
	int loai;
	cout<<"Ten Quoc Gia: ";
	getline(cin,tqg);
	cout<<"Tong Thu Nhap: ";
	cin>>tnt;
	cout<<"loai";
	cin>>loai;
	switch(loai)
	{
		case 1: phi=tnt*0.01;
		case 2: phi=tnt*0.007;
		case 3: phi=tnt*0.005;
		case 4: phi=tnt*0.0001;
		case 5: phi=1000000;
	}
	cout<<"So tien quoc gia phai nop la:"<<phi;
}

