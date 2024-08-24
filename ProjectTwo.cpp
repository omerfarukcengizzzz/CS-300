//============================================================================
// Name        : ProjectTwo.cpp
// Author      : Omer Cengiz
// Version     : 1.0
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// Define the Course structure to store course information
struct Course {
    string courseNumber;          // The course number (e.g., CSCI100)
    string name;                  // The name of the course (e.g., Introduction to Computer Science)
    vector<string> prerequisites; // A list of course numbers that are prerequisites for this course
};

// Convert a string to lowercase
string toLowerCase(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

// Function to load courses from a predefined list (instead of a file)
vector<Course> loadCourses() {
    vector<Course> courses; // Vector to hold all courses

    // Manually adding course data with the correct prerequisites
    courses.push_back({"CSCI100", "Introduction to Computer Science", {}});
    courses.push_back({"CSCI101", "Introduction to Programming in C++", {"CSCI100"}});
    courses.push_back({"CSCI200", "Data Structures", {"CSCI101"}});
    courses.push_back({"CSCI300", "Introduction to Algorithms", {"CSCI200", "MATH201"}});
    courses.push_back({"CSCI350", "Operating Systems", {"CSCI300"}});
    courses.push_back({"CSCI400", "Large Software Development", {"CSCI301", "CSCI350"}});
    courses.push_back({"CSCI301", "Advanced Programming in C++", {"CSCI101"}});
    courses.push_back({"MATH201", "Discrete Mathematics", {}});

    return courses;
}

// Function to print the course list in alphanumeric order
void printCourseList(const vector<Course>& courses) {
    vector<Course> sortedCourses = courses;

    // Sort courses by course number
    sort(sortedCourses.begin(), sortedCourses.end(), [](const Course& a, const Course& b) {
        return a.courseNumber < b.courseNumber;
    });

    // Print each course in the sorted list
    for (const auto& course : sortedCourses) {
        cout << course.courseNumber << ", " << course.name << endl;
    }
}

// Function to print information about a specific course
void printCourseInfo(const vector<Course>& courses, const string& inputCourseNumber) {
    string lowerInputCourseNumber = toLowerCase(inputCourseNumber);

    // Search for the course in the list
    for (const auto& course : courses) {
        if (toLowerCase(course.courseNumber) == lowerInputCourseNumber) {
            cout << course.courseNumber << ", " << course.name << endl;

            // Print prerequisites if there are any
            if (!course.prerequisites.empty()) {
                cout << "Prerequisites: ";
                for (size_t i = 0; i < course.prerequisites.size(); ++i) {
                    cout << course.prerequisites[i];
                    if (i < course.prerequisites.size() - 1) {
                        cout << ", ";
                    }
                }
                cout << endl;
            } else {
                cout << "Prerequisites: None" << endl;
            }
            return; // Exit the function after printing course info
        }
    }
    cout << "Course not found." << endl; // If course is not found
}

// Function to display the menu and handle user input
void displayMenu() {
    cout << "\n1. Load Data Structure." << endl;
    cout << "2. Print Course List." << endl;
    cout << "3. Print Course." << endl;
    cout << "9. Exit" << endl;
    cout << "\nWhat would you like to do? ";
}

// Main function to drive the program
int main() {
    vector<Course> courses; // Vector to store courses
    bool running = true;    // Flag to control the menu loop

    // Loop to display the menu and process user input
    while (running) {
        displayMenu();
        string choice;
        cin >> choice;

        // Handle the user's menu choice
        if (choice == "1") {
            courses = loadCourses(); // Load the predefined courses
            if (!courses.empty()) {
                cout << "Data loaded successfully." << endl;
            }
        } else if (choice == "2") {
            if (courses.empty()) {
                cout << "Please load the course data first." << endl;
            } else {
                printCourseList(courses); // Print the list of courses
            }
        } else if (choice == "3") {
            if (courses.empty()) {
                cout << "Please load the course data first." << endl;
            } else {
                string courseNumber;
                cout << "What course do you want to know about? ";
                cin >> courseNumber;
                printCourseInfo(courses, courseNumber); // Print info about a specific course
            }
        } else if (choice == "9") {
            cout << "Thank you for using the course planner!" << endl;
            running = false; // Exit the program
        } else {
            cout << choice << " is not a valid option." << endl; // Handle invalid menu options
        }
    }

    return 0;
}
