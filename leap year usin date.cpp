#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Date
{
public:
    int day, year, monthnum;
    void operator+(int day);
    bool leapYear;
    void print_date()
    {
        std::cout << "The date after addition is: ";
        std::cout << (this->day +1) << "/" << (this->monthnum +1) << "/" << (this->year) << std::endl;
        // Year probably doesn't require a +1, but you can check.
    }
    int daysInMonth[12];
    void set_daysInMonth()
    {
        // This is a mess, and most of these are constant, and so don't need to be a part of this function.
        // Really, you need a set_daysInFeb() function, but you also need to set the values for the other
        // months at least once, so I just put them here.
        daysInMonth[0]=31;
        daysInMonth[2]=31;
        daysInMonth[4]=31;
        daysInMonth[6]=31;
        daysInMonth[7]=31;
        daysInMonth[9]=31;
        daysInMonth[11]=31;
        daysInMonth[3]=30;
        daysInMonth[5]=30;
        daysInMonth[8]=30;
        daysInMonth[10]=30;
        if (leapYear) { daysInMonth[1]=29;}
        else {daysInMonth[1]=28;}
    }
};

void Date:: operator+(int day_var)
{
    if(day_var>=1)
    {
            day_var += day;
        while(day_var>365)
        {
            if (year%4==0 && year%1000 !=0)
            {
                leapYear = true;
                if (day_var > 366)
                {
                    day_var = day_var-366;
                    year++;
                }
            }
            else
            {
                leapYear = false;
                day_var = day_var-365;
                year++;
            }
        }

        set_daysInMonth();
        while (1)
        {
            if (day_var < daysInMonth[monthnum])
            {break;}
            day_var = day_var - daysInMonth[monthnum];
            monthnum ++;
            if (monthnum == 12)
            {
                year++;
                monthnum = 0;
                set_daysInMonth(); // This requires you to move some code around,
                // since it doesn't update the values in the right places.
            }
        }

        day = day_var;  // note that this is assigning remaining days (day_var)
                            // to the Date date_var.day variable    
    }
    else
    {
        cout << "Day should be greater than 0 !";
    }
}

int main()
{
    int day=0;
    cout << "Enter a day" << endl;
    cin >> day;
    Date date_var;
    date_var.year = 2014;
    date_var.monthnum = 1;
    date_var.day = 3;
    date_var + day;
    date_var.print_date();
    return 0;
}
