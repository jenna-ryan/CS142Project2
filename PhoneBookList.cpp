// PhoneBookList.cpp

#include "PhoneBookList.h"

#include <fstream>
using std::ifstream;
using std::ofstream;
#include <iostream>
using std::cout;
using std::endl;
#include <map>
using std::pair;
#include <string>
using std::string;

void PhoneBookList::read_file(const std::string & file_name)
{
    ifstream ifs(file_name);
    if (!ifs) // no file -- one will be created when write_file is called
        return;

    int num_entries;
    ifs >> num_entries;
    ifs.get(); // \n
    for (int i = 0; i < num_entries; i++) {
        PhoneBookEntry new_entry;
        ifs >> new_entry;
        // m_entries[new_entry.name] = new_entry;
        m_entries_.insert(m_entries_.end(),
                          {new_entry.name, new_entry});
    }
    itr_current_entry_ = m_entries_.begin();
}

void PhoneBookList::write_file(const std::string & file_name) const
{
    cout << "Saving not yet implemented\n";
}

