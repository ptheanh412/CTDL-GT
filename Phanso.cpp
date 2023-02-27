# include <iostream>
using namespace std;

struct Phanso {
	int tuSo;
	int mauSO;
};
void nhapPhanso(Phanso &ps){
	cout<<"Nhap tu so:";
	cin >> ps.tuSo;
	cout << "Nhap mau so: ";
	do {
		
		cin >> ps.mauSO;
		if (ps.mauSO == 0){
			cout << "Nhap lai: ";
		}
	}while (ps.mauSO == 0);
	

}
void xuatPhanso (Phanso &ps){
	cout << "Phan so vua nhap la:" << ps.tuSo<<"/"<<ps.mauSO<< endl;

}
int main(){
	Phanso ps;
	nhapPhanso(ps);
	xuatPhanso(ps);

}
