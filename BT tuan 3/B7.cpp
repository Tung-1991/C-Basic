#include <iostream>

using namespace std;

int main()

{
	char d;
	cout<<"Nhap vao diem cua ban: ";
	cin>>d;
	switch(d)
	{
		case 'A': cout<<"loai gioi";break;
		case 'B': cout<<"loai kha";break;
		case 'C': cout<<"loai trung binh";break;
		case 'D': cout<<"loai trung binh yeu";break;
		case 'F': cout<<"loai yeu";break;
	}
}

