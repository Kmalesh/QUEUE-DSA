#include <iostream>
#include <string>
using namespace std;
string one[] = {"", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
string ten[] = {"", "", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
string elevenToNineteen[] = {"Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
string convertToWords(int n) {
    string result = "";
    if (n >= 1000) {
        result += one[n / 1000] + "Thousand ";
        n %= 1000;
    }
    if (n >= 100) {
        result += one[n / 100] + "Hundred ";
        n %= 100;
    }
    if (n >= 20) {
        result += ten[n / 10];
        n %= 10;
    } else if (n >= 10) {
        result += elevenToNineteen[n - 10];
        n = 0;
    }
    result += one[n];
    return result;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number == 0) {
        cout << "Zero" << endl;
    } else {
        cout << convertToWords(number) << endl;
    }
    return 0;
}
