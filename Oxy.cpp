# include <iostream>
using namespace std;
struct OXY{
	float x;
	float y;
	
};
void nhap(OXY &a){
	cout<<"Nhap truc hoanh: ";
	cin >> a.x;
	cout << "Nhap truc tung: ";
	cin >> a.y;
}
void xuat(OXY &a){
	cout << "Toa do vua nhap la: " << "(" << a.x << ";" << a.y << ")" << endl;
}
int main(){
	OXY a;
	nhap(a);
	xuat(a);
}
