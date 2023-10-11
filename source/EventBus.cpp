#include "EventBus.h"
#include "EventBusStatistics.h"

// Define the methods for EventBus here.

template <typename EventType>
void EventBus<EventType>::Subscribe(EventCallback callback) {
    subscribers.push_back(callback);
}

template <typename EventType>
bool EventBus<EventType>::Post(const EventType& event) {
    bool canceled = false;


    for (const auto& callback : subscribers) {
        callback(event);
        EventBusStatistics::EventName = event.getName();
        if (event.isCancelled()) {
            // Handle cancellable event logic here.
            canceled = true;

            EventBusStatistics::Cancelled = true;
        }
    }

    if(StatisticsUpdateEvent* ev = dynamic_cast<StatisticsUpdateEvent*>(event))
    {
        return canceled;
    }else 
        EventBusStatistics::doUpdate();

    return canceled;
}
