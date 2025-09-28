#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Movie class
class Movie {
private:
    string title;
    int yearReleased;
    string screenWriter;

public:
    // Constructors
    Movie();
    Movie(string t, int y, string s);

    // Setters
    void Movie::setTitle(string t)              { title = t; }
    void Movie::setYearReleased(int y);
    void Movie::setScreenWriter(string s);

    // Getters
    string getTitle() const;
    int getYearReleased() const;
    string getScreenWriter() const;

    // Print method
    void print() const;

};

int main() {

    return 0;

}
