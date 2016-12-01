#include "signalhandler.ih"

virtual void TestHandler::~TestHandler()
{
    Signal.instance().remove(SIGINT);
}
