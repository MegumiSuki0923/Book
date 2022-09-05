#include <iostream>
#include <string>
#include <cctype>

using namespace std;

const int NUM = 26;

const string wordlist[NUM] = {"apiary", "beetle", "cereal",
    "danger", "ensign", "florid", "garage", "health", "insult",
    "jackal", "keeper", "loaner", "manage", "nonce", "onset",
    "plaid", "quilt", "remote", "stolid", "train", "useful",
    "valid", "whence", "xenon", "yearn", "zippy"};

int main(void)
{
    char play;
    int guesses = 6;
    srand(time(0));

    cout << "Will you want to play the game? <y/n> ";
    cin >> play;
    play = tolower(play);

    while(play == 'y')
    {
        string target = wordlist[rand() % NUM];
        
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        cout << "Guess my secret word, it has " << length << " length letter, and you guess one letter at a time. You get " << guesses << " wrong guesses." << endl;

        cout << attempt << endl;
        while(target != attempt || guesses > 0)
        {
            char letter;

            cout << "Guess a letter: ";
            cin >> letter;
            if(badchars.find(letter) != string::npos && attempt.find(letter) != string::npos)
            {
                cout << "You have already guess that, try again." << endl;
                continue;
            }
            int loc = target.find(letter);
            if(target.find(letter) == string::npos)
            {
                guesses--;
                badchars += letter;
                cout << "Oops, bad guess!" << endl;
            }
            else
            {
                attempt[loc] = letter;
                cout << "Good guess!" << endl;
                loc = target.find(letter, loc+1);
                while(loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if(attempt != target)
            {
                if(badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guesses left." << endl;
            }
        }
        if(attempt == target && guesses > 0)
            cout << "You're great!" << endl;
        else
        {
            cout << "Sorry, the word is " << target << endl;
            cout << "Will you want to play again? <y/n>";
            cin >> play;
            play = tolower(play);
        }
    }
    return 0;
}