#ifndef SERVER_TICK_EVENT_H
#define SERVER_TICK_EVENT_H

#include "Event.h"

class ServerTickEvent : public Event 
{
public:
    ServerTickEvent();
    bool post() override;
};


#endif