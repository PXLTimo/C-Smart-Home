#ifndef UTILS_H
#define UTILS_H

namespace smarthome {

// Vraag 25: useful template function
template<typename T>
T clamp(const T& value, const T& min, const T& max) {
    return (value < min) ? min : (value > max) ? max : value;
}

}

#endif
