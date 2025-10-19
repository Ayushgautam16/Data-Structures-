#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cout << "Enter the number of semesters completed: ";
    cin >> m;

    vector<double> sgpa(m), credits(m);
    double totalWeightedSGPA = 0, totalCredits = 0;

    for (int i = 0; i < m; i++) {
        cout << "Enter SGPA for semester " << i + 1 << ": ";
        cin >> sgpa[i];
        cout << "Enter total credits for semester " << i + 1 << ": ";
        cin >> credits[i];

        totalWeightedSGPA += sgpa[i] * credits[i];
        totalCredits += credits[i];
    }

    double cgpa = totalWeightedSGPA / totalCredits;
    cout << "\nYour current CGPA is: " << cgpa << endl;
    cout << "Equivalent Percentage: " << cgpa * 10 << "%" << endl;

    return 0;
}