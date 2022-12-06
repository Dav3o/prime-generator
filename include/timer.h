#ifndef TIMER_H
#define TIMER_H

#include <chrono>
#include <vector>

struct Result
{
    std::vector<unsigned int> primes;
    double time;

    Result(std::vector<unsigned int> primes, double time) : primes(primes), time(time) {}
};

class Timer
{

public:
    Timer();
    template <typename Function>
    Result time(Function function);

private:
    std::chrono::steady_clock::time_point startTime;
};

#endif // TIMER_H