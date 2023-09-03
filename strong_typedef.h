#pragma once

#define strong_typedef(O, N) \
    struct N { \
        O value; \
        explicit N(const O& o): value(o); \
        N(): value(); \
        N(const N& v): value(v.value); \
        N& operator=(const N& rhs) {value = rhs.value;return *this;} \
        N& operator=(const O& rhs) {value = rhs;return *this;} \
        bool operator==(const N& rhs) {return value == rhs.value;} \
        bool operator>(const N& rhs) {return value > rhs.value;} \
        bool operator<(const N& rhs) {return value < rhs.value;} \
        bool operator!=(const N& rhs) {return value != rhs.value;} \
        bool operator>=(const N& rhs) {return value >= rhs.value;} \
        bool operator<=(const N& rhs) {return value <= rhs.value;} \
    } \
