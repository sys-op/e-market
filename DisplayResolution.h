#pragma once
#include <iostream>

struct displayResolution_t {
    unsigned x {0};
    unsigned y {0};

    friend std::ostream &operator<<(std::ostream &output, const displayResolution_t &displayResolution) {
        output << displayResolution.x << "x" << displayResolution.y;
        return output;
    }
};
