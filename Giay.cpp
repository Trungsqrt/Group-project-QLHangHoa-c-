#include"Giay.h"

Giay::Giay(){
}

Giay::~Giay(){
}

void Giay::SetLoaiGiay(string Loai_giay){
	this->Loai_giay=Loai_giay;
}

string Giay::GetLoaiGiay(){
	return Loai_giay;
}

void Giay::SetSize(double size){
	this->size=size;
}
double Giay::GetSize(){
	return size;
}

void Giay::SetThuongHieu(string thuong_hieu){
	this->thuong_hieu=thuong_hieu;
}

string Giay::GetThuongHieu(){
	return thuong_hieu;
}

void Giay::SetNhaSx(string nha_sx){
	this->nha_sx=nha_sx;
}

string Giay::GetNhaSx(){
	return nha_sx;
}

void Giay::SetLoaiHang(string Loai_hang){
	this->Loai_hang=Loai_hang;
}

string Giay::GetLoaiHang(){
	return Loai_hang;
}

void Giay::SetLoaiDe(string Loai_de){
	this->Loai_de=Loai_de;
}

string Giay::GetLoaiDe(){
	return Loai_de;
}
void Giay::SetColor(string color){
	this->color=color;
}

string Giay::GetColor(){
	return color;
}

void Giay::SetBaoHanh(string bao_hanh){
	this->bao_hanh=bao_hanh;
}

string Giay::GetBaoHanh(){
	return bao_hanh;
}

void Giay::Nhap(){
	Hang_hoa::Nhap();
	cout<<"---Nhap thong tin giay---"<<endl;
	
	cout<<"\nNhap loai giay: "<<endl;
	string LG;
	getline(cin,LG);
	SetLoaiGiay(LG);
	
	cout<<"Nhap size: "<<endl;
	double Size; 
	cin>>Size;
	SetSize(Size);
	
	cout<<"Nhap thuong hieu:  "<<endl;
	string TH;
	cin.ignore();
	getline(cin,TH);
	SetThuongHieu(TH);
	
	cout<<"Nhap nha sx: "<<endl;
	string sx;
	getline(cin,sx);
	SetNhaSx(sx);
	
	cout<<"Loai Hang: "<<endl;
	string LH;
	getline(cin,LH);
	SetLoaiHang(LH);
	
	cout<<"Loai de: "<<endl;
	string LD;
	getline(cin,LD);
	SetLoaiDe(LD);
	
	cout<<"Color: "<<endl;
	string cl;
	getline(cin,cl);
	SetColor(cl);
	
	cout<<"bao hanh: "<<endl;
	string BH;
	getline(cin,BH);
	SetBaoHanh(BH);
}
void Giay::Xuat(){
	Hang_hoa::Xuat();
	cout<<endl;
	cout<<" Hang:             "<<GetNhaSx()<<endl;	
	cout<<endl;
	cout<<" Loai giay:        "<<GetLoaiGiay()<<endl;
	cout<<endl;
	cout<<" So luong :     	  "<<GetSoluong()<<endl;
	cout<<endl;
	cout<<" Size:             "<<GetSize()<<endl;
	cout<<endl;
	cout<<" Thuong hieu :     "<<GetThuongHieu()<<endl;
	cout<<endl;
	cout<<" Nha san xuat:     "<<GetNhaSx()<<endl;
	cout<<endl;
	cout<<" Loai hang:        "<<GetLoaiHang()<<endl;
	cout<<endl;
	cout<<" Loai de:          "<<GetLoaiDe()<<endl;
	cout<<endl;
	cout<<" Color:            "<<GetColor()<<endl;
	cout<<endl;
	cout<<" Bao Hanh:         "<<GetBaoHanh()<<endl;
	cout<<endl;
	cout<<" Tien cua mat hang nay (khongthue) : "<<Giay::Thanhtien_khongthue()<<endl;
	cout<<" Tien cua mat hang nay (thue) : "<<Giay::Thanhtien()<<endl;
	cout<<endl;
}
double Giay::Thanhtien_khongthue(){
	return Hang_hoa::GetSoluong() * Hang_hoa::GetDonGia();
}

double Giay::Thanhtien(){
	return Hang_hoa::GetSoluong() * Hang_hoa::GetDonGia() + (Hang_hoa::GetThue()*0.1);
}

void Giay::xuatfile(){
	Hang_hoa::xuatfile();
			ofstream fo;
	fo.open("D:\\Xuatfiledonhang.txt",ios::app);
	if(fo.is_open()){
			fo<<"**Giay:\n Loai giay:"<<GetLoaiGiay()
	
			<<"\n Size:"<<GetSize()
	
			<<"\n Thuong hieu : "<<GetThuongHieu()

			<<"\n Nha san xuat:"<<GetNhaSx()
			
			<<"\n So luong:"<<GetSoluong()

			<<"\n Loai hang:"<<GetLoaiHang()

			<<"\n Loai de:  "<<GetLoaiDe()
	
			<<"\n Color:"<<GetColor()
	
			<<"\n Bao Hanh:"<<GetBaoHanh()

			<<"\n Tien cua mat hang nay (khongthue) : "<<Giay::Thanhtien_khongthue()
			
			<<"\n Tien cua mat hang nay (thue) : "<<Giay::Thanhtien()<<"\n";
	fo.close();
	}
	else
		cout<<"file not found"<<endl;
}

void Giay::xuatfile_G(){
        Hang_hoa::xuatfile_G();
			ofstream fo;
	fo.open("D:\\XuatfiledonhangG.txt",ios::app);
	if(fo.is_open()){
			fo<<"**Giay:\n Loai giay:"<<GetLoaiGiay()
	
			<<"\n Size:"<<GetSize()
	
			<<"\n Thuong hieu : "<<GetThuongHieu()

			<<"\n Nha san xuat:"<<GetNhaSx()

			<<"\n Loai hang:"<<GetLoaiHang()

			<<"\n Loai de:  "<<GetLoaiDe()
	
			<<"\n Color:"<<GetColor()
	
			<<"\n Bao Hanh:"<<GetBaoHanh()

			<<"\n Tien cua mat hang nay (khongthue) : "<<Giay::Thanhtien_khongthue()
			
			<<"\n Tien cua mat hang nay (thue) : "<<Giay::Thanhtien()<<"\n";
	fo.close();
	}
	else
		cout<<"file not found"<<endl;
}


