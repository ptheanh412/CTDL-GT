#include <iostream>
#include <string>
using namespace std;

struct THANHPHO {
    int maTP;
    string tenTP;
    float dienTich;
};

void nhapThanhPho(THANHPHO &tp) {
    cout << "Nhap ma th�nh pho?: ";
    cin >> tp.maTP;
    cin.ignore(); // d�ng d? x�a k� t? '\n'
    cout << "Nhap t�n th�nh pho: ";
    getline(cin, tp.tenTP);
    cout << "Nhap dien tich: ";
    cin >> tp.dienTich;
}

void xuatThanhPho(THANHPHO tp) {
    cout << "Ma thanh pho: " << tp.maTP << endl;
    cout << "Ten thanh pho: " << tp.tenTP << endl;
    cout << "Dien tich: " << tp.dienTich << endl;
}

int main() {
    THANHPHO tp;
    nhapThanhPho(tp);
    cout << "\nThong tin TP vua nhap:" << endl;
    xuatThanhPho(tp);
    return 0;
}
