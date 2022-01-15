#include <iostream>
#include "Hang_hoaList.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	Hang_hoaList a;
	char choose;
	do{
		int chon;
		
		do{
			
			cout<<" 		Menu "<<endl;
			cout<<endl;
			cout<<"1. 	Nhap thong tin hang hoa "<<endl;
			cout<<endl;
			cout<<"2. 	Xuat thong tin hang hoa "<<endl;
			cout<<endl;
			cout<<"3. 	Sap xep hang hoa theo tien tang dan "<<endl;
			cout<<endl;
			cout<<"4. 	Sap xep hang hoa theo tien giam dan "<<endl;
			cout<<endl;
			cout<<"5. 	Mat hang co so tien it nhat "<<endl;
			cout<<endl;
			cout<<"6. 	Mat hang co so tien nhieu nhat "<<endl;
			cout<<endl;
			cout<<"7. 	Tong so luong hang hoa "<<endl;
			cout<<endl;
			cout<<"8. 	Tim kiem hang hoa theo ma hang hoa "<<endl;
			cout<<endl;
			cout<<"9. 	Xoa don hang  "<<endl;
			cout<<endl;
			cout<<"10. 	Xuat file don hang  "<<endl;
			cout<<endl;
			cout<<"11. 	Xuat file don hang giay  "<<endl;
			cout<<endl;
			cout<<"12.	Xuat file don hang ao  "<<endl;
			cin>>chon;
			system("CLS");
			if(chon == 1){				
				a.Nhaplist();
				system ("CLS");
			}
			else if(chon == 2){
				a.Xuatlist();
			}
			else if(chon == 3){
				a.Sapxepdonhang_Tangdantien();
			}
			else if(chon == 4){
				a.Sapxepdonhang_Giamdantien();
			}
			else if(chon == 5){
				a.Xuatdonhang_ittiennhat();
			}
			else if(chon == 6){
				a.Xuatdonhang_nhieutiennhat();
			}
			else if(chon == 7){
				a.Tongsoluonghang();
			}
			else if(chon == 8){
				a.Timkiemhang();
			}
			else if(chon == 9){
				a.Xoadonhang();
			}
			else if(chon == 10){
				a.Xuatfiledonhang();
			}
			else if(chon == 11){
				a.XuatfiledonhangGiay();
			}
			else if(chon == 12){
				a.XuatfiledonhangAo();
			}
			else{
				cout<<"Ban nhap sai vui long nhap lai!"<<endl;
				system ("CLS");
			}
				
		}while(chon != 1 && chon != 2 && chon !=3 && chon !=4 && chon !=5 && chon !=6 && chon !=7 && chon !=8 && chon !=9 && chon !=10 && chon != 11 && chon !=12);
		
		for(;true;){
			cout<<"Ban co muon tiep tuc?  -Y- de tiep tuc -N- de dung chuong trinh"<<endl;
			cin>>choose;
			if(choose == 'Y' || choose == 'y' || choose =='N' || choose == 'n'){
				break;
			}
		}

		system ("CLS");
				
	}while(choose =='Y' || choose == 'y');
	return 0;
}
