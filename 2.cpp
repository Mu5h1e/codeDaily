#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;

void compare() {
    int x, y;
    cout << "enter 2 numbers : ";
    cin >> x >> y;
    cout << " The Min is " << (x < y ? x:y) << endl;

    // if else if else
    if(x < y) {
        cout << x << endl;
    }
    else if (x == y) {
        cout << x << endl;
    }
    else {
        cout << y << endl;
    }
}

void vectors() {
    int len;
    cin >> len;
    vector<int> vect;
    vect.push_back(len);
    for (int i = 0; i < len; i++) {
        cin >> vect[i];
    }
    for (int i = 0; i < len; i++) {
        cout << vect[i];
    }
}

int main() {
    vectors();
}