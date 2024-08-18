#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Data
{
private:
    unsigned int day, month, year;
    unordered_map<int, string> month_mapping_ = 
    {
        {1, "January"},
        {2, "February"},
        {3, "March"},
        {4, "April"},
        {5, "May"},
        {6, "June"},
        {7, "July"},
        {8, "August"},
        {9, "September"},
        {10, "October"},
        {11, "November"},
        {12, "December"},
    };

    static const int days_per_month[13];
    void increment();


public:
    
    Data(unsigned int d = 1, unsigned int m = 1, unsigned int y = 1333); 
    ~Data() {};
    

    void setData(int ,int, int);
    string getMonthName() const;
    int getDay() const;
    int getYear() const;
    static bool isBis(int);
    bool endMonth(int) const;

    
    
    Data& operator++();
    Data operator++(int);
    Data& operator+=(unsigned int);
    
    friend istream& operator>>(istream& in, Data& user)
    {    
        if((user.day >= 1 && user.day <= 31) && (user.month >= 1 && user.month <= 12))
            in >> user.day >> user.month >> user.year;

        return in;
    }

    friend ostream& operator<<(ostream& out, Data& data)
    {
        out << data.getDay() << " de " << data.getMonthName() << " de " << data.getYear() << endl;

        return out;
    }


};

#endif