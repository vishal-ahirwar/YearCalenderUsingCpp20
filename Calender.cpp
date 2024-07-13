//
// Created by Vishal Ahirwar on 13-07-2024.
//

#include "Calender.h"
#include <iomanip>
uint16_t Calender::readYear() {
    uint16_t year{};
    std::cout<<"[Year]: ";
    std::cin>>year;
    return year;
};
bool Calender::isLeapYear(const uint64_t&year)
{
    if(!(year%4)) {
        if(!(year%100)) {
            if(!(year%400)) {
                return true;
            }else {
                return false;
            }
        }else {
            return true;
        }
    }else {
        return false;
    }

};

uint16_t Calender::getDaysInMonth(const uint16_t&month,const uint64_t&year)const {
    if(month<1)return -1;
    if(month==2) {
        if(isLeapYear(year))return 29;
        else return 28;
    };
    if(month<=7) {
        return ((month%2)==0)?30:31;
    }else {
        return ((month%2)==0)?31:30;
    };
};

std::string Calender::weekDay(const uint16_t&day,const uint16_t&month) const {
    //TODO:Implementation needs to be done
    return week_days.at(4);
};

std::string Calender::getMonthAsString(const uint16_t &index) const {
    return this->months.find(index)->second;
};
std::string Calender::getWeekDayAsString(const uint16_t &index) const {
    return this->week_days.find(index)->second;
};

void Calender::displayYearCalender(const uint64_t &year) const {
    for(uint16_t month=1;month<=12;++month) {
        std::cout<<std::setw(20)<<getMonthAsString(month)<<":\n";
        for(uint16_t days=1;days<=7;++days) {
            std::cout<<std::setw(5)<<getWeekDayAsString(days);
            if(days==7)std::cout<<"\n";
        }

        for(uint16_t days=1;days<=getDaysInMonth(month,year);++days) {
            std::cout<<std::setw(5)<<days;
            if(days%7==0)std::cout<<"\n";
            if(days==getDaysInMonth(month,year))std::cout<<"\n";
        }
    }
}


