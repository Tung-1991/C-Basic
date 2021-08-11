#include <iostream>
#include <cmath>

using namespace std;

const int LCB=650000;

int main()

{
	double luong,heso;
	int tnct;
	cout<<"So nam cong tac: ";
	cin>>tnct;
	if(tnct<12)
       heso=1.92;
    else if (tnct<36)
       heso=2.34;
    else if (tnct<60)
       heso=3;
    else
       heso=4.5;
    luong=heso*LCB;
    cout<<"so luong cua nhan vien la: "<<luong;
}

