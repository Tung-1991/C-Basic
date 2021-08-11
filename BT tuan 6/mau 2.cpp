#include <iostream>

using namespace std;

void chiahetcho3(int a[], int n)
{
	int d=0;
	for(int i=0;i<n;i++)
	if(a[i]%3==0)
	d++;
	cout<<"so chia het cho 3 la: "<<d;
}
void lonhon10(int a[], int n)
{
	int d=0;
	for(int i=0;i<n;i++)
	if(a[i]>10)
	d++;
	cout<<"so lon hon 10 la: "<<d;
}
int main()

{
	int n, a[100],d=0;
	cout<<"nhap so phan tu cua day n=";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	chiahetcho3(a,n);
	cout<<endl;
	lonhon10(a,n);
}
