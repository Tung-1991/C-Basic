#include <iostream>

using namespace std;

int main()

{
	int m,n;
	cout<<"Nhap M: ";cin>>m;
	do
		{
			cout<<"Nhap N: ";cin>>n;
		}
	while (n<m);
		cout<<"Tang: ";
		for(int i = m; i<=n; i++)
			cout<<i<<" ";
		cout<<"\nGiam: ";
		for(int i = n; i>=m; i--)
			cout<<i<<" ";
}

