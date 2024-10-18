#include <iostream>
#include <vector>
using namespace std;



struct StudentData {
    int NIMnum;
    float UtsVal;
    float UasVal;
    float avg;
};

int main() {
    int n;
    cout << "Enter the quantity of students: ";
    cin >> n;

    // Declare a dynamic array (vector) to store data for any number of students
    vector<StudentData> theStudent(n);

    for(int i = 0; i < n; i++){
        cout << "\nStudent " << i+1 << ":\n";
        cout << "enter the student's NIM: ";
        cin >> theStudent[i].NIMnum;
        cout << "enter the student's UTS Score: ";
        cin >> theStudent[i].UtsVal;
        cout << "enter the student's UAS Score: ";
        cin >> theStudent[i].UasVal;
        
        
        theStudent[i].avg = (theStudent[i].UtsVal + theStudent[i].UasVal) / 2;
    }

    
    cout << "------------------------";
    
        for(int i = 0; i < n; i++){
        cout << "\nStudent " << i+1 << ":\n" << endl;
        cout << "NIM: " << theStudent[i].NIMnum << endl;
        cout << "Average Score: " << theStudent[i].avg << endl;
        }

    

    
    
    return 0;

}