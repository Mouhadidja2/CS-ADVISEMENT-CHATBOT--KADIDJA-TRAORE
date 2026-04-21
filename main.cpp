#include <iostream>
#include "CsHeader.h"

using namespace std;

int main() {
    int choice; 

    do {  // making a menu for the student to navigate through the choices
        cout << "BMCC Advisor System " << endl;
        cout << "1. AI Advisor\n";
        cout << "2. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            Advisor advisor;
            advisor.run();
        }
        

    } while (choice != 2);

    cout << "Goodbye!"<<endl;
    return 0;
}