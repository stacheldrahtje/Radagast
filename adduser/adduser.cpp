#include <QString>
#include <iostream>
#include <string>
#include "adduser.h"

using namespace std;

//hashing is first order of business.
char* hashpasswd (QString unhash)
{
    //placeholder
}

int createuser (QString uname, QString fname)
{
    char username[16]="<username>";
    char fullname[16]="<fullname>";
    string combi = username;
    combi += " -c ";
    combi += fullname;
    cout << combi << endl;
    return 0;
}

char* fnc_stdout (QString hash)
{
    //placeholder
}
