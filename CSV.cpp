//
// Created by Acer V3-772G on 6/7/2020.
//

#include "CSV.h"
#include <fstream>
using namespace std;

void CSVFile::write(string filename, vector<Film> watchlist)
{
    ofstream csv;
    csv.open(filename, ofstream::out | ofstream::trunc);
    if(watchlist.size()==0) /// Daca nu exista elemente in watchlist
    {
        csv<<"Nu exista filme in watchlist-ul userului!";
    }

    csv << "Title,Genre,Year,Likes,Trailer\n";

    for (auto m : watchlist)
        csv << m.get_titel() << ',' << m.get_genre() << ',' << m.get_jahr() << ',' << m.get_anz_likes() << ',' << m.get_trailer()<< '\n';

    csv.close();
}

void CSVFile::display(string filename)
{
    string str = "start " + filename;
    system(str.c_str());
}