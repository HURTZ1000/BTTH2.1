#include "DATE.h"
#include <iostream>
using namespace std;

int main() {
    int ngay, thang, nam;
	cout << "Nhap ngay, thang, nam: ";
    if (!(cin >> ngay >> thang >> nam)) return 0;

    Date cur_date(ngay, thang, nam);
    cur_date.nextDay();
    cur_date.display();

    return 0;
}