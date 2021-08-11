#include <iostream>

using namespace std;

int main()

{
	int a[100],n;
	cout<<"nhap so phan tu cua day (<100) =";cin>>n;
	for(int i=0; i<n;i++)
	{
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
	int max=a[0];
	for(int i=1; i<n; i++)
	if(max< a[i])
		max = a[i];
	cout<<"gia tri lon nhat cua day la:"<<max;
}
