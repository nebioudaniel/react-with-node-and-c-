#include "example.h"

#include <iostream>
#include <string>
#include <limits>  // For input validation

using namespace std;  // Using standard namespace for convenience (avoid overuse)

void exampleFunction(const string& message) {
  cout << message << endl;
}

int main() {
  string userMessage;
  bool isValidInput = false;  // Flag to track valid input

  while (!isValidInput) {
    cout << "Enter a message to print (or 'q' to quit): ";
    getline(cin, userMessage);

    // Input validation (example using length check and avoiding `q`)
    if (userMessage.length() > 0 && userMessage != "q") {
      isValidInput = true;
    } else {
      cout << "Invalid input. Please enter a message or 'q' to quit." << endl;
    }
  }

  if (userMessage != "q") {
    exampleFunction(userMessage);
  } else {
    cout << "Program terminated." << endl;
  }

  return 0;
}
