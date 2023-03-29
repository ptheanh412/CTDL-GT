#include <iostream>
using namespace std;


void nhapMang(float a[], int n){
	for (int i = 0; i < n; i++){
		cout << "a[" << i<<"]= ";
		cin >> a[i];
	}
}
int kiemtra (float a[], int n, int dem = 0, int i =0){
	if (i>=n)
		return dem;
	if (a[i] > 0)
		 dem++;
	return kiemtra(a,n,dem, ++ i);
}
int main(){
	int n;
	do{
		cout << "Nhap so luong ptu: ";
		cin >> n;
		if (n<= 0)
			cout<<"Nhap lai!";
	}while (n <= 0);
	float a[n];
	nhapMang(a,n);
	cout<< "Co " << kiemtra(a,n) << " so thuc";
	
}
