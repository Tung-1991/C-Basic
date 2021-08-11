#include <iostream>

using namespace std;

int main()

{
	int n,s=0,d=0;
	double e;
	do
		{
			cout<<"Nhap So: ";cin>>n;
			if(n>0)
			{
				s=s+n;
				d++;
				e=s/d;
			}
		}
	while (n !=0 );
		cout<<"tong: "<<s<<"\ntbc la: "<<e;
}

