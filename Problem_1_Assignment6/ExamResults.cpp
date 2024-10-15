#include <iostream>
using namespace std;


struct StudentData {
    float NIMnum;
    float UtsVal;
    float UasVal;
    float avg;
};

StudentData theStudent[10];

int main() {
    int n;
    cout << "Enter the quantity of students: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "\nStudent " << i+1 << ":\n";
        cout << "NIM: ";
        cin >> theStudent[i].NIMnum;
        cout << "UTS Score: ";
        cin >> theStudent[i].UtsVal;
        cout << "UAS Score: ";
        cin >> theStudent[i].UasVal;
        
        
        theStudent[i].avg = (theStudent[i].UtsVal + theStudent[i].UasVal) / 2;
    }

    
    cout << "\nStudent Data:\n";
    
        for(int i = 0; i < n; i++){
        cout << "\nStudent " << i+1 << ":\n" << endl;
        cout << "NIM: " << theStudent[i].NIMnum << endl;
        cout << "UTS Score: " << theStudent[i].UtsVal << endl;
        cout << "UAS Score: " << theStudent[i].UasVal << endl;
        cout << "Average Score: " << theStudent[i].avg << endl;
        }

    

    
    
    return 0;

}