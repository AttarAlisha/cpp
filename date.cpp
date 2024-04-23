#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() {
	day=0;
	month=0;
	year=0;
    }
    Date(int d, int m, int y) {
	day=d;
	month=m;
	year=y;
	}

    void acceptDate() {
        cout << "Enter date (dd mm yyyy): ";
        cin >> day >> month >> year;
    }

    void displayDate() {
        cout << "Date formats:" << endl;
        cout << "dd-mm-yyyy: " << setw(2) << setfill('0') << day << "-" << setw(2) << setfill('0') << month << "-" << year << endl;
        cout << "dd-MMM-yyyy: " << setw(2) << setfill('0') << day << "-" << getMonthAbbreviation(month) << "-" << year << endl;
        cout << "dd/mm/yy: " << setw(2) << setfill('0') << day << "/" << setw(2) << setfill('0') << month << "/" << (year % 100) << endl;
    }

    int calculateDifference(Date& other) {
        time_t t1 = convertToDateT();
        time_t t2 = other.convertToDateT();

        return difftime(t1, t2) / (60 * 60 * 24); // Difference in days
    }

    void incrementDay() {
        day++;
        if (day >= 31) {
            day = 1;
            month++;
            if (month >= 12) {
                month = 1;
                year++;
            }
        }
    }

    void incrementMonth() {
        month++;
        if (month >= 12) {
            month = 1;
            year++;
        }
    }

private:
    string getMonthAbbreviation(int month) {
        static const char* monthNames[] = { "","JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
        return monthNames[month];
    }

    time_t convertToDateT() {
        struct tm timeinfo = {0};
        timeinfo.tm_year = year - 1900;
        timeinfo.tm_mon = month - 1;
        timeinfo.tm_mday = day;
        return mktime(&timeinfo);
    }
};

int main() {
    Date date1, date2;
    
    cout << "Enter first date:" << endl;
    date1.acceptDate();
    
    cout << "Enter second date:" << endl;
    date2.acceptDate();

    cout << "First date:" << endl;
    date1.displayDate();
    cout << "Second date:" << endl;
    date2.displayDate();

    cout << "Difference between two dates: " << date1.calculateDifference(date2) << " days" << endl;

    date1.incrementDay();
    cout << "After incrementing one day in first date:" << endl;
    date1.displayDate();

    date2.incrementMonth();
    cout << "After incrementing one month in second date:" << endl;
    date2.displayDate();

    return 0;
}
