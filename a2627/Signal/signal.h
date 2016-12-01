#ifndef SIGNAL_H
#define SIGNAL_H

#include <map>

class Signal
{
    // map to store pair of signal with set of signalhandlers
    map<size_t, set<SignalHandler>> d_signalHandlerMap;
    static Signal *s_instance = NULL;

    public:
        Signal(Signal const &other) = delete;
        static Signal &instance();

    private:
        Signal();
        ~Signal();
        // calls the signalhanders for the given signal
        // it is linked to all required signals using sigaction
        void (*processSignal)(size_t signum);
        void add(size_t signum, SignalHandler &object);
        void remove(size_t signum, SignalHandler &object);
        void ignore(size_t signum);
        void reset(size_t signum);
};

#endif
