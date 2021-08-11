#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	double a,b,c,d,x1,x2;
	cout<<"nhap a: ";cin>>a; 
	cout<<"nhap b: ";cin>>b; 
	cout<<"nhap c: ";cin>>c; 
	cout<<"phuong trinh co dang la "<<a<<"X*X+"<<b<<"X+"<<c<<"=0";
	if(a==0)
	{
		if(b==0)
			{
				if(c==0)
					cout<<"\nphuong trinh vo so nghiem";
				else
					cout<<"\nphuong trinh vo nghiem";
			}
		else
		{
			cout<<"\nphuong trinh co nghiem x: "<<-c/b;
		}
	}
	else
	{
		d=b*b-4*a*c;
		if(d<0)
			cout<<"\nPhuong trinh vo nghiem";
		else if(d==0)
			cout<<"\nphuong trinh co 1 nghiem kep x= "<<(-b/(2*a));
		else
		{
			x1=(-b+sqrt(d))/2*a;
			x2=(-b-sqrt(d))/2*a;
			cout<<"\nphuong trinh co 2 nghiem phan biet x1: "<<x1<<" , va x2: "<<x2;
		}
	}
}

