#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj

    std::for_each(people.begin(), people.end(), [](Human& people) { people.birthday(); });
    std::transform(people.begin(), people.end(), ret_v.begin(), [](Human& people) -> char {
        if (people.isMonster() == true)
            return 'y';
        else
            return 'n';
    });

    std::reverse(ret_v.begin(), ret_v.end());
    
    return ret_v;
}
