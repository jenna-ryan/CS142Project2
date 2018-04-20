// PhoneBook.h

#ifndef _PhoneBookList_h_
#define _PhoneBookList_h_

#include <fstream>
#include <iostream>
#include <map>
#include <string>

#include "PhoneBookList.h"

const char clear_command[] = "cls"; // for Windows
//const char clear_command[] = "clear"; // for Linux and possibly Mac's

const char cs_file_name[] = "phonebook.txt";

class PhoneBook
{
public:
    void run();

private:
    void display_entry_and_menu() const;
    void execute(char command, bool & done);

    PhoneBookList entry_list_;
};

#endif

