#include <iostream>
#include <ctime>
#include "PrintDate.h"
#include "Calendar.h"
using namespace std;

PrintDate::PrintDate()
{

}
    
void PrintDate::printCurrentDate()
{
    Calendar calendar;
    time_t now = calendar.today();
    cout << std::ctime(&now) << endl;
}