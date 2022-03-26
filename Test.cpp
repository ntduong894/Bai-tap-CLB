#include <iostream>
using namespace std;

class HangHoa
{
	private:
		char Mahang [8];
		char Tenhang [30];
		int sl;
		float dg, thanhtien;
	public:
		void nhap()
		{
			cout<<"\nNhap ma hang: ";
			cin.getline(Mahang, 8);
			
			cout<<"\nNhap ten hang: ";
			cin.getline(Tenhang, 8);
			cout<<"\nNhap so luong: ";
			cin>>sl;
			cout<<"\nNhap don gia: ";
			cin>>dg;
		}
	void tinhTien()
	{
		thanhtien = sl * dg;
	}
	void xuatTT()
	{
		cout<<"Ma hang: "<< Mahang
			<<"Ten hang: "<< Tenhang
			<<"So luong: "<< sl
			<<"Don gia: "<< dg
			<<"Thanh tien: "<< thanhtien;
	}

};

int main()
{
	int n;
	cout << "Nhap so luong hang hoa: ";
	cin >> n;
	HangHoa a[n];
	 
	for(int i=0; i < n; i++)
	{
		a[i].nhap();
	}
	return 0;
}
