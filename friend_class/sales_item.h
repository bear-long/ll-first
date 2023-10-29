#ifndef SALES_ITEM_H
#define SALES_ITEM_H

#include <iostream>
#include <string>

class Sales_item {
public:
    // 构造函数
    Sales_item();
    Sales_item(const std::string &isbn, unsigned units, double price);

    // 成员函数
    double avg_price() const;

    // 成员变量
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

#endif  // SALES_ITEM_H
