#include "Calendar.h"
Calendar::Calendar()
{

}

time_t Calendar::today()
{
    return time(0);
}