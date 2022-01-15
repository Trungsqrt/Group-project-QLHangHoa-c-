#include "Hang_hoa.h"

class Ao : public Hang_hoa{
	private:
		string LoaiAo;
		string MauMa;
		string Hang;
		string Gioi_tinh;
		string Chatlieu;
		string Kieudang;		
		double Kichthuoc;	

	public:	
		Ao();
		~Ao();
		
		void SetLoaiAo(string LoaiAo);
		string GetLoaiAo();
		
		void SetMauMa(string MauMa);
		string GetMauMa();
		
		void SetHang(string Hang);
		string GetHang();
		
		void SetGioi_tinh(string Gioi_tinh);
		string GetGioi_tinh();
		
		void SetChatlieu(string Chatlieu);
		string GetChatlieu();
		
		void SetKieudang(string Kieudang);
		string GetKieudang();
		
		void SetKichthuoc(double Kichthuoc);
		double GetKichthuoc();
		
		void Nhap();
		void Xuat();
		void xuatfile();
		void xuatfile_A();
		double Thanhtien();
		double Thanhtien_khongthue();
};

