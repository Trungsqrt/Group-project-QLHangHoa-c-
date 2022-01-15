#include "Giay.h"
#include <vector>
class Hang_hoaList{
	private:
	 	vector<Hang_hoa*> list;
	 	
	public:
		Hang_hoaList();
		~Hang_hoaList();
		void Nhaplist();
		void Xuatlist();
		double Thanhtien();
		void Tongsoluonghang();
		void Timkiemhang();
		void Xuatfiledonhang();
		void XuatfiledonhangGiay();
		void XuatfiledonhangAo();
		void Xoadonhang();
		void Sapxepdonhang_Tangdantien();
		void Sapxepdonhang_Giamdantien();
		void Xuatdonhang_nhieutiennhat();
		void Xuatdonhang_ittiennhat();
		
		
		
		
};
