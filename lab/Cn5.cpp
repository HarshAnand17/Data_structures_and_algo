#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Vector to store received frames
static vector<string> arr;
static bool flag;

// Receiver function to simulate receiving frames and generating acknowledgements
void receiver(string s) {
    int a = rand() % 2; // Simulating random acknowledgment (0 or 1)
    if (a == 1) {
        arr.push_back(s); // If acknowledgment is 1, add the frame to the received frames
        flag = true;
    } else {
        flag = false; // If acknowledgment is 0, set the flag to false
    }
}

int main() {
    srand(time(0)); // Seed for random number generation
    cout << "Enter the number of data to be sent: ";
    int n;
    cin >> n;
    flag = false;
    int idx = 0;

    while (idx < n) {
        cout << "Enter Frame " << (idx + 1) << ": ";
        string s;
        cin >> s;
        cout << "Sending Frame " << (idx + 1) << endl;
        receiver(s); // Simulating sending the frame and receiving acknowledgment

        if (flag == true) {
            cout << "Received the acknowledgment for Frame " << (idx + 1) << endl;
            cout << "Frame " << (idx + 1) << " sent successfully" << endl << endl;
            idx++;
        } else {
            cout << "Did not receive the acknowledgment of Frame " << (idx + 1) << endl << endl;
            cout << "Resending the Frame " << (idx + 1) << endl << endl;
            receiver(s); // Resending the frame and receiving acknowledgment

            while (flag != true) {
                cout << "Did not receive the acknowledgment of Frame " << (idx + 1) << endl;
                cout << "Resending the Frame " << (idx + 1) << endl << endl;
                receiver(s); // Resending the frame and receiving acknowledgment
            }

            cout << "Received the acknowledgment for Frame " << (idx + 1) << endl;
            cout << "Frame " << (idx + 1) << " sent successfully" << endl;
            idx++;
        }

        flag = false;
        cout << endl;
    }

    cout << "Receiver received all the Frames" << endl;
    cout << "Received Frames are:" << endl;
    for (string frame : arr) {
        cout << frame << " ";
    }
    cout << endl;

    return 0;
}