#include <iostream>

using namespace std;

void nhap(float a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap a["<<i<<"]= ";cin>>a[i];
	}
}
void in (float a[], int n)
{
	cout<<"mang co "<<n<<" phan tu:"<<endl;
	for (int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
}
void t(float a[], int n)
{
	double d=0,s=0;
	for (int i=0;i<n;i++)
	{
		d++;
		s=s+a[i];
	}
	cout<<"tong= "<<s;
	cout<<"\nTBC= "<<s/d;
}
int main()
{
	int n;
	float a[100];
	cout<<"nhap so phan tu cua day: ";cin>>n;
	nhap(a,n);
	in(a,n);
	t(a,n);
}

