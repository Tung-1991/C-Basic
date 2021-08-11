#include <iostream>

using namespace std;

int main()

{
	int m,n,s=0;
	cout<<"Nhap M: ";cin>>m;
	do
		{
			cout<<"Nhap N: ";cin>>n;
		}
	while (n<m);
		for(int i = m; i<=n; i++)
		s=s+i;
		cout<<"Tong tu M den N la: "<<s;
}
