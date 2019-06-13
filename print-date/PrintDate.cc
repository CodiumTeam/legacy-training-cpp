#include "PrintDate.h"
#include "Calendar.h"
#include "Printer.h"

PrintDate::PrintDate()
{

}
    
void PrintDate::printCurrentDate()
{
    Calendar calendar;
    time_t now = calendar.today();
    Printer printer;
    printer.printLine(std::ctime(&now));
}