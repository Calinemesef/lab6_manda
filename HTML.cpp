//
// Created by Acer V3-772G on 6/7/2020.
//

#include "HTML.h"
#include <fstream>

using namespace std;

void HTML::write(string filename, vector<Film> watchlist)
{
    ofstream html;
    html.open(filename, ofstream::out | ofstream::trunc);

    ifstream file("Header.html");
    string str;
    while (getline(file, str))
        html << str << '\n';
    file.close();

    if(watchlist.size()==0) /// Daca nu exista elemente in watchlist
    {
        html<<"Nu exista filme in watchlist-ul userului!";
    }

    /// trece toate filmele din lista adminului
    for (auto m : watchlist)
        html << "<tr><td>" << m.get_titel() << "</td><td>" << m.get_genre() << "</td><td>" << m.get_jahr() << " </td><td>" << m.get_anz_likes() << "</td><td> <a href = " << m.get_trailer() << ">Link</a></td></tr>";

    /// footer
    ifstream file2("Footer.html");
    while (getline(file2, str))
        html << str << '\n';
    file2.close();

    html.close();
}

void HTML::display(string filename)
{
    string str = "start " + filename;
    /// pt conversie- str->char*
    system(str.c_str());
}