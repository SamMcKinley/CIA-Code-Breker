//Word Jumble

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 10;
	const string WORDS[NUM_WORDS][NUM_FIELDS] = {
	{"Glass", "I am either half empty or half full."},
	{"Ghost", "I am invisible, and I say Boo!"},
	{"Corner", "Go sit there, you're in trouble!"},
	{"Bacon", "What else do you pair with your eggs?"},
	{"Butter", "What do you put on your toast?"},
	{ "wall", "Do you feel you're banging your head against something?" },
	{"glasses", "These might help you see the answer."},
	{"labored", "Going slowly, is it?"},
	{"persistent", "Keep at it."},
	{"jumble", "It's what the game is all about."}
	};

	enum difficulty { EASY, MEDIUM, HARD, NUM_DIFF_LEVELS };
	cout << "There are " << NUM_DIFF_LEVELS << " difficulty levels.";

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; //word to guess
	string theHint = WORDS[choice][HINT]; //hint for word

	string jumble = theWord; //jumbled version of word
	int length = jumble.size();
	for (int i = 0; i < length; ++i)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "Enter 'Hint' for a hint. \n";
	cout << "Enter 'quit' to quit the game.\n\n";
	cout << "The jumble is: " << jumble;

	string guess;
	cout << "\n\n Your guess: ";
	cin >> guess;

	if (guess == theWord)
	{
		cout << " Input correct";
	}

	return 0;
}

