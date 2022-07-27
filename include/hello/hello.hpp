#pragma once
#ifndef _LINUY_HELLO_HPP_
#define _LINUY_HELLO_HPP_
#include <string>
#include <iostream>

namespace linuy
{
    class Hello
    {
    private:
        const std::string _hello_str = "Hello, World!";
    public:
        Hello();
    };
}

#endif