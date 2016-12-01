#include "signalhandler.ih"

TestHandler::TestHandler()
{
    Signal.instance().add(SIGINT, *this);
}
