#include <iostream>
using namespace std;
void nhapMang(int a[],int n){
	for ( int i = 0; i<n;i++){
		cout <<"a[" << i <<"]=";
		cin >> a[i];
	}
}
void sapXep(int a[], int n){
	for ( int i = 0; i<n - 1;i++){
		for ( int j = 0 ; j<n-1-i;j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
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
