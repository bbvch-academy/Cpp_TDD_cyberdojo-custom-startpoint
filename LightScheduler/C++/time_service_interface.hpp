#ifndef TIME_SERVICE_INTERFACE_INCLUDED
#define TIME_SERVICE_INTERFACE_INCLUDED

#include <chrono>
#include <functional>
#include <memory>
#include <ctime>

class ITimeService
{
public:
    using wakeup_callback = std::function<void()>;
    using alarm_handle = std::shared_ptr<void>;
    using date_time = std::tm;

    virtual ~ITimeService() = default;
    virtual date_time current_time() const = 0;
    virtual alarm_handle start_periodic_alarm(std::chrono::minutes period,
                                              wakeup_callback callback) = 0;
    virtual void stop_periodic_alarm() = 0;
};

#endif
