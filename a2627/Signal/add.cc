#include "signal.ih"

void Signal::add(size_t signum, SignalHandler &object)
{
    if (signals.find(signum) == signals.end())
        signals.insert(pair<size_t, set<SignalHandler>>(signum, set<SignalHandler>()));

    set<SignalHandler> handlers = *signals.find(signum);
    handlers.insert(object);
}
