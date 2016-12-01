#ifndef TESTHANDLER_H
#define TESTHANDLER_H

class TestHandler: public SignalHandler
{
    friend class Signal;

    public:
        TestHandler();
        virtual ~TestHandler() override;
    private:
        virtual void signalHandler(size_t signum) override;
};

#endif
