// Source file 2

#include<string>
using namespace std;

extern string line;

void cutline() {
    int i = line.size();

    while (i-- >= 0) {
        if (line[i] != ' ' && line[i] != '\t') {
            break;
        }
    }

    line.resize(++i);
}