#include <iostream>
using namespace std;


int input(string userMsg)
    {
	int output;
	cout<<userMsg<<endl;
	while (!(cin >> output))
	    {
		cout<<"Input failed please re-enter:"<<endl;
	    	cin.clear();
	    	cin.ignore(1000, '\n');

	    }

	return output;

    }

int main()
{
	const char letters[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	string msg ="";
	int msgLength;
	bool isQuit = false;
	int userDecision = 0;

	while(!isQuit)
	{
		userDecision = input("1- Encrypt\n"
								"2-Decrypt\n"
								"Any other num- Quit");

		if (userDecision == 1){

			cout<<"Please enter message to be Ecrypted :";
			cin.ignore();
			getline(cin, msg);
			msgLength = msg.length();

			for (int i = 0; i <= msgLength; i++){

				for (int j = 0; j <= 26; j++){
                        msg[i] = toupper(msg[i]);
					if (msg[i] == letters[j]){
						msg[i] = letters[(((5 * j) + 8) % 26)];
						break;
					}
				}
			}
			cout<<"Encrypted message is \""<<msg<<"\""<<endl;
		}
		else if (userDecision == 2)
		{
			cout<<"Please enter message to be decrypted :";
			cin.ignore();
			getline(cin, msg);
			msgLength = msg.length();

			for (int y = 0; y <= msgLength; y++){

				for (int f = 0; f <= 26; f++){
                        msg[y] = toupper(msg[y]);
					if (msg[y] == letters[f]){
						int index = (21 * (f - 8) % 26);
						if (index < 0){
							index = index + 26;
						}
						msg[y] = letters[index];
						break;
					}
				}
			}

			cout<<"The message was \""<<msg<<"\""<<endl;
		}
		else
			isQuit = true;
	}
}
