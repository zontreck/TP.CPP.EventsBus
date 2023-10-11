#include "EventBusStatistics.h"
#include "StatisticsUpdateEvent.h"
#include "EventBus.h"
#include <string>
#include <iostream>

using namespace std;

void EventBusStatistics::doUpdate()
{
    EventBus<StatisticsUpdateEvent>& bus = EventBus<StatisticsUpdateEvent>::GetInstance();
    StatisticsUpdateEvent up;
    bus.Post(up);
}