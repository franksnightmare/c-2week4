#include "signal.ih"

static Signal &Signal::instance();
{
    if (s_instance == NULL)
        s_instance = new Signal;

    return *Signal;
}
