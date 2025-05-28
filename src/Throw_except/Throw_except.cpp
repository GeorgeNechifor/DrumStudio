
#include "../../include/Throw_except/Throw_except.h"

const char* Throw_except::what() const noexcept {
    return message.c_str();
}