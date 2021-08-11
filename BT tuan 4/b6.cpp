#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	int n;
	do
	{
		cout<<"nhap so N: ";cin>>n;
		if(n<0)
			cout<<"Nhap lai"<<endl;
	}
	while (n<0);
	cout<<"cac so chinh phuong la: ";
	for(int i=1; i<=n; i++)
		if (int(sqrt(i))==sqrt(i))
			cout<< i<<" "; 
}

