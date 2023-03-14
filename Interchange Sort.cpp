#include <iostream>
using namespace std;
void nhapMang(int a[],int n){
	for ( int i = 0; i<n;i++){
		cout <<"a[" << i <<"]=";
		cin >> a[i];
	}
}
void sapXep(int a[], int n){
	for ( int i = 0; i<n;i++){
		for ( int j = i+1 ; j<n;j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void xuatMang(int a[], int n){
	for ( int i = 0; i<n;i++){
		cout << a[i] << " ";
	}
}
int main(){
	int n;
	int a[10];
	cout << "Nhap so luong ptu: ";
	cin >> n;
	nhapMang(a,n);
	sapXep(a,n);
	xuatMang(a,n);
	return 0;
}
