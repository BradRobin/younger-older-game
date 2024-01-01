#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    string player1;
    string player2;
    int player1Age;
    int player2Age;
    cout << "player1 Enter your name: " << endl;
    getline(cin, player1);
    cout << "player2 Enter your name: " << endl;
    getline(cin, player2);
    cout << "player1 Enter your age: " << endl;
    cin >> player1Age;
    cout << "player2 Enter your age: " << endl;
    cin >> player2Age;

    if (player1Age > player2Age) {
        cout << player1 << " is older";
    } else if(player2Age > player1Age) {
        cout << player2 << " is older";
    } else {
        cout << player1 << " and " << player2 << " are of same age";
    }
    
    return 0;
}