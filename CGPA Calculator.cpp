#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "===== CGPA Calculator =====\n";
    cout << "Enter number of subjects: ";
    cin >> n;

    vector<float> credits(n), grades(n);
    float totalCredits = 0, totalGradePoints = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nSubject " << i + 1 << endl;
        cout << "Enter Credit Hours: ";
        cin >> credits[i];
        cout << "Enter Grade Point (0-10): ";
        cin >> grades[i];

        totalCredits += credits[i];
        totalGradePoints += credits[i] * grades[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\n===== RESULT =====\n";
    cout << "Total Credits : " << totalCredits << endl;
    cout << "CGPA          : " << cgpa << endl;
    cout << "Percentage    : " << cgpa * 9.5 << "%" << endl;

    return 0;
}
