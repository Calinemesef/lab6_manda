//
// Created by Acer V3-772G on 6/7/2020.
//

#ifndef LAB5_CSV_H
#define LAB5_CSV_H
#include "Basefile.h"

class CSVFile : public BaseFile
{
public:
    /// metoda pentru scrierea unui repo intr-un fisier csv
    virtual void write(string filename, vector<Film> watchlist) override;

    /// metoda pentru afisarea continutului fisierului csv
    virtual void display(string filename) override;
};
#endif //LAB5_CSV_H
