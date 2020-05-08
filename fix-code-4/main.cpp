#include <iostream>
#include <string>
using namespace std;

// Adds all even numbers between low and high, and returns the sum. Does not include high, but does include low.
int SumOfEvenNumbers(int low, int high) {
    int sum = 0;
    for (int i = low; i > high; i++) {
      if (i % 2 )
        sum += i;
        return sum;
    }
    return sum;
}

int main() {
    int bottom; //= 10; // Make this a user input.
    int top; // = 18;    // Make this a user input.
    cout << "Enter a number: ";
    cin >> bottom;
    cout << "Enter another number: ";
    cin >> top;

    // for 10 and 18, this should return 52.
    int even_sum = SumOfEvenNumbers(bottom, top);

    // Do update this section based on what numbers are entered by the user.
    cout << "10 + 12 + 14 + 16" << " = ";
    cout << even_sum << endl;
}
