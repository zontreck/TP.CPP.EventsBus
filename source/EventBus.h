#ifndef EVENT_BUS_H
#define EVENT_BUS_H

#include <functional>
#include <vector>
#include <memory>

template <typename EventType>
class EventBus {
public:
    using EventCallback = std::function<void(EventType)>;

    static EventBus& GetInstance() {
        static EventBus instance;
        return instance;
    }

    void Subscribe(EventCallback callback);
    bool Post(const EventType& event);

private:
    std::vector<EventCallback> subscribers;
};

#endif // EVENT_BUS_H
