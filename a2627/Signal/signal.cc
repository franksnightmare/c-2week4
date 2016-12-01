#include "signal.ih"

Signal::Signal()
{
    struct sigaction sa;
    sa.sa_handler = processSignal;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    for (size_t signal = 0; signal != 32; ++signal)
    sigaction(signal, &sa, 0);
}
