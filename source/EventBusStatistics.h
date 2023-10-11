#ifndef EVENT_BUS_STATISTICS_H
#define EVENT_BUS_STATISTICS_H

#include <string>
#include <iostream>

class EventBusStatistics
{
public:
    static std::string EventName;
    static bool Cancelled;

    static void doUpdate();
};


#endif