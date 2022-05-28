#include <iostream>
#include <string>
using namespace std;
int main() {
//    int age;
    int initialScore;
    string fullName;
    string location;
//    newScore(int) = initialScore + 5;
    cout << "Please enter your name " << endl;
    getline(cin, fullName);
    cout << "Where are you from " << endl;
    getline(cin, location);
    cout << "Please enter an integer between 0 - 100" << endl;
    cin >> initialScore;
//    int newScore = initialScore + 5;
    cout << "Hello, you are called " << fullName << endl;
    cout << "we heard you are from " << location << endl;

    if (initialScore < 10) {
        cout << "Im afraid that your score is less than 10";
    } else cout << "Your score is now " << (initialScore + 5) << " Well done" << endl;
//           cout << "Well done " << endl;

//    cin.get() consumes newlinw char

    int arr[]={1,2,3,4,5};
    cout<<"The elements are ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}
