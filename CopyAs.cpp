// Fransiskus Agapa

#include "CopyAs.h"
#include <iostream>

using std::cout;
using std::endl;

// default constructor
CopyAs::CopyAs()
{
    cout << "= Default Constructor Called =" << endl;
    _text = new string;                      // allocate new memory
    *_text = "NoText";
}

// set value
void CopyAs::SetText(const string &theText)
{
    cout << "= Setter Called =" << endl;
    _text = new string;                      // allocate new memory
    *_text = theText;
}

// get value
string CopyAs::GetText() const
{
    cout << "= Getter Called =" << endl;
    return *_text;
}

// copy constructor
CopyAs::CopyAs(const CopyAs &theText)
{
    cout << "= Copy Constructor Called =" << endl;
    _text = new string;                      // allocate new memory
    *_text = *theText._text;
}

// copy assignment
CopyAs& CopyAs::operator=(const CopyAs &theText)
{
    cout << "= Copy Assignment Called =" << endl;
    if(this != &theText)                    // no self-assign / reassign same value
    {
        delete _text;                       // free previous allocated memory
        _text = new string;                 // allocate new memory
        *_text = *theText._text;
    }
    return *this;
}

// destructor
CopyAs::~CopyAs()
{
    cout << "= Destructor Called =" << endl;
    delete _text;
}
