#include "CsHeader.h"
#include <iostream>

using namespace std;

void Advisor::loadData() {
    roadmap = {  // defining the roadmap vector with the courses of the CS roadmap
        {
            {"MAT 206.5",  "Intermediate Algebra and Precalculus"},
            {"ENG 101",  "English Composition"},
            {"CSC 101",  "Principles in Information Technology and Computation"},
            {"XXX xxx",  "Individual and Society"},
            {"XXX xxx",  " U.S. Experience in Its Diversity"}
        },
        {
            {" ENG 201",  "Introduction to Literature"},
            {" CSC 111",  "Introduction to Programming"},
            {" MAT 301",  " Analytic Geometry and Calculus"},            
            {" SPE 100",  "Fundamentals of Public Speaking"}


            
        },
        {
            {"PHY 215", "University Physics"},
            { "MAT 302", "Analytic Geometry and Calculus" },
            { "CSC 211", "Advanced Programming Techniques" },
            { "CSC 231", "Discrete Structures and Applications to Computer Science" },
            { "XXX xxx", "Program Elective" }
        },
        {
            {"CSC 215", " Fundamentals of Computer Systems"},
            { "CSC 331", "Data Structures" },
            { "CSC 350", "Software Development" },
            { "XXX xxx", "World Cultures and Global Issues" },
            { "XXX xxx", "Program Elective" }
        }
    };
}

void Advisor::displaySemester(int sem) {
    cout << "Semester " << sem + 1 << ":" << endl;
    for (const auto& c : roadmap[sem]) { // the const is there so we can access each course by reference without it being changed or modified.
        cout << "- " << c.code << ": " << c.name << endl;
    }
}

void Advisor::showRoadmap() {
    for (int i = 0; i < roadmap.size(); i++) {
        displaySemester(i);
    }
}

void Advisor::suggestNext() {
    int completed;
    cout << "Completed semesters: ";
    cin >> completed;

    if (completed >= 0 && completed < roadmap.size()) {
        displaySemester(completed);
    }
}

void Advisor::showFAQ() {
    cout << "FAQ: " << endl;
    cout << "60 credits needed." << endl;
}

void Advisor::run() { //giving the user the menu after they finsh a task everytime until they exit.
    loadData();

    int choice;
    do {
        cout << "1. Roadmap\n2. Suggest Next\n3. FAQ\n4. Exit\n";
        cin >> choice;

        if (choice == 1) showRoadmap();
        else if (choice == 2) suggestNext();
        else if (choice == 3) showFAQ();

    } while (choice != 4);
}