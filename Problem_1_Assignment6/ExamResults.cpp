#include <iostream>
using namespace std;

//struct declaration to store the students data
struct StudentData {
    int NIMnum;
    float UtsVal;
    float UasVal;
    float avg;
};

// Array declaration to store data for up to 50 students
StudentData theStudent[50];

int main() {
    int n;
    // Ask the user to input the number of students
    cout << "Enter the quantity of students: ";
    cin >> n;

// Loop through each student to collect their data
    for(int i = 0; i < n; i++){
        cout << "\nStudent " << i+1 << ":\n"; // Display student number (i+1) for each student
        // ask the user to input their NIM, UTS score, and UAS score.
        cout << "enter the student's NIM: ";
        cin >> theStudent[i].NIMnum;
        cout << "enter the student's UTS Score: ";
        cin >> theStudent[i].UtsVal;
        cout << "enter the student's UAS Score: ";
        cin >> theStudent[i].UasVal;
        
        // calculate the average score
        theStudent[i].avg = (theStudent[i].UtsVal + theStudent[i].UasVal) / 2;
    }

    
    cout << "------------------------";
        // print the NIM and average of each student
        for(int i = 0; i < n; i++){
        cout << "\nStudent " << i+1 << ":\n" << endl;
        cout << "NIM: " << theStudent[i].NIMnum << endl;
        cout << "Average Score: " << theStudent[i].avg << endl;
        }

    

    
    
    return 0; //end of program

}