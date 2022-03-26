#include <iostream>
using namespace std;

class KhachHang{
	private:
		char HoTen[30];
		int ngay;
		int thang;
		int nam;
		char cmt[10];
		char HoKhau[50];
	public: 
		void nhap()
		{
			cout<<"\nNhap Ho va ten: ";
			cin.getline(HoTen, 30);
			cout<<"\nNhap ngay sinh: ";
			cin>>ngay;
			cout<<"\nNhap thang sinh: ";
			cin>>thang;
			cout<<"\nNhap nam sinh: ";
			cin>>nam;
			fflush(stdin);
			cout<<"\nNhap chung minh thu: ";
			cin.getline(cmt, 10);
			cout<<"\nNhap ho khau: ";
			cin.getline(HoKhau, 50);
			fflush(stdin);
		}
		void xuatTT()
		{
			cout<<"Ho va ten: "<<HoTen<<endl;
			cout<<"Ngay sinh thang nam sinh: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
			cout<<"Chung minh thu : "<<cmt<<endl;
			cout<<"Ho khau: "<<HoKhau<<endl;
		}
		void in()
		{
			cout<<"\nKhach hang sinh thang 12 la: "<<endl;
			if(thang = 50)
			{
				xuatTT();
			}
		}	
};
int main()
{
	int n;
	cout<<"Nhap so luong khach hang: ";
	cin>>n;
	KhachHang a[n];
	fflush(stdin);
	cout<<"\nNhap thong tin khach hang: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nKhach hang thu "<<i+1<<endl;
		a[i].nhap();
	}
	
	cout<<"\nXuat thong tin khach hang: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nKhach hang thu "<<i+1<<endl;
		a[i].in();
	}
	return 0;
}
