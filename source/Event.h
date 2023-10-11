#ifndef EVENT_H
#define EVENT_H

#include <string>

class Event {
public:
    Event();
    
    bool isCancellable() const;
    void setCancelled(bool cancel);
    bool isCancelled() const;
    void setCancellable(bool cancel);
    virtual bool post() = 0;
    void setName(std::string newName);
    std::string getName();

private:
    bool cancelled;
    bool cancellable;
    std::string name;
};

enum class Priority : int {
    Low = 0,
    Medium = 1,
    High = 2,
    Very_High = 3,
    Severe = 4,
    Uncategorizable = 99
};

#endif
