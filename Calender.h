//
// Created by Vishal Ahirwar on 13-07-2024.
//

#ifndef CALENDER_H
#define CALENDER_H
#include <cstdint>
#include <map>
#include<string>
#include <iostream>

class Calender {
private:

    const std::map<uint16_t,std::string>months{{1,"JAN"},{2,"FEB"},{3,"MAR"},{4,"APRL"},{5,"MAY"},{6,"JUN"},{7,"JULY"},{8,"AUG"},{9,"SEPT"},{10,"OCT"},{11,"NOV"},{12,"DEC"}};
    const std::map<uint16_t,std::string>week_days{{1,"Mo"},{2,"Tu"},{3,"We"},{4,"Th"},{5,"Fr"},{6,"Sa"},{7,"Su"}};
private:

    [[nodiscard]] uint16_t getDaysInMonth(const uint16_t&month,const uint64_t&year)const;
    [[nodiscard]] static bool isLeapYear(const uint64_t&year);
    [[nodiscard]] std::string weekDay(const uint16_t&day,const uint16_t&month)const;
    [[nodiscard]] std::string getMonthAsString(const uint16_t&index)const;
    [[nodiscard]] std::string getWeekDayAsString(const uint16_t&index)const;

public:

    void displayYearCalender(const uint64_t&year)const;
    static uint16_t readYear();
};

#endif //CALENDER_H
