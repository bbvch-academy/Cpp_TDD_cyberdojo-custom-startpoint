#ifndef LIGHT_CONTROLLER_INTERFACE_INCLUDED
#define LIGHT_CONTROLLER_INTERFACE_INCLUDED

#include <cstdint>

class ILightController
{
public:
    using light_id_t = uint32_t;

    virtual ~ILightController() = default;
    virtual void turn_on(light_id_t id) = 0;
    virtual void turn_off(light_id_t id) = 0;
};

#endif
