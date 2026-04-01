#pragma once

class Date {
private:
    int date, month, year;

public:

    Date(int ngay, int thang, int nam) : date(ngay), month(thang), year(nam) {}

    // Hàm kiểm tra năm nhuận
    bool isLeapYear(int y);

    //Hàm lấy số ngày tối đa trong tháng
    int daysInMonth(int m, int y);

    //Hàm tính ngày tiếp theo.
    void nextDay();

    void display() const;

};