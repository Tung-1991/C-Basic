#include <iostream>

using namespace std;

int main()

{
	int a,b;
	cout<<"nhap ngay: ";cin>>a;
	cout<<"nhap thang: ";cin>>b;
	if ((1<=a<=31) | (1<=b<=12)){
		cout<<"ngay "<<a<<" thang "<<b;
		cout<<"\nngay thang hop le";
	}
	else 
		cout<<"ngay thang khong hop le";
}

