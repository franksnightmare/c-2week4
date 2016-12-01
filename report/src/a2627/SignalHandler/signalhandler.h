#ifndef SIGNALHANDLER_H
#define SIGNALHANDLER_H

class SignalHandler
{
    friend class Signal;

    public:
        virtual ~SignalHandler();
    private:
        virtual void signalHandler(size_t signum) = 0;        
};

#endif
