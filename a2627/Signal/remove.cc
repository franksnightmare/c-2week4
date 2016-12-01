#include "signal.ih"

void Signal::remove(size_t signum, SignalHandler &object)
{
    if (signals.find(signum) != signals.end())
    {
        set<SignalHandler> handlers = *signals.find(signum);
        handlers.erase(object);
    }
}
