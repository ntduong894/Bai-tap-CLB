#include <iostream>
using namespace std;
//Bai if else
int day(int a)
{
	if (a == 1)
	{
		cout << "Monday" << endl;
	}
	else if (a == 2)
	{
		cout << "Tuesday" << endl;
	}
	else if (a == 3)
	{
		cout << "Wednesday" << endl;
	}else if (a == 4)
	{
		cout << "Thursday" << endl;
	}else if (a == 5)
	{
		cout << "Friday" << endl;
	}else if (a == 6)
	{
		cout << "Saturday" << endl;
	}else if (a == 7)
	{
		cout << "Sunday" <<endl;
	}
	else 
		cout << "So khong hop le " << endl;
}
int money(int a)
{
	if(0 < a < 100)
		{
			cout << "Don gia la: "<< a * 2000 <<" Dong"<<endl;
		}
	else if(101 < a < 200)
		{
			cout << "Don gia la: "<< a * 2500 <<" Dong"<<endl;
		}
	else if(a > 300)
		{
			cout << "Don gia la: "<< a * 5000 <<" Dong"<<endl;
		}
}

int main()
{
	int a, b;
	
	cout<<"Bai 1: Nhap so ngay trong tuan "<<endl;
	cout<<"Bai 2: Nhap tien dien"<<endl;
do{

	cout<<"Nhap vao so trong bai "<<endl;
	cin>>a;
	switch (a)
	{
	case 1:
		{
		cout<<"Nhap so ngay: ";
		cin>>b;
		day(b);
	}
	case 2:
		{
			cout<<"Nhap so dien tieu thu "<<endl;
			cin>>b;
			money(b);
		}
	break;
	 case 3:
	 	break;
	default: cout<<"Nhap sai lua chon\n";
	}
}while (a!=3);

 return 0;
}



