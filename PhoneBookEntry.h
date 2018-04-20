// PhoneBookEntry.h

#ifndef _PhoneBookEntry_h_
#define _PhoneBookEntry_h_

#include <fstream>
#include <string>

class PhoneBookEntry
{
public:
    PhoneBookEntry() : name("no name"), number("no number") {}

    PhoneBookEntry(const std::string & name0,
                   const std::string & number0) :
        name(name0), number(number0) {}

    std::string name;
    std::string number;
};

inline std::istream & operator>>(std::istream & in,
                                 PhoneBookEntry & e)
{
    getline(in, e.name);
    getline(in, e.number);
    return in;
}

inline std::ostream & operator<<(std::ostream & out,
                                 const PhoneBookEntry & e)
{
    out << e.name << std::endl
        << e.number << std::endl;
    return out;
}

#endif
