 #include <iostream>

    int romanToInt(string s) {
        int romanValues[26];
        romanValues['I' - 'A'] = 1;
        romanValues['V' - 'A'] = 5;
        romanValues['X' - 'A'] = 10;
        romanValues['L' - 'A'] = 50;
        romanValues['C' - 'A'] = 100;
        romanValues['D' - 'A'] = 500;
        romanValues['M' - 'A'] = 1000;

        int result = 0;
        int prevValue = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            int currValue = romanValues[s[i] - 'A'];

            if (currValue < prevValue) {
                result -= currValue;
            } else {
                result += currValue;
            }

            prevValue = currValue;
        }

        return result;
    }

    int main() {
        string input;
        cout << "Enter a Roman numeral: ";
        cin >> input;

        int output = romanToInt(input);
        cout << "The corresponding integer value is: " << output << endl;

        return 0;
    }