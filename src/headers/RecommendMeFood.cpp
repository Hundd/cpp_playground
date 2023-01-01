#include "RecommendMeFood.h"

const char *RecommendMeFood(char firstLetter)
{
    if (firstLetter == 'a' || firstLetter == 'A')
        return "Apple";
    if (firstLetter == 'b' || firstLetter == 'B')
        return "Banana";
    if (firstLetter == 'c' || firstLetter == 'C')
        return "Chocolate cake";

    return "Pizza";
}