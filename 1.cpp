#include <iostream>
#include <string>
using namespace std;
using std::string;

int main() {
    short  x, y;
    cout << "Please enter two numbers : \n";
    cin >> x >> y;
    enum Day {SUN ,MON, TUE, WED, THU, FRI, SAT};
    // enum print etc laters
    
    // Pointers start here
    char ch = 'Q';
    char* location = &ch;
    cout << *location << endl;
    *location = 'Y';
    cout << ch << endl;
    // int* x, y, z; only assigns x as pointer
    int m[10];
    m[2] = 4;
    cout << m[2];

    //structs start here
    enum mealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN}; 
    struct Passenger {
        string name;
        mealType mealPref;
        bool isFreqFlier;
        string freqFlierNo;
    };

    Passenger pass = {"john Smith", VEGETARIAN, true, "293145"};

    // OR USING POINTER TYPE

    Passenger *p;
    p = new Passenger;
    p->name = "John Smith";
    p->mealPref = VEGETARIAN;
    p->isFreqFlier = false;

    cout << p->isFreqFlier;

    delete p;
}