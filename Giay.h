#include"Ao.h"

class Giay : public Hang_hoa{
	private:
		string Loai_giay;
		double size;
		string thuong_hieu;
		string nha_sx; 
		string Loai_hang; 
		string Loai_de; 
		string color; 
		string bao_hanh;
	public:
		Giay();
		~Giay();
		
		void SetLoaiGiay(string Loai_giay);
		string GetLoaiGiay();
		
		void SetSize(double size);
		double GetSize();
		
		void SetThuongHieu(string thuong_hieu);
		string GetThuongHieu();
			
		void SetNhaSx(string nha_sx);
		string GetNhaSx();
			
		void SetLoaiHang(string Loai_hang);
		string GetLoaiHang();
			
		void SetLoaiDe(string Loai_de);
		string GetLoaiDe();
			
		void SetColor(string color);
		string GetColor();
			
		void SetBaoHanh(string bao_hanh);
		string GetBaoHanh();
			
		void Nhap();
		void Xuat();
		void xuatfile();
		void xuatfile_G();
		double Thanhtien();
		double Thanhtien_khongthue();
};



