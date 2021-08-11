#include<iostream>
#include<string>

using namespace std;

int main()
{
	string hoten, namsinh;
	cout<<"Nhap vao ten sinh vien:"; 
	getline(cin, hoten);
	cout<<"Nhap vao nam sinh:";
	cin>>namsinh;
	cout<<"Ten va nam sinh vua nhap la: "<<hoten<<" -"<<namsinh;
	return 0;
}
 


