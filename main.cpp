#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>
#include <vector>

using namespace std;

int main() {
    srand(time(0)); // seed random generator
    int moodChoice;

    // === Menu ===
    cout << "🎧 Welcome to DJ C++'s Spotify Mood Generator 🎶\n";
    cout << "Pick your vibe today:\n";
    cout << "1. Chill 🌙\n";
    cout << "2. Happy 😄\n";
    cout << "3. Sad 😢\n";
    cout << "4. Energetic 🔥\n";
    cout << "5. Surprise Me 🎲\n";
    cout << "Enter choice (1-5): ";
    cin >> moodChoice;

    // If user picks shuffle
    if (moodChoice == 5) {
        moodChoice = (rand() % 4) + 1; // random mood 1–4
        cout << "\n🎲 Surprise! Your random mood is: " << moodChoice << endl;
    }
