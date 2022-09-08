// Fransiskus Agapa

// =============--
// simple class for user to learn how copy assignment works
// =============--
#include <iostream>
#include "CopyAs.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    cout << endl;
    // default constructor
    cout << "1st Class object" << endl;
    CopyAs oneText;

    // set and get a value
    string userText;
    cout << endl << "Input a text: ";
    cin >> userText;
    cout << endl;
    oneText.SetText(userText);
    cout << oneText.GetText() << endl << endl;

    // copy constructor
    cout << "2nd Class object " << endl;
    CopyAs twoText = oneText;
    cout << twoText.GetText() << endl;

    // set and get a value
    cout << endl << "Input another text: ";
    cin >> userText;
    cout << endl;
    twoText.SetText(userText);
    cout << twoText.GetText() << endl << endl;

    // copy assignment
    cout << "3rd Class object " << endl;
    CopyAs thirdText;
    thirdText = twoText;
    cout << thirdText.GetText() << endl;

    cout << endl << "Input another text: ";
    cin >> userText;
    cout << endl;

    // set and get a value
    thirdText.SetText(userText);
    cout << thirdText.GetText() << endl << endl;

    return 0;
}
