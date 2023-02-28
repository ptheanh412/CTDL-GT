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
		if (ps.mauSO == 0 || ps.tuSo <= ps.mauSO){
			cout << "Nhap lai: ";
		}
	}while (ps.mauSO == 0 || ps.tuSo <= ps.mauSO );	
}
int timHonso(Phanso &ps){;
	return ps.tuSo / ps.mauSO;
}
void xuatPhanso (Phanso &ps){
	int honSo = timHonso(ps);
	ps.tuSo = ps.tuSo % ps.mauSO;
	cout << "Hon so vua nhap la:" << honSo <<" " << ps.tuSo<<"/"<<ps.mauSO<< endl;

}
int main(){
	Phanso ps;
	nhapPhanso(ps);
	xuatPhanso(ps);
	timHonso(ps);

}
