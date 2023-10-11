#ifndef STATISTICS_UPDATE_EVENT_H
#define STATISTICS_UPDATE_EVENT_H

#include "Event.h"

class StatisticsUpdateEvent : public Event
{
public:
    StatisticsUpdateEvent();
    bool post() override;
};

#endif