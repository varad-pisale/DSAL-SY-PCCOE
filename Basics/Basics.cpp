
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 1. USER INPUT / OUTPUT
void userInputOutput() {
    int age;
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // Reads full line with spaces

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello, " << name << "! You are " << age << " years old.\n";
}

// 2. DATA TYPES
void dataTypesDemo() {
    int i = 10;
    float f = 3.14f;
    double d = 2.718281828;
    char c = 'A';
    bool b = true;

    cout << "\nInt: " << i << ", Float: " << f << ", Double: " << d << ", Char: " << c << ", Bool: " << b << "\n";
}

// 3. IF-ELSE STATEMENTS
void ifElseDemo(int number) {
    if (number > 0)
        cout << "Positive\n";
    else if (number < 0)
        cout << "Negative\n";
    else
        cout << "Zero\n";
}

// 4. SWITCH STATEMENT
void switchDemo(char grade) {
    switch (grade) {
        case 'A': cout << "Excellent\n"; break;
        case 'B': cout << "Good\n"; break;
        case 'C': cout << "Average\n"; break;
        default: cout << "Invalid grade\n";
    }
}

// 5. ARRAYS AND STRINGS
void arraysAndStrings() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array values: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << "\n";

    string str = "Om Khalane";
    cout << "String: " << str << ", Length: " << str.length() << "\n";
}

// 6. FOR LOOPS
void forLoopDemo() {
    cout << "\nFor loop (1 to 5): ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n";
}

// 7. WHILE LOOPS
void whileLoopDemo() {
    int i = 1;
    cout << "While loop (1 to 5): ";
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << "\n";
}

// 8. FUNCTIONS - PASS BY VALUE
void incrementByValue(int x) {
    x += 1;
    cout << "Inside function (by value): " << x << "\n";
}

// 8. FUNCTIONS - PASS BY REFERENCE
void incrementByReference(int &x) {
    x += 1;
    cout << "Inside function (by reference): " << x << "\n";
}

// 9. TIME COMPLEXITY - BASIC DEMO
void timeComplexityDemo() {
    cout << "\nTime complexity demo (O(n)): ";
    int n = 5;
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << "\n";
    // O(n) linear
}

int main() {
    cout << "=== USER INPUT/OUTPUT ===\n";
    userInputOutput();

    cout << "\n=== DATA TYPES ===\n";
    dataTypesDemo();

    cout << "\n=== IF-ELSE ===\n";
    ifElseDemo(-5);

    cout << "\n=== SWITCH STATEMENT ===\n";
    switchDemo('B');

    cout << "\n=== ARRAYS & STRINGS ===\n";
    arraysAndStrings();

    cout << "\n=== FOR LOOP ===\n";
    forLoopDemo();

    cout << "\n=== WHILE LOOP ===\n";
    whileLoopDemo();

    cout << "\n=== FUNCTIONS: PASS BY VALUE ===\n";
    int val = 10;
    incrementByValue(val);
    cout << "Outside function: " << val << "\n";

    cout << "\n=== FUNCTIONS: PASS BY REFERENCE ===\n";
    incrementByReference(val);
    cout << "Outside function: " << val << "\n";

    cout << "\n=== TIME COMPLEXITY ===\n";
    timeComplexityDemo();

    return 0;
}

