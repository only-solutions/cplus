#include "addressbook.h"

AddressBook::AddressBook()
{
    entries.clear();
}

void AddressBook::add(std::string name, int address)
{
    entries.push_back(make_pair(name, address));
}

void AddressBook::processMaps()
{
    //map<int,vector<string>>
    std::vector<std::pair<std::string,int>>::iterator it;

    for(it = entries.begin(); it != entries.end(); it++)    {
        std::pair<std::string,int> entry;
        entry=*it;
        int addressnum=entry.second;
        vector<string> existingEntry;
        std::map<int,vector<string>>::iterator namebyadd;
        namebyadd=mNamesByAddress.find(addressnum);
        std::string entryname=entry.first;
        if (namebyadd != mNamesByAddress.end())
        {
            existingEntry = namebyadd->second;
        }
        existingEntry.push_back(entryname);

        mNamesByAddress[addressnum]=existingEntry;
    }
}

void AddressBook::printByAddress()
{
    std::map<int,vector<string>>::iterator it;

    for(it = mNamesByAddress.begin(); it != mNamesByAddress.end(); it++)    {
        cout <<"Address: "<<it->first<<endl;
        vector<string> namevec = (vector<string>)it->second;
        vector<string>::const_iterator it2;
        for(it2 = namevec.begin(); it2 != namevec.end(); it2++)    {
            string printnm=*it2;
            cout <<"  Name: "<<printnm<<endl;
        }
    }
}
void AddressBook::print()
{
    cout << entries.size();
    cout.flush();
}
