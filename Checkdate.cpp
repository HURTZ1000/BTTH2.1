#include <iostream>
#include "DATE.h"
using namespace std;

    // Hàm kiểm tra năm nhuận
bool Date::isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

    //Hàm lấy số ngày tối đa trong tháng
    int Date::daysInMonth(int m, int y) {
        switch (m) {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(y) ? 29 : 28;
        default:
            return 31;
        }
    }

    //Hàm tính ngày tiếp theo.
    void Date::nextDay() {
        int maxDays = daysInMonth(month, year);

        if (date < maxDays) {
            date++; // Ngày bình thường, tăng ngày lên 1.
        }
        else {
            date = 1; // Hết tháng, quay về ngày 1
            if (month == 12) {
                month = 1;
                year++;
            }
            else {
                month++;
            }
        }
    }

    void Date::display() const {
        cout << date << "/" << month << "/" << year;
    }