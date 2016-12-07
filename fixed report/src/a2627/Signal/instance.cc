#include "signal.ih"

static Signal &Signal::instance();
{
    return (s_instance == NULL ? s_instance = new Signal : *Signal)
}
