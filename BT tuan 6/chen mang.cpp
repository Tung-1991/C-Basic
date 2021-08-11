#include <iostream>

using namespace std;

int main()

{
	double a[100];
	int n,m,v;
	cout<<"nhap N: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"nhap a["<<i<<"]= ";cin>>a[i];
		
	}
	cout<<"nhap gia tri muon chen: ";cin>>m;
	cout<<"vi tri muon chen: ";cin>>v;
	for (int i=n;i>v;i--){
		a[i]=a[i-1];
		a[i-1]=m;
	}	
	cout<<"\n day sau khi chen ";
	for (int i=0;i<n+1;i++)
		cout<<a[i]<<" ";
}
