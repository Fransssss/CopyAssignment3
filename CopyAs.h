// Fransiskus Agapa

#ifndef COPYASSIGNMENT3_COPYAS_H
#define COPYASSIGNMENT3_COPYAS_H

#include <iostream>

using std::string;

class CopyAs
{
private:
    string* _text;
public:
    CopyAs();                                   // default constructor
    void SetText(const string& theText);        // set value
    string GetText() const;                     // get value
    CopyAs(const CopyAs& theText);              // copy constructor
    CopyAs& operator=(const CopyAs& theText);   // copy assignment
    ~CopyAs();                                  // destructor
};

#endif //COPYASSIGNMENT3_COPYAS_H
