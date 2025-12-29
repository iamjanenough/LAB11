#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string temp;

    cout << "Press Enter 3 times to reveal your future." << endl << endl;

    
    for (int i = 0; i < 3; i++) {
        getline(cin, temp);
    }

    
    string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int size = 9;

    
    srand(time(0));
    int r = rand() % size;

    cout << "You will get " << grade[r] << " in this 261102." << endl;

    return 0;
}

