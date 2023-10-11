#include "Event.h"

Event::Event()
{
}

bool Event::isCancellable() const {
    return cancellable; // CancellableAttribute not applicable in C++
}

void Event::setCancelled(bool cancel) {
    // Check isCancellable() before setting the cancel flag (not shown in this example).
    // Implement the logic to set the cancel flag as needed.
    if(cancellable)
    {
        cancelled=true;
    }
}

bool Event::isCancelled() const {
    return (cancellable ? cancelled : false); // Implement the logic to check the cancel flag as needed.
}

void Event::setCancellable(bool cancel)
{
    cancellable = cancel;
}