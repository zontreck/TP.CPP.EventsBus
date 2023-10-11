#include "EventBus.h"

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
        if (event.isCancelled()) {
            // Handle cancellable event logic here.
            canceled = true;
        }
    }

    return canceled;
}
