#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "My name is Ritushwar";
    cout << "The main string is: " << str << endl;

    cout << "Enter the substring to be searched: ";
    string substr;
    cin >> substr;

    size_t found = str.find(substr);
    if (found != string::npos) {
        cout << "Substring found at position " << found << endl;
    } else {
        cout << "Substring not found" << endl;
    }

    return 0;
}
