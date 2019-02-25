//
// Created by kvitajin on 7.5.18.
//

#include <string>

#ifndef A9PR1_HASHTABLE_H
#define A9PR1_HASHTABLE_H


class hashTable {
    std::string* keys;
    int size;
public:
    hashTable(int size=13);
    int hashIt(std::string);
    void insert(std::string key);
    void printHashTable();

};


#endif //A9PR1_HASHTABLE_H
