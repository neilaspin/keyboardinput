#include <iostream>
#include <string>
using namespace std;

//class A {
//
//
//
//
//public: void mean() {
//        int averageMean = (num1 + num2 + num3) / 3;
//        cout << "The mean of your numbers is " << averageMean;
//    }
//    public: void median() {
//        int averageMedian = get<2>(arr);
//        cout << "The median of your numbers is " << averageMedian;
//    }
//
//    int arr [] = {num1, num2, num3};
//
//
//
//};
//

int main() {


//    int age;
    int initialScore;

//    double averageMean;
    string fullName;
    string location;
////    newScore(int) = initialScore + 5;
//    cout << "Please enter your name " << endl;
//    getline(cin, fullName);
//    cout << "Where are you from " << endl;
//    getline(cin, location);
//    cout << "Please enter an integer between 0 - 100" << endl;
//    cin >> initialScore;
////    int newScore = initialScore + 5;
//    cout << "Hello, you are called " << fullName << endl;
//    cout << "we heard you are from " << location << endl;


    double num1;
    double num2;
    double num3;
    cout << "Please enter number 1 " << endl;
    cin >> num1;

    cout << "Please enter number 2 " << endl;
    cin >> num2;

    cout << "Please enter number 3  " << endl;
    cin >> num3;

    double averageMean = (num1 + num2 + num3) / 3;

    cout << "The average of three numbers is " << averageMean;



//    if (initialScore < 10) {
//        cout << "Im afraid that your score is less than 10";
//    } else cout << "Your score is now " << (initialScore + 5) << " Well done" << endl;
//           cout << "Well done " << endl;

//    cin.get() consumes newlinw char

//    int arr[]={1,2,3,4,5};
//    cout<<"The elements are ";
//    for(int i : arr)
//    {
//        cout<<i<<" ";
//    }


    return 0;
}

