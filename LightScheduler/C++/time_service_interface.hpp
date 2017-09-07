#ifndef TIME_SERVICE_INTERFACE_INCLUDED
#define TIME_SERVICE_INTERFACE_INCLUDED

#include <chrono>
#include <functional>

class ITimeService
{
public:
    struct time_t {
        int second;
        int minute;
        int hour;
        int day_of_month;
        int month;
        int year;
        int day_of_week;
    };

    using wackup_callback = std::function<void()>;

    virtual ~ITimeService() {};
    virtual time_t get_time() const = 0;
    virtual void set_periodic_alarm(std::chrono::minutes period, wackup_callback callback) = 0;
};

#endif
