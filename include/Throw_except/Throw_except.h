#pragma once

#ifndef DRUMSTUDIO_THROW_EXCEPT_H
#define DRUMSTUDIO_THROW_EXCEPT_H

#include<exception>
#include<string>
#include <utility>

class Throw_except : public std::exception{
private:
    std::string message;
public:
    explicit Throw_except(std::string  mess) : message(std::move(mess)){};
    [[nodiscard]] const char* what() const noexcept override;
};

#endif
