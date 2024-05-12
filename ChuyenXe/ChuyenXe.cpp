#include "ChuyenXe.h"

ChuyenXe::ChuyenXe()
{
	maSo = soXe = 0;
	doanhThu = 0.0;
	hoTenTaiXe = "";
}

ChuyenXe::ChuyenXe(int maSo, string hoTenTaiXe, int soXe, float doanhThu)
{
	this->maSo = maSo;
	this->hoTenTaiXe = hoTenTaiXe;
	this->soXe = soXe;
	this->doanhThu = doanhThu;
}

ChuyenXe::~ChuyenXe()
{

}

float ChuyenXe::tongdoanhthu() const
{
	return doanhThu;
}

void ChuyenXe::XuatThongTin() const
{
	cout << left << setw(20) << maSo;
	cout << left << setw(20) << hoTenTaiXe;
	cout << left << setw(20) << soXe;
	cout << left << setw(20) << fixed << setprecision(2) << doanhThu;
}