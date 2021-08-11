#include <iostream>

using namespace std;

int main()

{
	int n;
	cin>> n;
	int i = n,j;
	while(i>0)
	{
		j = n;
		while(j>=0)
		{
			if(j%2==0)
			cout<< j <<"t ";
			j--;
		}
		i--;
		cout<<endl;
	}
}

