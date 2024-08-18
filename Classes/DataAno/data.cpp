#include "data.h"

const int Data::days_per_month[13] 
{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Data::Data(unsigned int day, unsigned int month, unsigned int year)
{
    setData(day, month, year);
}

void Data::increment()
{
    if(!endMonth(day))
        ++day;
    else
    {
        if(month < 12)
        {
            ++month;
            day = 1;
        }
        else
        {
            ++year;
            month = 1;
            day = 1;
        }
    }
}

void Data::setData(int dd, int mm, int yy)
{
    if(mm >= 1 && mm <= 12)
        month = mm;
    else
        month = 1;

    if(yy >= 1333 && yy <= 2333)
        year = yy;
    else
        year = 2024;
    
    if((month == 2 && isBis(year) && dd >= 1 && dd <= 29) || (dd >= 1 && dd <= days_per_month[month]))
        day = dd;
    else
        day = 1;
}

bool Data::isBis(int y)
{
    return y % 4 == 0;
} 

bool Data::endMonth(int test_day) const
{
    if(month == 2 && isBis(year))
        return test_day = 29;
    else
        return test_day == days_per_month[month];
}

string Data::getMonthName() const
{
    auto it = month_mapping_.find(month);
    if(it != month_mapping_.end())
        return it->second;
    else
        return "Mes invalido.";
}

int Data::getDay() const
{
    return this->day;
}   

int Data::getYear() const
{
    return this->year;
}

Data& Data::operator++()
{
    increment();
    return (*this);
}

Data Data::operator++(int n)
{
    Data temp = (*this);
    increment();

    return (*this);
}

Data& Data::operator+=(unsigned int add_days)
{
    for (unsigned int i = 0; i < add_days; i++)
    {
        increment();
    }

    return (*this);    
}
