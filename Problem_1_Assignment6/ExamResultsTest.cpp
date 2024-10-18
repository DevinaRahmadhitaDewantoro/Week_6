#include <iostream>
using namespace std;

struct StudentData {
    int NIMnum;  
    float UtsVal;  
    float UasVal;  
    float avg;     
};


StudentData theStudent[5] = {
    {542345, 90, 80, (90 + 80) / 2.0}, // Student 1 data
    {547891, 85, 90, (85 + 90) / 2.0}, // Student 2 data
    {547892, 70, 75, (70 + 75) / 2.0}, // Student 3 data
    {547893, 60, 65, (60 + 65) / 2.0}, // Student 4 data
    {547894, 95, 85, (95 + 85) / 2.0}  // Student 5 data
};

// Expected values for comparison
StudentData expectedStudents[5] = {
    {542345, 90, 80, 85.0},    // Student 1 expected data
    {547891, 85, 90, 87.5},    // Student 2 expected data
    {547892, 70, 75, 72.5},    // Student 3 expected data
    {547893, 60, 65, 62.5},    // Student 4 expected data
    {547894, 95, 85, 90.0}     // Student 5 expected data
};

int main() {
    cout << "\nStudent Data:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << ":\n";

        bool isPassed = true; // Assume passed by default
        if (theStudent[i].NIMnum != expectedStudents[i].NIMnum ||
            theStudent[i].avg != expectedStudents[i].avg) {
            isPassed = false;
        }

        
        cout << "Test Result: ";
        if (isPassed) {
            cout << "Passed" << endl;
        } else {
            cout << "Failed" << endl;
        }
    }

    return 0;
}
