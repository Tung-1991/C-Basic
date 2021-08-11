#include <iostream>

using namespace std;

int main()

{
	int n,s=1;
	cout<<"Nhap N!: ";cin>>n;
	for(int i=1;i<=n;i=i+2)
	s=s*i;
	cout<<"giai thua: "<<s;
}

