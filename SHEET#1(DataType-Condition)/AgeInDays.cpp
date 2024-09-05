#include <iostream>
using namespace std;

int main() {
    // Input variable
    int N;
    
    // Read the number of days
    cin >> N;
    
    // Calculate years, months, and days
    int years = N / 365;
    int remainingDaysAfterYears = N % 365;
    int months = remainingDaysAfterYears / 30;
    int days = remainingDaysAfterYears % 30;
    
    // Output the results
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    
    return 0;
}
