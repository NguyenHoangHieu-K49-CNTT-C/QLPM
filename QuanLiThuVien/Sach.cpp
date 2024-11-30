#include "Sach.h"

Sach::Sach() {
    _strMaSach = "";
    _strTenSach = "";
    _strTenTacGia = "";
    _strNhaXuatBan = "";
    _iGiaSach = 0;
    _iNamPhatHanh = 0;
    _iSoTrang = 0;
    _strNgayNhapKho = "";
    _iTinhTrangSach = 0;
}

Sach::Sach(string masach, string tensach, string tacgia, string ngayxuatban, int giasach, int namphathanh,
    int sotrang, string ngaynhapkho, int tinhtrangsach) {
    _strMaSach = masach;
    _strTenSach = tensach;
    _strTenTacGia = tacgia;
    _strNhaXuatBan = ngayxuatban;
    _iGiaSach = giasach;
    _iNamPhatHanh = namphathanh;
    _iSoTrang = sotrang;
    _strNgayNhapKho = ngaynhapkho;
    _iTinhTrangSach = tinhtrangsach;
}

Sach::~Sach() {}
string Sach::getMaSach() { 
    return _strMaSach; 
}

string Sach::getTenSach() { 
    return _strTenSach; 
}
string Sach::getTenTacGia() { 
    return _strTenTacGia; 
}

string Sach::getNhaXuatBan() { 
    return _strNhaXuatBan;
}

int Sach::getGiaSach() { 
    return _iGiaSach;
}

int Sach::getNamPhatHanh() { 
    return _iNamPhatHanh;
}
int Sach::getSoTrang() {
    return _iSoTrang;
}
string Sach::getNgayNhapKho() { 
    return _strNgayNhapKho; 
}

int Sach::getTinhTrangSach() {
    return _iTinhTrangSach; 
}

void Sach::setMaSach(string masach) { 
    _strMaSach = masach;
}

void Sach::setTenSach(string tensach) { 
    _strTenSach = tensach; 
}

void Sach::setTenTacGia(string s) { 
    _strTenTacGia = s; 
}

void Sach::setNhaXuatBan(string nhaxuatban) { 
    _strNhaXuatBan = nhaxuatban;
}

void Sach::setGiaSach(int giasach) {
    _iGiaSach = giasach;
}

void Sach::setNamPhatHanh(int namphathanh) { 
    _iNamPhatHanh = namphathanh;
}

void Sach::setSoTrang(int sotrang) { 
    _iSoTrang = sotrang;
}

void Sach::setNgayNhapKho(string ngaynhapkho) {
    _strNgayNhapKho = ngaynhapkho; 
}

void Sach::setTinhTrangSach(int tinhtrangsach) { 
    _iTinhTrangSach = tinhtrangsach; 
}

void Sach::display() {
    cout << "| " << setw(8) << left << _strMaSach 
        << "| " << setw(16) << left << _strTenSach
        << "| " << setw(18) << left << _strTenTacGia
        << "| " << setw(17) << left << _strNhaXuatBan
        << "| " << setw(14) << left << _iGiaSach
        << "| " << setw(17) << left << _iNamPhatHanh
        << "| " << setw(9) << left << _iSoTrang
        << "| " << setw(17) << left << _strNgayNhapKho
        << "| " << setw(1) << left << ((_iTinhTrangSach == 0) ? "Chua duoc muon" : "Da duoc muon")
        << "" << ((_iTinhTrangSach == 0) ? setw(2) : setw(4)) << left << ""
        << "|" << endl;
}