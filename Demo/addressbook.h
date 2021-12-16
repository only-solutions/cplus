#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

class AddressBook
{
public:
    AddressBook();
    std::vector<std::pair<std::string,int>> entries;
    std::map<int,vector<string>> mNamesByAddress;
    void printByAddress();

    void add(std::string name, int address);
    void processMaps();
    void print();
};

#endif // ADDRESSBOOK_H
