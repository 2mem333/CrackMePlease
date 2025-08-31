#include <iostream>
#include <string>

std::string encrpytionKey = "2mem333";
int nm = 11;

int licenseKeyCheck(std::string key)
{
	char legacyKey[16];
	legacyKey[0] = '3';
	legacyKey[1] = 'f';
	legacyKey[2] = '3';

	for (int i = 3; i < 16; i++)
	{
		legacyKey[i] = '9';
	}

	if (key.length() != 16)
		return 0; //invalid size
	for (int i = 0; i < 16; i++)
	{
		if (key[i] != legacyKey[i])
			return 0;
	}
	return 1;
}

void encrpytMessages(std::string a)
{
	for (int i = 0; i < a.length(); i++)
	{
		a[i] = 32 + ((a[i] - 32) + (encrpytionKey[i % 6] - 32)) % 95;
		std::cout << a[i];
	}
}

std::string decryptMessages(std::string message)
{
	for (int i = 0; i < message.length(); i++)
	{
		message[i] = 32 + ((message[i] - 32) - (encrpytionKey[i % 6] - 32) + 95) % 95;
	}
	return message;
}

int emptyFunc(int val = 5)
{
	val = val + 1;
	return val;
}

int main()
{
	if (nm != 10)
		nm++;

	std::string pleaseenterlicenkey = "bZKO'x2STbx&2gUc&3~WIS\"'wmQS-M";
	std::string accessDenied = "SQIS''2RK\\|xvn";
	std::string successMsg = "U]TU&t'hqm-#(t\\S3v%OIYxw2bNS3'\"TZet&w{ed|x*mSg3z{bNcu3x]Xm'#(`ISM3yWZV)u@QU[BE SS!FFA1XOv~_S6Zxt&S";
	
	std::string hahayouthinkyouclever = "ZONO{t>mJWw3,][m&xsZRg3(zWTY3|'m]]) vmHS3(zOZmxt&g%mg&,mGUt|!{";

start:
	//NOPE THIS IS FAKE TOO
	if (0)
	{
		std::cout << "\n\nPlease enter your license key:";
		std::string inputKey;
		std::getline(std::cin, inputKey);
	}



	std::cout << decryptMessages(pleaseenterlicenkey) << " ";
	std::string inputKey;
	std::getline(std::cin, inputKey);

	int returnVal = licenseKeyCheck(inputKey);

	dis:
	int distractNumber = returnVal * 69;
	if (distractNumber == 1337)
		goto dis;
	if (6 * 2 == nm)	//you shouldn't play with this statement
	{
		distractNumber = 0; //this value should always be 0
	}
	else
	{
		std::string clue = "Maybe check here?"; //xD
		std::cout << decryptMessages(hahayouthinkyouclever); //whats this message?
		goto start;
	}


	//REAL KEY CHECK STATEMENTS
	int realNumber = distractNumber + returnVal;
	if (realNumber == 1) {
		std::cout << decryptMessages(successMsg);
		goto fin;
	}
	else {
		std::cout << decryptMessages(accessDenied);
	}
	

	//FAKE KEY CHECK STATEMENTS
	if (inputKey[0] == emptyFunc(-1)) {

		if (distractNumber == 0) {
			std::cout << "Access denied!";
		}
		else
		{
			std::string bruh = "Fine you did crack the software!";
			distractNumber = emptyFunc(bruh[0]);
		}
	}

	std::cout << "\n\n";
	goto start;

fin:
	return 0;
}