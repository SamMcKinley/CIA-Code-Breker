#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//Display title
	cout << "\t\t\t Mythology Jumble \n\n";
	cout << " Unjumble the names of the Gods \n";

	// user rounds
	for (int i = 0; i < 3; i++)
	{
		cout << "\n Round " << i + 1 << " of 3. \n\n";

		enum fields { WORD, HINT, NUM_FIELDS };
		const int NUM_WORDS = 10;
		const string WORDS[NUM_WORDS][NUM_FIELDS] =
		{
				{"Glass", "I am either half empty or half full."},
	{"Ghost", "I am invisible, and I say Boo!"},
	{"Corner", "Go sit there, your in trouble!"},
	{"Bacon", "What else do you pair with your eggs?"},
	{"Butter", "What do you put on your toast?"},
	{ "wall", "Do you feel you're banging your head against something?" },
	{"glasses", "These might help you see the answer."},
	{"labored", "Going slowly, is it?"},
	{"persistent", "Keep at it."},
	{"jumble", "It's what the game is all about."}
		};
		};

		srand(static_cast<unsigned int>(time(0)));
		int choice = (rand() % NUM_WORDS);
		string theWord = WORDS[choice][WORD];
		string theHint = WORDS[choice][HINT];
		//----------------------------------------------------------------
		string jumble = theWord;
		int length = jumble.size();
		for (int i = 0; i < length; ++i)
		{
			int index1 = (rand() % length);
			int index2 = (rand() % length);
			char temp = jumble[index1];
			jumble[index1] = jumble[index2];
			jumble[index2] = temp;
		}

		cout << "Enter 'hint' for a hint. \n";
		cout << "Enter 'quit' to quit the game. \n\n";
		cout << "The jumble is: " << jumble;

		string guess;
		cout << "\n\n Your guess: ";
		cin >> guess;
		//----------------------------------------------------------------
		while ((guess != theWord) && (guess != "quit"))
		{
			if (guess == "hint")
			{
				cout << theHint;
			}
			else
			{
				cout << "Sorry, that's not it.";
			}
			cout << "\n\n Your guess: ";
			cin >> guess;
		}

		if (guess == theWord)
		{
			cout << " Input correct";
		}
	}
	//----------------------------------------------------------------
	cout << "\n Go in knowledge of the Greek Gods \n";
	//----------------------------------------------------------------
	cout << "\n Go forth in the name of Olympus \n";

	return 0;
}