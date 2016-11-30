#include "signal.ih"

Signal::~Signal()
{
    delete s_instance;
}
