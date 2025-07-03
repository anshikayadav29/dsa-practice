#include <iostream>
using namespace std;

class File {
public:
    virtual ~File() {
        cout << "File closed\n";
    }
};

class TextFile : public File {
public:
    ~TextFile() {
        cout << "TextFile closed\n";
    }
};

int main() {
    File* f = new TextFile();
    delete f;
    return 0;
}