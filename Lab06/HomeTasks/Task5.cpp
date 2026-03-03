#include <iostream>
using namespace std;

class Media {
    protected:
        string title;
        int year;
    
    public:
        Media (string t, int y) {
            title = t;
            year = y;
        }

        void showMediaInfo() {
            cout << "Title: " << title << endl;
            cout << "Year: " << year << endl;
        }
};

class Book : public Media {
    private:
        string author;

    public:
        Book(string t, int y, string a) : Media(t, y) {
            author = a;
        }

        void showBookInfo() {
            showMediaInfo();
            cout << "Author: " << author << endl;
        }
};

class Video : public Media {
    private:
        int duration;
    
    public:
        Video(string t, int y, int d) : Media(t, y) {
            duration = d;
        }

        void showVideoInfo() {
            showMediaInfo();
            cout << "Duration: " << duration << " minutes" << endl;
        }
};

class Audio : public Media {
    private:
        string speaker;

    public:
        Audio (string t, int y, string s) : Media(t, y) {
            speaker = s;
        }

        void showAudioInfo() {
            showMediaInfo();
            cout << "Speaker: " << speaker << endl;
        }
};


int main () {
    Book b("Harry Potter and the Order of Phoenix", 2003, "J.K.Rowling");
    Video v("Intro to OOP", 2025, 24);
    Audio a("Podcast on Politics", 2021, "Ali");

    cout << "Book Details: " << endl;
    b.showBookInfo();

    cout << "Video Details: " << endl;
    v.showVideoInfo();

    cout << "Audio Details: " << endl;
    a.showAudioInfo();

    return 0;
}