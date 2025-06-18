#include <iostream>
#include <random>
#include <chrono>
#include <thread>

using namespace std;

struct Frame {
  int sequenceNumber;
  string data;
};

Frame sendFrame(int sequenceNumber, string data) {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist(0, 9);
  if (dist(gen) == 0) {
    data = "CORRUPTED";
  }
  cout << "Sender: Sending frame " << sequenceNumber << " with data: " << data << endl;
  return {sequenceNumber, data};
}

// Function to simulate acknowledgement
string receiveACK(int expectedSequenceNumber, int timeout) {
  // Simulate packet loss with 5% chance
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist(0, 19);
  if (dist(gen) == 0) {
    return "TIMEOUT";
  }
  // Simulate incorrect acknowledgement with 2% chance
  else if (dist(gen) == 1) {
    return "WRONG_ACK_" + to_string(expectedSequenceNumber + 1);
  } else {
    return "ACK_" + to_string(expectedSequenceNumber);
  }
}

int main() {
  int sequenceNumber = 0;
  int timeout = 2000; // Timeout in milliseconds

  // Loop until transmission is complete
  while (true) {
    cout << endl << "Iteration " << sequenceNumber + 1 << ":" << endl;

    // Get data from sender
    cout << "Enter data to send (or 'END' to finish): ";
    string data;
    getline(cin, data);

    // Check for end of transmission
    if (data == "END") {
      break;
    }

    // Send data frame
    Frame sentFrame = sendFrame(sequenceNumber, data);

    // Start timer
    auto start = chrono::high_resolution_clock::now();

    // Wait for acknowledgement
    string ack;
    do {
      ack = receiveACK(sentFrame.sequenceNumber, timeout);

      // Handle timeout
      if (ack == "TIMEOUT") {
        cout << "Sender: Timeout, resending frame " << sequenceNumber << endl;
        continue;
      }

      // Handle incorrect acknowledgement
      if (ack.substr(0, 7) == "WRONG_ACK_") {
        int receivedNumber = stoi(ack.substr(7));
        cout << "Sender: Incorrect acknowledgement (" << receivedNumber << "), resending frame " << sequenceNumber << endl;
        continue;
      }
    } while (ack != ("ACK_" + to_string(sentFrame.sequenceNumber)));

    // Calculate round-trip time
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> elapsed = end - start;
    cout << "Receiver: Data received correctly (RTT: " << elapsed.count() << " ms)" << endl;

    sequenceNumber++;
  }

  cout << "Transmission complete." << endl;

  return 0;
}