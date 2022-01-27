#pragma once
#ifndef CLOCK_H
#define CLOCK_H

#include <chrono>

template<typename Clock_t = std::chrono::steady_clock>
class Clock
{
public:
    using TimePoint = decltype(Clock_t::now()); //decltype se puede usar para obtener el tipo de una variable en este caso un un tiempo ahora
private:
    TimePoint m_inicio;
public:
    Clock() : m_inicio(Clock_t::now()) {

    }
    ~Clock() {

    }

    void reset() {
        m_inicio = Clock_t::now();
    }

    float getSeconds() const {
        return std::chrono::duration_cast<std::chrono::duration<float>>(Clock_t::now() - m_inicio).count();
    }

    long long getMilliseconds() const {
        return std::chrono::duration_cast<std::chrono::milliseconds>(Clock_t::now() - m_inicio).count();
    }
};

#endif