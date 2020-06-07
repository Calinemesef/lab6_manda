//
// Created by Acer V3-772G on 6/7/2020.
//

#ifndef LAB5_HTML_H
#define LAB5_HTML_H
#include "Basefile.h"

class HTML : public BaseFile
{
public:
    /// metoda pentru scrierea unui repo intr-un fisier html
    virtual void write(string filename, vector<Film> watchlist) override;

    /// metoda pentru afisarea continutului fisierului html
    virtual void display(string filename) override;
};
#endif //LAB5_HTML_H
