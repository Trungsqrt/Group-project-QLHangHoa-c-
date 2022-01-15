#include "Ao.h"

Ao::Ao(){
}

Ao::~Ao(){
}

void Ao::SetLoaiAo(string LoaiAo){
	this->LoaiAo = LoaiAo;
}

string Ao::GetLoaiAo(){
	return LoaiAo;
}

void Ao::SetMauMa(string MauMa){
	this->MauMa = MauMa;
}

string Ao::GetMauMa(){
	return MauMa;
}

void Ao::SetHang(string Hang){
	this->Hang = Hang;
}

string Ao::GetHang(){
	return Hang;
}

void Ao::SetGioi_tinh(string Gioi_tinh){
	this->Gioi_tinh = Gioi_tinh;
}

string Ao::GetGioi_tinh(){
	return Gioi_tinh;
}

void Ao::SetChatlieu(string Chatlieu){
	this->Chatlieu = Chatlieu;
}

string Ao::GetChatlieu(){
	return Chatlieu;
}

void Ao::SetKichthuoc(double Kichthuoc){
	this->Kichthuoc = Kichthuoc;
}

double Ao::GetKichthuoc(){
	return Kichthuoc;
}

void Ao::SetKieudang(string Kieudang){
	this->Kieudang = Kieudang;
}

string Ao::GetKieudang(){
	return Kieudang;
}

void Ao::Nhap(){
	Hang_hoa::Nhap();
	cout<<"---Nhap thong tin ao---"<<endl;
	
	cout<<"\nNhap loai ao: "<<endl;
	string LA;
	getline(cin,LA);
	SetLoaiAo(LA);
	
	cout<<"Nhap kich thuoc ao: "<<endl;
	double KT;
	cin>>KT;
	SetKichthuoc(KT);
	
	cout<<"Nhap mau ma ao: "<<endl;
	string mm;
	cin.ignore();
	getline(cin,mm);
	SetMauMa(mm);
	
	cout<<"Nhap hang ao: "<<endl;
	string ha;
	getline(cin,ha);
	SetHang(ha);
	
	cout<<"Quan ao cho Nam/Nu?: "<<endl;
	string gt;
	getline(cin,gt);
	SetGioi_tinh(gt);
	
	cout<<"Chat lieu ao: "<<endl;
	string cl;
	getline(cin,cl);
	SetChatlieu(cl);
	
	cout<<"Kieu dang ao: "<<endl;
	string kd;
	getline(cin,kd);
	SetKieudang(kd);
}

void Ao::Xuat(){
	Hang_hoa::Xuat();
	cout<<endl;
	cout<<" Hang:             "<<GetHang()<<endl;	
	cout<<endl;
	cout<<" So luong :     	  "<<GetSoluong()<<endl;
	cout<<endl;
	cout<<" Loai ao:          "<<GetLoaiAo()<<endl;
	cout<<endl;
	cout<<" Kichthuoc:        "<<GetKichthuoc()<<endl;
	cout<<endl;
	cout<<" MauMa :           "<<GetMauMa()<<endl;
	cout<<endl;
	cout<<" Chatlieu:         "<<GetChatlieu()<<endl;
	cout<<endl;
	cout<<" Gioi_tinh:        "<<GetGioi_tinh()<<endl;
	cout<<endl;
	cout<<" Kieudang:         "<<GetKieudang()<<endl;
	cout<<endl;
	cout<<" Tien cua mat hang nay (khongthue) : "<<Ao::Thanhtien_khongthue();
	cout<<endl;
	cout<<" Tieng cua mat hang nay (thue) : "<<Ao::Thanhtien();
	cout<<endl;
	
}

double Ao::Thanhtien_khongthue(){
	return Ao::GetSoluong() * Hang_hoa::GetDonGia();
}
double Ao::Thanhtien(){
	return Hang_hoa::GetSoluong() *  Hang_hoa::GetDonGia() + (Hang_hoa::GetThue()*0.2);
}

void Ao::xuatfile(){
	Hang_hoa::xuatfile();
		ofstream fo;
	fo.open("D:\\Xuatfiledonhang.txt",ios::app);
	if(fo.is_open()){
			fo<<"**Ao:\n Hang:"<<GetHang()<<"\n Loai ao:"<<GetLoaiAo()<<
			"\n Kichthuoc:"<<GetKichthuoc()<<
			"\n MauMa :"<<GetMauMa()<<

			"\n Chatlieu:"<<GetChatlieu()<<

			"\n Gioi_tinh:"<<GetGioi_tinh()<<
			
			"\n So luong:"<<GetSoluong()<<
	
			"\n Kieudang:"<<GetKieudang()<<

			"\n Tien cua mat hang nay (khongthue) : "<<Ao::Thanhtien_khongthue()

			<<"\n Tieng cua mat hang nay (thue) : "<<Ao::Thanhtien()<<"\n";
	fo.close();
	}
	else
		cout<<"file not found"<<endl;
}

void Ao::xuatfile_A()
{
	Hang_hoa::xuatfile_A();
		ofstream fo;
	fo.open("D:\\XuatfiledonhangA.txt",ios::app);
	if(fo.is_open()){
			fo<<"**Ao:\n Hang:"<<GetHang()<<"\n Loai ao:"<<GetLoaiAo()<<
			"\n Kichthuoc:"<<GetKichthuoc()<<
			"\n MauMa :"<<GetMauMa()<<

			"\n Chatlieu:"<<GetChatlieu()<<

			"\n Gioi_tinh:"<<GetGioi_tinh()<<
	
			"\n Kieudang:"<<GetKieudang()<<

			"\n Tien cua mat hang nay (khongthue) : "<<Ao::Thanhtien_khongthue()

			<<"\n Tieng cua mat hang nay (thue) : "<<Ao::Thanhtien()<<"\n";
	fo.close();
	}
	else
		cout<<"file not found"<<endl;
}

