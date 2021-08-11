#include <iostream>

using namespace std;

int main()

{
	int a[100],n,temp;
	cout<<"Nhap so phan tu cua day: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]= ";cin>>a[i];
	}
	for(int i=0; i<n; i++)
		for(int j=i; j<n; j++)
		if(a[j]<a[i])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	cout<<"sau khi sap xep:"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}

