#pragma once 

#include <vector>
#include <string>

using namespace std;

struct Course {
    string code;
    string name;
};

class Advisor {
public:
    void run();

private:
    vector<vector<Course>> roadmap; /*here we are making a 2D vector with lines and colums. The rows would be the courses, and the colums would be the course
                                        number and name we made it private so none of the courses would be changed.*/

    void loadData();
    void displaySemester(int sem);
    void showRoadmap();
    void suggestNext();
    void showFAQ();
};

