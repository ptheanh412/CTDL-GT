#include <iostream>
using namespace std;

struct Donthuc {
	int heSo;
	int soMu;
};

void nhap(Donthuc &a){
	cout <<"Nhap he so: ";
	cin >> a.heSo;
	cout <<"Nhap so mu: ";
	cin >> a.soMu;
}
void xuat(Donthuc &a){
	cout << "Don thuc vua nhap la:" << a.heSo << "x^" << a.soMu<< endl;
}
int main(){
	Donthuc a;
	nhap(a);  
	xuat(a);
}


