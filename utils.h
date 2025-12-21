#ifndef UTILS_H
#define UTILS_H

namespace smarthome {

template<typename T>
T clamp(const T& value, const T& min, const T& max) {
    return (value < min) ? min : (value > max) ? max : value;
}

}

#endif
