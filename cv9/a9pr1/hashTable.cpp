//
// Created by kvitajin on 7.5.18.
//

#include "hashTable.h"
#include <iostream>



hashTable::hashTable(int size) {
    this->keys=new std::string[size];
    this->size=size;

}

int hashTable::hashIt(std::string key) {
    return int(key.size()%(this->size));
}

void hashTable::insert(std::string key) {
    this->keys[this->hashIt(key)]=key;
}

void hashTable::printHashTable() {
    for (int i = 0; i < this->size; ++i) {
        std::cout   <<  i   <<  ": "    <<  this->keys[i]   <<std::endl;
    }
}
