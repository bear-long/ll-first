#ifndef SALES_ITEM_H
#define SALES_ITEM_H

#include <iostream>
#include <string>

class Sales_item {
public:
    // ���캯��
    Sales_item();
    Sales_item(const std::string &isbn, unsigned units, double price);

    // ��Ա����
    double avg_price() const;

    // ��Ա����
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

#endif  // SALES_ITEM_H
