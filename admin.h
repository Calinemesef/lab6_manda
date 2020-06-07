//
// Created by Acer V3-772G on 4/30/2020.
//

#ifndef LAB5_ADMIN_H
#define LAB5_ADMIN_H
#pragma once
#include <vector>
#include "Film.h"
#include "user.h"
#include "Basefile.h"
#include "CSV.h"
#include "HTML.h"

class admin{
private:
    vector<Film> repo;  /// baza de date cu toate filmele
public:
    admin();
    void ansehen();
    void add(Film);
    void del(Film);
    void edit(Film);
    void suchen(user*);
    void increment(Film);   /// metoda pentru incrementarea nr de like-uri al unui film din repo, atunci cand userul il sterge din watchlist, daca vrea
    void initialise(string filename); /// initializeaza repo-ul cu datele din fisier
    void append();
    void show_List();

    ~admin();
};
#endif //LAB5_ADMIN_H
