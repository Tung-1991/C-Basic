#include <iostream>

using namespace std;

int main()

{
	int n, a[100];
	cout<<"nhap so phan tu cua day n=";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"Day so vua nhap"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}

