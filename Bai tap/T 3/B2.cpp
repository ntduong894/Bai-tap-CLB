#include <iostream>
using namespace std;

class GiaoVien{
	private :
		char ht[30];
		int t;
		char bc[15];
		char cn[20];
		float bl;
	public:
		void nhap()
		{
			cout<<"Nhap vao ho va ten: ";
			cin.getline(ht, 30);
			cout<<"Nhap vao so tuoi: ";
			cin>>t;
			fflush(stdin);
			cout<<"Nhap vao bang cap: ";
			cin.getline(bc, 15);
			cout<<"Nhap vao chuyen nganh: ";
			cin.getline(cn ,20);
			cout<<"Nhap vao bac luong: ";
			cin>>bl;
			fflush(stdin);
		}
		void xuatTT()
		{
			cout<<"Ho va ten: "<<ht<<endl;
			cout<<"Tuoi: "<<t<<endl;
			cout<<"Bang cap: "<<bc<<endl;
			cout<<"Chuyen nganh: "<<cn<<endl;
			cout<<"Bac luong: "<<bl;
			cout<<"Luong co ban: "<<bl * 610;
		}
};
int main()
{
	int n;
	cout<<"Nhap so luong giao vien: ";
	cin>>n;
	GiaoVien a[n];
	fflush(stdin);
	cout<<"\nNhap thong tin giao vien: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nGiao vien thu "<<i+1<<endl;
		a[i].nhap();
	}
	
	cout<<"\nXuat thong tin giao vien: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nGiao vien thu "<<i+1<<endl;
		a[i].xuatTT();
	}
	return 0;
}
