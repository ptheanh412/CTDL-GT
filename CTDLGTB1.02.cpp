#include <iostream>
#include <math.h>
using namespace std;

int tinhGiaiThua(int n){
	if (n == 0 || n == 1)
		return 1;
	return n*tinhGiaiThua(n-1);
}
double tong(int x, int n, double s = 0){
	if (n == 0){
		return s;
	} else
		s += ((pow(x,n)) / tinhGiaiThua(n));
	return tong(x,n-1,s);	
}
int main(){
	int n;
	cout<<"n = ";
	cin >> n;
	int x;
	cout << "x = ";
	cin>> x;
	cout<<"Tong = " << tong(x,n) << endl;
}
