#include"Hang_hoa.h"
using namespace std;

Hang_hoa::Hang_hoa(){
}

Hang_hoa::~Hang_hoa(){
}

void Hang_hoa::SetNgay_nhapkho(string Ngay_nhapkho){
	this->Ngay_nhapkho = Ngay_nhapkho;
}

string Hang_hoa::GetNgay_nhapkho(){
	return Ngay_nhapkho;
}

void Hang_hoa::SetMahang(string Mahang){
	this->Mahang = Mahang;
}

string Hang_hoa::GetMahang(){
	return Mahang;
}

void Hang_hoa::SetKho(string Kho){
	this->Kho = Kho;
}

string Hang_hoa::GetKho(){
	return Kho;
}

void Hang_hoa::SetGhichu(string Ghichu){
	this->Ghichu = Ghichu;
}

string Hang_hoa::GetGhichu(){
	return Ghichu;
}

void Hang_hoa::SetDonGia(double DonGia){
	this->DonGia = DonGia;
}

double Hang_hoa::GetDonGia(){
	return DonGia;
}

void Hang_hoa::SetThue(double Thue){
	this->Thue = Thue;
}

double Hang_hoa::GetThue(){
	return Thue;
}

void Hang_hoa::SetSoluong(int Soluong){
	this->Soluong = Soluong;
}

int Hang_hoa::GetSoluong(){
	return Soluong;
}

void Hang_hoa::Nhap()
{	
	cout<<"Nhap ngay nhap kho cua mat hang: "<<endl;
	string NNK;
	cin.ignore();
	getline(cin,NNK);
	SetNgay_nhapkho(NNK);
	
	cout<<"Nhap Ma hang hoa: "<<endl;
	string MHH;
	getline(cin,MHH);
	SetMahang(MHH);
	
	cout<<"Nhap ten kho: "<<endl;
	string K;
	getline(cin,K);
	SetKho(K);
	
	cout<<"Nhap so luong hang hoa: "<<endl;
	int SL;
	cin>>SL;
	SetSoluong(SL);
	
	cout<<"Nhap don gia: "<<endl;
	double DG;
	cin>>DG;
	SetDonGia(DG);
	
	cout<<"Nhap thue hang hoa: "<<endl;
	double T;
	cin>>T;
	SetThue(T);
	
	cout<<"Nhap ghi chu: "<<endl;
	string GC;
	cin.ignore();
	getline(cin,GC);
	SetGhichu(GC);
}

void Hang_hoa::Xuat()
{
	cout<<"--------------------"<<" Kho "<<GetKho()<<" ----------------"<<endl;
	cout<<endl;	
	cout<<" Ngay nhap hang:   "<<GetNgay_nhapkho()<<endl;
	cout<<endl;
	cout<<" Ma hang hoa :     "<<GetMahang()<<endl;
	cout<<endl;
	cout<<" So luong :     "<<GetMahang()<<endl;
	cout<<endl;
	cout<<" Don gia:          "<<GetDonGia()<<endl;
	cout<<endl;
	cout<<" Thue:             "<<GetThue()<<endl;
	cout<<endl;
	cout<<" Ghichu:           "<<GetGhichu()<<endl;
}

double Hang_hoa::Thanhtien(){
	return 0;
}

void Hang_hoa::xuatfile(){
}
void Hang_hoa::xuatfile_G(){
}
void Hang_hoa::xuatfile_A(){
}

