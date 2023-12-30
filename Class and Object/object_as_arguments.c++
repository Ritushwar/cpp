#include<iostream>
#include<iomanip>
using namespace std;

class times {
    int hour, minutes, second;

public:
    void gettime();
    void display();
    void sum(times, times);
};

void times::gettime() {
    cout << "Enter hours: ";
    cin >> hour;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> second;
}

void times::display() {
    cout << hour << " Hours " << minutes << " minutes" << second << " second" << endl;
}

void times::sum(times t1, times t2) {
    int sec = t1.second + t2.second;
    int min = sec / 60;
    min = min + t1.minutes + t2.minutes;
    int hr = min / 60;
    hour = hr + t1.hour + t2.hour;
    minutes = min % 60;
    second = sec % 60;
}

int main() {
    times t1, t2, t3;
    t1.gettime();
    t2.gettime();
    t3.sum(t1, t2);
    t3.display();
    return 0;
}
