#include "Hang_hoaList.h"

Hang_hoaList::Hang_hoaList(){
}

Hang_hoaList::~Hang_hoaList(){
}

void Hang_hoaList::Nhaplist(){
	int chon;
	
	Hang_hoa *a = new Hang_hoa;
	do{
		cout<<"---------------Nhapthongtin----------------"<<endl;
		cout<<"           1.Nhap thong tin Ao            "<<endl;
		cout<<"                                          "<<endl;
		cout<<"           2.Nhap thong tin Giay          "<<endl;
		cout<<"                                          "<<endl;
		cout<<"                 3.Thoat					 "<<endl;
		cout<<endl; 
		cin>>chon;
		system("CLS");
		  	       	
		if(chon == 1){
			a = new Ao;
		}
			
		else if(chon == 2){
			a = new Giay;
		}
		
		else if(chon == 3)
			return;
		
		a->Nhap();
		list.push_back(a);
			
	}while( chon != 1 && chon != 2 );
	

}

void Hang_hoaList::Xuatlist(){
	int pos = list.size();
	for(int i=0; i<pos; i++){
		list[i]->Xuat();
	}
}

void Hang_hoaList::Sapxepdonhang_Tangdantien(){
	int pos = list.size();
	for(int i=0; i<pos; i++){
		for(int j=0; j<pos-i-1; j++){
			if(list[j]->Thanhtien() > list[j+1]->Thanhtien()){
				Hang_hoa *temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp; 
			}
		}
	}
}

void Hang_hoaList::Sapxepdonhang_Giamdantien(){
	int pos = list.size();
	for(int i=0; i<pos; i++){
		for(int j=0; j<pos-i-1; j++){
			if(list[j]->Thanhtien() < list[j+1]->Thanhtien()){
				Hang_hoa *temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp; 
			}
		}
	}
}

void Hang_hoaList::Xuatdonhang_ittiennhat(){
	system("CLS");
	int pos = list.size();
	int index = 0;
	int min = list[0]->Thanhtien();
	for(int i=0; i<pos; i++){
		if(min > list[i]->Thanhtien()){
			min = list[i]->Thanhtien();
			index = i;
		}
	}
	cout<<"Don hang co so tien it nhat: "<<endl;
	list[index]->Xuat();
}

void Hang_hoaList::Xuatdonhang_nhieutiennhat(){
	system("CLS");
	int pos = list.size();
	int index = 0;
	int max = list[0]->Thanhtien();
	for(int i=0; i<pos; i++){
		if(max < list[i]->Thanhtien()){
			max = list[i]->Thanhtien();
			index = i;
		}
	}
	cout<<"Don hang co so tien lon nhat: "<<endl;
	list[index]->Xuat();
}

void Hang_hoaList::Tongsoluonghang(){
	system("CLS");
	int s=0;
	for(int i=0;i<list.size();i++)
		s=s+list[i]->GetSoluong();
	cout<<"Tong so luong hang hoa: "<<s;
} 

void Hang_hoaList::Timkiemhang(){
	system("CLS");
	string t;
	cout<<"nhap ma hang can tim: ";
	cin>>t;
	system("CLS");
	for(int i=0;i<list.size();i++)
		if(t==list[i]->GetMahang())
			list[i]->Xuat();
}

void Hang_hoaList::Xoadonhang(){
	system("CLS");
	string t;
	cout<<"nhap ma hang can xoa: ";
	cin>>t;
	for(int i=0;i<list.size();i++)
			if(t==list[i]->GetMahang())
			list.erase(list.begin()+i);	
	Xuatlist();
}

void Hang_hoaList::Xuatfiledonhang(){
			ofstream fo;
	fo.open("D:\\Xuatfiledonhang.txt",ios::trunc);
	for(int i=0;i<list.size();i++){
			list[i]->xuatfile();
		}

	}
	void Hang_hoaList::XuatfiledonhangAo(){
				ofstream fo;
	fo.open("D:\\XuatfiledonhangA.txt",ios::trunc);
	for(int i=0;i<list.size();i++){
			list[i]->xuatfile_A();
		}

	}
		void Hang_hoaList::XuatfiledonhangGiay(){
				ofstream fo;
	fo.open("D:\\XuatfiledonhangG.txt",ios::trunc);
	for(int i=0;i<list.size();i++){
			list[i]->xuatfile_G();
		}

	}
