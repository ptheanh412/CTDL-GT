#include <iostream>
using namespace std;

void nhapMang(int a [], int n){
	for ( int i =0; i <n; i ++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
int tongSoChan(int a[], int n, int i =0, int tong = 0){	
	if (i >= n)
		return tong;
	if (a[i] %2 ==0 )
		tong += a[i];
	return tongSoChan(a,n,i+1,tong);
}

int main(){
	int n;
	cout << "Nhap so luong ptu: ";
	cin >> n;
	int a[n];
	nhapMang(a,n);
	cout << tongSoChan(a,n);
}

