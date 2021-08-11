#include <iostream>
#include <string>

using namespace std;

void gt(double x)
{
	cout<<"Truong dai hoc Thuy Loi";
	cout<<"\nKhoa cong nghe thong tin";
	cout<<"\n===========================";
}
void gt1(string t, string l)
{
	cout<<"\nXin Chao Ban";
	cout<<"\n"<<t;
	cout<<"\nlop "<<l<<endl;
}
int main()
{
	double x=0;
	string t,l;
	getline(cin,t);
	getline(cin,l);
	gt(x);
	gt1(t,l);
}

