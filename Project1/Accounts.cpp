#include "Accounts.h"
#include <string>

using namespace std;

Accounts::Accounts(string accountName, string accountType)
{
	_accountName = accountName;
	_accountType = accountType;
}


Accounts::~Accounts()
{
}

string Accounts::
