#include<iostream>
#include <fstream>
using namespace std;

class Hang_hoa
{
	private:
		string Ngay_nhapkho; 
		string Mahang;
		string Kho; 
		string Ghichu;
		double DonGia, Thue;
		int Soluong;
	public:	
		Hang_hoa();
		~Hang_hoa();
				
		void SetNgay_nhapkho(string Ngay_nhapkho);
		string GetNgay_nhapkho();
		
		void SetMahang(string Mahang);
		string GetMahang();
		
		void SetKho(string Kho);
		string GetKho();
		
		void SetGhichu(string Ghichu);
		string GetGhichu();
				
		void SetDonGia(double DonGia);
		double GetDonGia();
		
		void SetThue(double Thue);
		double GetThue();
	
		void SetSoluong(int Soluong);
		int GetSoluong();
	
		virtual void Nhap();
		virtual void Xuat();
		virtual double Thanhtien();
		virtual	void xuatfile();
		virtual	void xuatfile_G();
		virtual	void xuatfile_A();		
};


