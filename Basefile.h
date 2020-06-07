
//
// Created by Acer V3-772G on 6/7/2020.
//

#ifndef LAB5_BASEFILE_H
#define LAB5_BASEFILE_H
#include "Film.h"
#include <string>
#include <vector>
using namespace std;

class BaseFile
{
public:
    virtual void write(string filename, vector<Film*> repo) {}

    virtual void write(string filename, vector<Film> watchlist) {}

    virtual void display(string filename) {}
};

#endif //LAB5_BASEFILE_H
