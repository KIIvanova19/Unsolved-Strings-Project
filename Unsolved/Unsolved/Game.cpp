#include <iostream>
#include <iomanip>
#include <thread>
#include <string>
#include "Menus.h"
using namespace std;

//types text letter by letter
void type(const string text)
{
    // loop through each character in the text
    for (size_t i = 0; i < text.length(); ++i)
    {
        // output one character
        // flush to make sure the output is not delayed
        cout << text[i] << flush;

        // sleep for 20 milliseconds
        this_thread::sleep_for(chrono::milliseconds(20));
    }
}

//displays how to play rules text
void howToPlay() {
    cout << endl << flush;
    system("cls");
    type("The rules are simple. You have to pay attention to the story and take notes in order to find the murderer. You will have to either type yes or no to investigate the item or to pick it up. If you skip way too many items or don't pay attention to the story the case will remain unsolved.");
}

//exits program
bool exitGame() {
    return 0;
}

//starts game
void startGame() {
    cout << endl << flush;
    system("cls");

    system("Color 8F");
    type("On O'Connell Street, 15th Sept 2016, Fred Donelly - a man, who has lived alone for many years and rarely went out, or this is at least how Mrs Weston described him, his neighbour, was killed");

    cout << endl;
    cout << endl;
    int noAnswers = 0;
    int yesAnswers = 0;
    int rightAnswer = 0;

    type("She sent a report to the police about a strange smell coming from his apartment. She also told them that he hasn't left his apartment for a week, but that was nothing new she said. The police went to his apartment and found the cause of the strange smell. Apparently, Mr Donelly has been killed. By the stab wounds, it was clear that it wasn't a suicide. They've been gathering evidence for three years now but the case has remained unsolved - why was he killed and who was the murderer. They needed help, so they asked you to investigate the case.");
    cout << endl;
    cout << endl;

    cout << endl << flush;
    system("cls");

    cout << setw(65) << "| 11 may 2019 |" << endl;
    cout << endl;
    cout << "You're in front of Mr Donelly's door." << endl;

    cout << setw(62) << "*You open the door.*" << endl;
    type("As you enter the apartment you can smell a gross odor. His clothes and books, some random papers too were all over the place. Almost as he has never cleaned. By the interior you could tell that he was poor. You start to search for items that might help you with the investigation. On the table you see a laptop. You go and get it but it doesn't have any battery.");

    cout << endl;
    cout << endl;

    cout << setw(84) << "Do you want to charge the laptop? (Enter either 'yes' or 'no')" << endl;
    string answerLaptop;
    cin >> answerLaptop;

    cout << endl;
    if (answerLaptop == "no") {
        type("There is nothing else in the room so you decide to go to his bedroom. You see a big pile of books on his bed. ");
    }
    else if (answerLaptop == "yes")
    {
        yesAnswers++;
        type("You wait for the laptop to charge and then you turn it on. What do you do now? (Choose a number from 1 to 3)");
        cout << endl;

        cout << "1. use Google" << endl;
        cout << "2. look through his history" << endl;
        cout << "3. look through his computer files" << endl;

        cout << "Your choice: ";
        int number;
        cin >> number;

        cout << endl << flush;

        system("cls");

        switch (number) {
        case 1: {
            type("You type some keywords to see if he has searched for a person, a weapon, anything that could be involved in the case. You don't find anything in particular so you decide to see who he has been texting. You find a person that he has been texting almost everyday - Emily Donelly. Apparently that is his daughter that studies at a university in London. He has been sending her money for her university so maybe that's why his apartment was in such a miserable state");
            cout << endl;
            type("There is nothing else in the room so you decide to go to his bedroom. You see a big pile of books on his bed. ");
            system("pause");
            cout << endl << flush;
            system("cls");
            break;
        }

        case 2: {
            type("You look through his history and you find out that he has been talking to somebody. He has been talking to Emily Donelly. Apparently that is his daughter that studies at a university in London. He has been sending her money for her university so maybe that's why his apartment was in such a miserable state.");
            cout << endl;
            type("There is nothing else in the room so you decide to go to his bedroom. You see a big pile of books on his bed. ");
            system("pause");
            cout << endl << flush;
            system("cls");
            break;
        }

        case 3: {
            type("You decide to look through his folders. Unfortunately there is nothing interesting.");

            system("pause");
            cout << endl << flush;
            system("cls");
        }
              cout << setw(62) << "Close the laptop? (Enter either 'yes' or 'no')" << endl;
              string answerClose;
              cin >> answerClose;
              system("pause");
              cout << endl << flush;
              system("cls");

              if (answerClose == "yes") {
                  type("There is nothing else in the room so you decide to go to his bedroom. You see a big pile of books on his bed. ");
                  yesAnswers++;
              }

              else {
                  type("You continue to look through his laptop but find nothing interesting.");
                  type("You close the laptop");
                  type("There is nothing else in the room so you decide to go to his bedroom. You see a big pile of books on his bed. ");
                  noAnswers++;
              }

        }
    }


    cout << endl;
    cout << setw(62) << "Do you want to look through them? (Enter either 'yes' or 'no')" << endl;
    string answerBooks;
    cin >> answerBooks;
    if (answerBooks == "no") {

        cout << setw(62) << "*You look through the room and find a note on the side of the bed*" << endl;
        cout << endl;
        cout << setw(62) << "Do you want to read it? (Enter either 'yes' or 'no')" << endl;
        noAnswers++;
    }

    if (answerBooks == "yes") {
        cout << endl;
        type("You read a few pages of one of the books and decide to look at the author's name. The author's name is Fred Donelly. You find out that he is a writer and that's why he almost never goes out. With the amount of money he has been making he had to choose whether to help his daughter out or take care of himself. The choice was obvious, he cared with all his heart for his daughter so he decided to help her out till she graduates, gets a job and comes back to him so they can meet after years of being seperated.");
        cout << endl;
        yesAnswers++;
        cout << endl;
        cout << setw(72) << "*You close the book*" << endl;
        cout << setw(95) << "*You look through the room and find a note on the side of the bed*" << endl;

        cout << setw(89) << "Do you want to read it? (Enter either 'yes' or 'no')" << endl;
    }


    string answerRead;
    cin >> answerRead;

    cout << endl << flush;
    system("cls");

    if (answerRead == "no") {
        type("You search every nook and cranny. You find something under the bed.");
        cout << endl;
        cout << "Do you reach and get it? (Enter either 'yes' or 'no')";
        noAnswers++;
        string getItem;
        cin >> getItem;
    }

    else if (answerRead == "yes") {
        type("The note says 'Don't forget to pay him back. Your daughter will be back soon'");
        cout << endl;
        type("Who was 'him' you wondered...");
        yesAnswers++;
        type("You search every nook and cranny. You find something under the bed.");
        cout << endl;
        cout << "Do you reach and get it? (Enter either 'yes' or 'no')";
        string getItem;
        cin >> getItem;

        if (getItem == "no") {
            cout << "You don't find anything else in the house so you leave";
        }

        else if (getItem == "yes") {
            type("It's a diary! You flip through some of the pages: ");
            cout << endl << flush;
            system("cls");
            yesAnswers++;
            type("date: 2015 31st Dec");
            cout << endl;
            cout << "-----------------------";
            cout << endl;

            type("Right now Emily is probably having fun with her friends at campus. Another New Year's Eve without her. I miss having dinner together I can't wait to finally see her.");
            cout << endl;

            cout << endl;

            type("date: 2016 16st Jan");
            cout << endl;
            cout << "-----------------------";
            cout << endl;

            type("My new book got published today! I hope my readers like it.");
            cout << endl;

            cout << endl;

            type("date: 2016 28th May");
            cout << endl;
            cout << "-----------------------";
            cout << endl;

            type("Lately I've been busy, my book did so well! I was at book signing events. But today was a bit different. There is only one week before Emily's birthday. I got her a gift, I hope she likes it.");
            cout << endl;

            cout << endl;

            type("date: 2016 4th Jun");
            cout << endl;
            cout << "-----------------------";
            cout << endl;

            type("Today is Emily's birthday! I can't believe how much she's grown, turning 21 and becoming a fully responsible adult. We are meeting at our favourite restaurant at lunch. I shouldn't forget to give her the present.");
            cout << endl;

            type("There is nothing else in the diary. It wasn't used often.");
            cout << endl;
            system("pause");
            cout << endl << flush;
            system("cls");

            type("You decide to open the closet you saw earlier. There you find a safe. You try to open it but you have to enter a password.");

            cout << endl;

            cout << "The password consists of 8 digits, enter it here: " << endl;

            cout << endl;
            string password;
            cin >> password;

            cout << endl << flush;
            system("cls");

            if (password == "04061998") {
                type("You successfully unlock the safe. You find some letters. Opening a few of them you realise that they are fan letters, though not any celebirty or person would like to receive these...they were death threats...");
                cout << endl << flush;
                system("cls");

                type("You decide to go to the adresses. You question the suspects. Here is all the information that you gathered:");

                cout << endl << flush;
                system("cls");

                /* Loretta */

                type("First suspect - Loretta Millar");
                cout << endl;
                cout << "-----------------------";
                cout << endl;

                type("Loretta said that she had sent the dead threat because Fred Donnely ignored her. She has been a big fan of his books but when she went to meet him she was completely ignored. She said that he was rude to her and that she felt like he paid more attention to others than her.");
                cout << endl;

                type("Loretta's behavior during the questioning: a little nervous, hesitant to answer the question at first but then she opened up and gave straightforward answers.");
                cout << endl;
                cout << endl;

                /* Freddy */

                type("Second suspect - Freddy Snow");
                cout << endl;
                cout << "-----------------------";
                cout << endl;

                type("Freddy said that he hates Fred's books because they didn't make sense. He has read every single of his books and disagrees with everything he has written, that's why he has such a strong opinion on him.");
                cout << endl;

                type("Freddy's behavior during the questioning: wasn't nervous and gave straightforward answers. He was pretty confident.");
                cout << endl;
                cout << endl;

                /* Chris */

                type("Third suspect - Chris Dickson");
                cout << endl;
                cout << "-----------------------";
                cout << endl;

                type("Chris said that he is also a writer. He assisted in writing one of Fred's books. The book became successful and Fred made a lot of money. Since Chris took part in making the book he wanted part of the money but Fred declined. Fred had told him that he had sent the money to his daughter.");
                cout << endl;

                type("Chris' behavior during the questioning: nervous and avoided eye contact.");
                cout << endl << flush;
                system("pause");
                system("cls");

                type("Who do you think is the killer? (Type their first name or last name)");
                cout << endl;

                string chooseKiller;
                cin >> chooseKiller;

                if (chooseKiller == "Loretta" || chooseKiller == "Millar") {
                    noAnswers++;
                }
                else if (chooseKiller == "Freddy" || chooseKiller == "Snow") {
                    noAnswers++;
                }

                else if (chooseKiller == "Chris" || chooseKiller == "Dickson") {
                    rightAnswer++;
                }

                else if (chooseKiller == "Mrs" || chooseKiller == "Weston") {
                    noAnswers++;

                }

                while (chooseKiller != "Loretta" && chooseKiller != "Miller" && chooseKiller != "Freddy" && chooseKiller != "Chris" &&
                    chooseKiller != "Dickson" && chooseKiller != "Snow" && chooseKiller != "Mrs" && chooseKiller != "Weston") {
                    cout << "Character not in story. Try again: ";
                    cin >> chooseKiller;
                    if (chooseKiller == "Loretta" || chooseKiller == "Millar") {
                        noAnswers++;
                    }
                    else if (chooseKiller == "Freddy" || chooseKiller == "Snow") {
                        noAnswers++;
                    }

                    else if (chooseKiller == "Chris" || chooseKiller == "Dickson") {
                        rightAnswer++;
                    }

                    else if (chooseKiller == "Mrs" || chooseKiller == "Weston") {
                        noAnswers++;

                    }
                }
            }
            while (password != "04061998")
            {
                cout << "The password is incorrect: ";
                cin >> password;

                if (password == "04061998") {
                    type("You successfully unlock the safe. You find some letters. Opening a few of them you realise that they are fan letters, though not any celebirty or person would like to receive these...they were death threats...");
                    cout << endl << flush;
                    system("cls");

                    type("You decide to go to the adresses. You question the suspects. Here is all the information that you gathered:");

                    cout << endl << flush;
                    system("cls");

                    /* Loretta */

                    type("First suspect - Loretta Millar");
                    cout << endl;
                    cout << "-----------------------";
                    cout << endl;

                    type("Loretta said that she had sent the dead threat because Fred Donnely ignored her. She has been a big fan of his books but when she went to meet him she was completely ignored. She said that he was rude to her and that she felt like he paid more attention to others than her.");
                    cout << endl;

                    type("Loretta's behavior during the questioning: a little nervous, hesitant to answer the question at first but then she opened up and gave straightforward answers.");
                    cout << endl;
                    cout << endl;

                    /* Freddy */

                    type("Second suspect - Freddy Snow");
                    cout << endl;
                    cout << "-----------------------";
                    cout << endl;

                    type("Freddy said that he hates Fred's books because they didn't make sense. He has read every single of his books and disagrees with everything he has written, that's why he has such a strong opinion on him.");
                    cout << endl;

                    type("Freddy's behavior during the questioning: wasn't nervous and gave straightforward answers. He was pretty confident.");
                    cout << endl;
                    cout << endl;

                    /* Chris */

                    type("Third suspect - Chris Dickson");
                    cout << endl;
                    cout << "-----------------------";
                    cout << endl;

                    type("Chris said that he is also a writer. He assisted in writing one of Fred's books. The book became successful and Fred made a lot of money. Since Chris took part in making the book he wanted part of the money but Fred declined. Fred had told him that he had sent the money to his daughter.");
                    cout << endl;

                    type("Chris' behavior during the questioning: nervous and avoided eye contact.");
                    cout << endl << flush;
                    system("pause");
                    system("cls");

                    type("Who do you think is the killer? (Type their first name or last name)");
                    cout << endl;

                    string chooseKiller;
                    cin >> chooseKiller;

                    while (chooseKiller != "Loretta" && chooseKiller != "Miller" && chooseKiller != "Freddy" && chooseKiller != "Chris" &&
                        chooseKiller != "Dickson" && chooseKiller != "Snow" && chooseKiller != "Mrs" && chooseKiller != "Weston") {
                        cout << "Character not in story. Try again: ";
                        cin >> chooseKiller;
                        if (chooseKiller == "Loretta" || chooseKiller == "Millar") {
                            noAnswers++;
                        }
                        else if (chooseKiller == "Freddy" || chooseKiller == "Snow") {
                            noAnswers++;
                        }

                        else if (chooseKiller == "Chris" || chooseKiller == "Dickson") {
                            rightAnswer++;
                        }

                        else if (chooseKiller == "Mrs" || chooseKiller == "Weston") {
                            noAnswers++;

                        }
                    }
                }
            }
        }
    }


    if (noAnswers == 3) {
        cout << endl;
        cout << setw(60) << "The case remains unsolved." << endl;

        system("pause");
        cout << endl << flush;
        system("cls");

        Menu1 mc;
        mc.menu();

        int option;
        cin >> option;
        switch (option) {
        case 1:
            startGame();
            break;
        case 2:
            howToPlay();
            break;
        case 3:
            exitGame();
        default:cout << "Enter a number from 1-3";
        }
    }

    else if (yesAnswers > noAnswers && rightAnswer == 0) {
        cout << "You found lots of clues but you didn't find the murderer" << endl;

        system("pause");
        cout << endl << flush;
        system("cls");

        Menu1 mc;
        mc.menu();

        int option;
        cin >> option;
        switch (option) {
        case 1:
            startGame();
            break;
        case 2:
            howToPlay();
            break;
        case 3:
            exitGame();
        default:cout << "Enter a number from 1-3";
        }
    }

    else if (rightAnswer == 1) {
        cout << "You solved the case!" << endl;

        system("pause");
        cout << endl << flush;
        system("cls");

        SolveMenu mc;
        mc.menuSolved();

        int option;
        cin >> option;
        switch (option) {
        case 1:
            startGame();
            break;
        case 2:
            howToPlay();
            break;
        case 3:
            exitGame();
        }
    }

}

int main()
{
    Menu1 mc;
    mc.menu();
    cout << endl;
    cout << setw(66) << "Enter option: ";
    int option;
    cin >> option;
    switch (option) {
    case 1:
        startGame();
        break;
    case 2:
        howToPlay();
        break;
    case 3:
        exitGame();
        break;
    }

    while (option > 3) {
        cout << "Enter a number from 1-3: ";
        cin >> option;
        if (option <= 3) {
            switch (option) {
            case 1:
                startGame();
                break;
            case 2:
                howToPlay();
                break;
            case 3:
                exitGame();
                break;
            default:cout << "Enter a number from 1-3";
            }
        }
    }
}