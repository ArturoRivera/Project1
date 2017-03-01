#include <iostream>
#include "User.h"

using namespace std;

int main()

{
	
	User art = User("Arturo Rivera", 22);
	User brianna = User("Brianna Ramos", 21);
	User jake = User("Jake Beas", 22);

	cout << art.GetUserInfo() << endl;
	cout << brianna.GetUserInfo() << endl;
	cout << jake.GetUserInfo() << endl;

	return;
}