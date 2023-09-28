// to read and examine a password
#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
using namespace std;

long timediff(void); // prototype
bool getPassword(void); // prototype

int main() {
    cout << boolalpha << getPassword() << endl;

    return 0;
}

static string secret_pass = "iSuS";
static long max_count = 3, maxtime = 60;

bool getPassword() {
    bool ok_flag = false;
    string word;
    int count = 0, time = 0;
    timediff();

    while (ok_flag != true && ++count <= max_count) {
        cout << "\nInput the password: ";
        cin.sync();
        cin >> setw(20) >> word;
        time += timediff();
        if (time >= maxtime) {
            break;
        }
        if (word != secret_pass) {
            cout << "Invalid password!" << endl;
        }
        else {
            ok_flag = true;
        }
    }

    return ok_flag; 
}

long timediff() {
    static long sec = 0;
    long oldsec = sec;
    time(&sec);
    return (sec - oldsec);
}