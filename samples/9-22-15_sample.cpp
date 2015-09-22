#include <iostream>
using namespace std;

int main(){
    
    // This will print out the program text header
    cout << "~~~Age Averager~~~" << endl;
    cout << "------------------" << endl;

    //Get the first users age!
    int user_age1 = 0;
    cout << "Please enter the user's age!" << endl;
    cin >> user_age1;

    int user_age2 = 0;
    cout << "Please enter the second user's age!" << endl;
    cin >> user_age2;

    // Average formula is (a+b)/
2    int average_age = 0;
    average_age = (user_age1 + user_age2) / 2;

    //(user_age1 + user_age2) / 2 = average_age; //NO BAD DOG
    cout << "The average age between the two users is: " << average_age << endl;
    
    return 1;
}

