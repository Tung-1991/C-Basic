#include <iostream>

using namespace std;

void nhap(double b[],double n){
	for(int i=0;i<n;i++)
	{
		cout<<"nhap b["<<i<<"]= ";cin>>b[i];
	}
}
void nhapX(double b[],double n) {
	double d=0,x;
	cout<<"nhap vao so thuc X: ";cin>>x;
	for(int i=0;i<n;i++){
		if (b[i]>=x)
		d++;
	}
	cout<<"so phan tu lon hon hoac bang X la: "<<d;
}
void nhapK(double b[],int n){
	int k;
	do{
		cout<<"\nnhap K: ";cin>>k;
 	}
	while ((k<1) | (k>n));
	cout<<"gia tri phan tu tai vi tri K: "<<b[k-1]<<endl;
	cout<<"xoa phan tu tai vi tri: "<<k<<" khoi day b co gia tri: "<<b[k-1]<<endl;
	cout<<"so mang sau khi xoa la ";
	for (int i=k-1;i<n;i++)
		b[i]=b[i+1];
	for (int i=0;i<n-1;i++)
		cout<<b[i]<<" ";
	}
int main()
{
	double b[100];
	int n;
	do{
		cout<<"nhap N: ";cin>>n;
 	}
	while ((n>=100) | (n<=0));
	nhap(b,n);
	nhapX(b,n);
	nhapK(b,n);
}

