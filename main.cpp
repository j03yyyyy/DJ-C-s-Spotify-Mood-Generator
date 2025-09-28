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

    // Song pools (using vector instead of raw array)
    vector<string> chillSongs = {"Coffee - beabadoobee", "Falling Behind - Laufey", 
                                "Night Owl - Galimatias", "Peach - Kevin Abstract", 
                                "Lost in You - khai dreams"};

    vector<string> happySongs = {"Levitating - Dua Lipa", "Sunroof - Nicky Youre", 
                                "Good as Hell - Lizzo", "Walking on Sunshine - Katrina & The Waves", 
                                "Happy - Pharrell Williams"};

    vector<string> sadSongs   = {"drivers license - Olivia Rodrigo", "Someone Like You - Adele", 
                                "All I Want - Kodaline", "The Night We Met - Lord Huron", 
                                "Fix You - Coldplay"};

    vector<string> hypeSongs  = {"Blinding Lights - The Weeknd", "Turn Down for What - DJ Snake", 
                                "Titanium - David Guetta ft. Sia", "Stronger - Kanye West", 
                                "Uptown Funk - Bruno Mars"};

    // Random engine for shuffle
    default_random_engine rng(time(0));

    cout << "\n🎵 Your Custom Playlist 🎵\n";

    if (moodChoice == 1) {
        cout << "Mood: Chill 🌙 | Genre: Lo-Fi / Acoustic\n";
        shuffle(chillSongs.begin(), chillSongs.end(), rng);
        for (int i=0; i<3; i++) cout << "- " << chillSongs[i] << endl;
    } 
    else if (moodChoice == 2) {
        cout << "Mood: Happy 😄 | Genre: Pop / Indie Pop\n";
        shuffle(happySongs.begin(), happySongs.end(), rng);
        for (int i=0; i<3; i++) cout << "- " << happySongs[i] << endl;
    } 
    else if (moodChoice == 3) {
        cout << "Mood: Sad 😢 | Genre: R&B / Soft Rock\n";
        shuffle(sadSongs.begin(), sadSongs.end(), rng);
        for (int i=0; i<3; i++) cout << "- " << sadSongs[i] << endl;
    } 
    else if (moodChoice == 4) {
        cout << "Mood: Energetic 🔥 | Genre: EDM / Hip-Hop\n";
        shuffle(hypeSongs.begin(), hypeSongs.end(), rng);
        for (int i=0; i<3; i++) cout << "- " << hypeSongs[i] << endl;
    } 
    else {
        cout << "Invalid choice! Please pick 1–5.\n";
        return 0;
    }
