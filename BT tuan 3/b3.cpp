#include <iostream>

using namespace std;

int main()

{
	double dtb;
	cout<<"Diem Trung Binh: ";
	cin>>dtb;
	if (dtb<4.5)
	  cout<<"loai yeu";
	else if (dtb<7)
	  cout<<"loai TB";
	else if (dtb<8.5)
	  cout<<"loai Kha";
	else if (dtb<10)
	  cout<<"loai gioi"; 
	else 
	  cout<<"khong ton tai";
}


