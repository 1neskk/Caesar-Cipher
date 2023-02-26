#include <iostream>

std::string encrypt(std::string text, int s)
{
	std::string result = "";

	
	for (int i = 0; i < text.length(); i++) {

		if (isupper(text[i]))
			result += char(int(text[i] + s - 65) % 26 + 65);

		
		else
			result += char(int(text[i] + s - 97) % 26 + 97);
	}

	
	return result;
}

std::string decrypt(std::string text, int s) {
std::string result = "";

	
	for (int i = 0; i < text.length(); i++) {

		if (isupper(text[i]))
			result += char(int(text[i] - s - 65) % 26 + 65);

		
		else
			result += char(int(text[i] - s - 97) % 26 + 97);
	}

	
	return result;
}

int main()
{
	using namespace std;
	string text = "";
	int s = 5;


	int choice;
	cout << "Enter your choice \n1. Encryption \n2. Decryption \n";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Input text to be encrypted:" << endl;
		cin >> text;
		/*cout << "Input shift value (between 0-25):" << endl;*/
		/*cin >> s;*/
		cout << "Your text input: " << text;
		cout << "\nShift value: " << s;
		cout << "\nCipher: " << encrypt(text, s);
		return 0;
	}
	else if (choice == 2)
	{
		s = s % 26;
		cout << "Input text to be decrypted:" << endl;
		cin >> text;
		/*cout << "Input shift value (between 0-25):" << endl;*/
		/*cin >> s;*/
		cout << "Your text input: " << text;
		cout << "\nShift value: " << s;
		cout << "\nDecrypted: " << encrypt(text, 26 - s);
		return 0;
	}
	else
	{
		cout << "Invalid choice";
		return 0;
	}
	
}

