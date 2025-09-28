#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

// Movie class
class Movie {
private:
    string title;
    int yearReleased;
    string screenWriter;

public:
    // Constructors
    Movie::Movie() : title (""), yearReleased(0), screenWriter("") {}
    Movie::Movie(string t, int y, string s) : title(t), yearReleased(y), screenWriter(s) {}

    // Setters
    void Movie::setTitle(string t)              { title = t; }
    void Movie::setYearReleased(int y)          { yearReleased = y; }
    void Movie::setScreenWriter(string s)       { screenWriter = s; }

    // Getters
    string Movie::getTitle() const              { return title; }
    int Movie::getYearReleased() const          { return yearReleased; }
    string Movie::getScreenWriter() const       { return screenWriter; }

    // Print method
    void Movie::print() const {
        cout << "Movie: " << title << endl;
        cout << "   Year released: " << yearReleased << endl;
        cout << "   Screenwriter: " << screenWriter << endl;
    }

};

int main() {
    ifstream file("input.txt");
    if (!file) {
        cout << "Error opening file.\n";
        return 1;
    }

    vector<Movie> movies;
    string title, screenWriter;
    int year;

    while (file >> ws && getline(file, title)) {
        file >> year;
        getline(file, screenWriter);

        
    }

    return 0;

}
