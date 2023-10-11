#include "StatisticsUpdateEvent.h"
#include "Event.h"
#include "EventBus.h"


StatisticsUpdateEvent::StatisticsUpdateEvent()
{
    setName("Statistics Update Event");
}


bool StatisticsUpdateEvent::post()
{
    EventBus<StatisticsUpdateEvent>& bus = EventBus<StatisticsUpdateEvent>::GetInstance();
    return bus.Post(*this);
}