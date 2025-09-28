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
    Movie() : title (""), yearReleased(0), screenWriter("") {}
    Movie(string t, int y, string s) : title(t), yearReleased(y), screenWriter(s) {}

    // Setters
    void setTitle(string t)              { title = t; }
    void setYearReleased(int y)          { yearReleased = y; }
    void setScreenWriter(string s)       { screenWriter = s; }

    // Getters
    string getTitle() const              { return title; }
    int getYearReleased() const          { return yearReleased; }
    string getScreenWriter() const       { return screenWriter; }

    // Print method
    void print() const {
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

    while (getline(file, title)) {
        file >> year;
        file.ignore(); // skip newline after year
        getline(file, screenWriter);

        Movie temp(title, year, screenWriter);
        movies.push_back(temp);
    }

    file.close();

    // Print all movies
    for (int i = 0; i < movies.size(); i++) {
        movies[i].print();
        cout << endl;
    }

    return 0;

}
