#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Store the user's answers.
    string discovery, location, weather;

	// One word answers are expected, so we can use cin.
    cout << "What did you find on your adventure today? ";
    cin >> discovery;

    cout << "Where did you make this discovery? ";
    cin >> location;

    cout << "What was the weather like? ";
    cin >> weather;

    // Display the discovery journal entry.
    cout << "\nYou discovered " << discovery << " at "
        << location << ". The weather was " << weather << ".\n";

    return 0;
}