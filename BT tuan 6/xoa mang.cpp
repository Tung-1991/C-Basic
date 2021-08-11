#include <iostream>

using namespace std;

int main()

{
	double a[100];
	int n,k;
	cout<<"nhap N: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"nhap a["<<i<<"]= ";cin>>a[i];
		
	}
	cout<<"nhap gia tri can xoa khoi mang: ";cin>>k;
	cout<<"gia tri phan tu tai vi tri K: "<<a[k-1]<<endl;
	cout<<"mang sau khi xoa la ";
	for (int i=k-1;i<n;i++)
		a[i]=a[i+1];
	for (int i=0;i<n-1;i++)
		cout<<a[i]<<" ";
}

