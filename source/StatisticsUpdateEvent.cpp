#include "StatisticsUpdateEvent.h"
#include "Event.h"
#include "EventBus.h"


StatisticsUpdateEvent::StatisticsUpdateEvent()
{
    
}


bool StatisticsUpdateEvent::post()
{
    EventBus<StatisticsUpdateEvent>& bus = EventBus<StatisticsUpdateEvent>::GetInstance();
    return bus.Post(*this);
}