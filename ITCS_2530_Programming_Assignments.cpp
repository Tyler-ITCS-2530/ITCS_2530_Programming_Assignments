#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Create variables to store the discovery information.
    string discovery;
    string location;
    string weather;

    // Ask what was found during the adventure.
    cout << "What did you find on your adventure today? ";
    getline(cin, discovery);

    // Ask where the discovery happened.
    cout << "Where did you make this discovery? ";
    getline(cin, location);

    // Ask about the weather during the adventure.
    cout << "What was the weather like? ";
    getline(cin, weather);

    // Display the completed discovery journal entry.
    cout << "\n--- Trail Discovery Journal ---\n";
    cout << "You discovered " << discovery << " at "
        << location << ".\n";
    cout << "The weather was " << weather << ".\n";
    cout << "Every adventure is another opportunity to discover something new!\n";

    return 0;
}