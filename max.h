#pragma once
#include <type_traits>

template <typename T1, typename T2>
auto max(const T1& a, const T2& b)
-> typename std::common_type<const T1&, const T2&>::type
{
    return a > b ? a : b;
}

template <typename T1, typename T2, typename ... Args>
auto max(const T1& a, const T2& b, const Args& ... args)
-> typename std::common_type<const T1&, const T2&, const Args& ...>::type
{
    return max(max(a, b), args...);
}