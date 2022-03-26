#include <iostream>
using namespace std;
//Bai vong lap for

int tich(int a)
{
	int s=1;
	for (int i = 1; i <= a; i++)
	s=s * 2 * i;
	cout<<"Tich la: "<<s<<endl;
}
int cao(int a)
{
	for (int i = 1; i <= a ; i++){
		for (int j = 1 ; j <= i; j++)
		cout<<"* ";
		cout<<"\n";
	}
}

int main()
{
	int a, b;
	cout<<"Bai 1: P = 2 * 4 * 6 * 2n "<<endl;
	cout<<"Bai 2: Tam giac co chieu cao n "<<endl;
	do{
	cout<<"Nhap vao so trong bai "<<endl;
	cin>>a;
	switch (a)
	{
	case 1:
		{
		cout<<"Nhap so n ";
		cin>>b;
		tich(b);
	}
	
	case 2:
		{
			cout<<"Nhap so n ";
			cin>>b;
			cao(b);
		}
	break;
	 case 3:
	 	break;
	default: cout<<"Nhap sai lua chon\n";
	}
}while (a!=3);

 return 0;
}
