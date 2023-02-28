#include <iostream>
#include <string>
using namespace std;

struct THANHPHO {
    int maTP;
    string tenTP;
    float dienTich;
};

void nhapThanhPho(THANHPHO &tp) {
    cout << "Nhap ma thành pho?: ";
    cin >> tp.maTP;
    cin.ignore(); // dùng d? xóa kí t? '\n'
    cout << "Nhap tên thành pho: ";
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
