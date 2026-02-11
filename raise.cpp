#include <iostream>
#include <csignal>
#include <windows.h>  // For Sleep() on Windows
using namespace std;

void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";
    exit(signum);
}

int main() {
    int i = 0;

    signal(SIGINT, signalHandler);

    while (++i) {
        cout << "Going to sleep...." << endl;

        if (i == 3) {
            raise(SIGINT);
        }

        Sleep(1000);  // Sleep for 1000 ms = 1 second
    }

    return 0;
}
