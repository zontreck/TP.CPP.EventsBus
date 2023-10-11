#include "ServerTickEvent.h"
#include "EventBus.h"

ServerTickEvent::ServerTickEvent()
{
    
}

bool ServerTickEvent::post()
{
    EventBus<ServerTickEvent>& bus = EventBus<ServerTickEvent>::GetInstance();
    return bus.Post(*this);
}