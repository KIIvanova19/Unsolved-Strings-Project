#include <iostream>
#include <iomanip>
#include <thread>
#include <string>
#include <stdio.h>

using namespace std;

/*
  bugs list:
  - continue() runs after chosen option to start the game
*/

//displays text letter by letter
void type_text(const string text)
{
    // loop through each character in the text
    for (size_t i = 0; i < text.length(); ++i)
    {
        // output one character
        // flush to make sure the output is not delayed
        cout << text[i] << flush;

        // sleep for 40 milliseconds
        this_thread::sleep_for(chrono::milliseconds(0));
    }
}

//displays menu content
void Menu() {
    cout << setw(62) << "Unsolved" << endl;
    cout << setw(66) << "----------------" << endl;
    cout << setw(60) << "Start" << endl;
    cout << setw(63) << "How To Play" << endl;
    cout << setw(59) << "Exit" << endl;
}

//starts game
void startGame() {

    type_text("On O'Connell Street, 15th Sept 2016, in one of the apartments, the neighbour of Fred Donelly - a man that has been living alone for many years and rarely goes out, this is at least how Mrs Weston described him (his neighbour), was killed.");
    
    cout << endl;
    type_text(" She sent a report to the police about a strange smell coming from his apartment. She also told them that he hasn't left his apartment for a week, but that was nothing new she said. The police went to his apartment and found the cause of the strange smell. Apparently, Mr Donelly has been killed. By the stab wounds, it was clear that it wasn't a suicide. They've been gathering evidence for three years now but the case has remained unsolved - why was he killed and who was the murderer. They needed help, so they asked you to investigate the case.");

    cout << endl;

    cout << setw(62) << "| 11 may 2019 |" << endl;

    cout << "You're in front of Mr Donelly's door. Open the door? (Enter either 'yes' or 'no')" << endl;
    string answerDoor;
    cin >> answerDoor;

    if (answerDoor == "yes")
    {
        cout << "*You open the door.*" << endl;
        type_text("As you enter the apartment you can smell a gross odor. His clothes and books, some random papers too were all over the place. Almost as he has never cleaned. By the interior you could tell that he was poor. You start to search for items that might help you with the investigation. On the table you see a laptop. You go and get it but it doesn't have any battery.") ;
        cout << endl;
        cout << "Do you want to charge the laptop? (Enter either 'yes' or 'no')" << endl;
        string answerLaptop;
        cin >> answerLaptop;

        if (answerLaptop == "yes")
        {
            type_text("You wait for the laptop to charge and then you turn it on. What do you do now? (Choose a number from 1 to 3)");
            cout << endl;
            cout << "1. use Google" << endl;
            cout << "2. look through his history" << endl;
            cout << "3. look through his computer files" << endl;

            int number;
            cin >> number;
            switch (number) {
            case 1: 
                type_text("You type some keywords to see if he has searched for a person, a weapon, anything that could be involved in the case. You don't find anything in particular so you decide to see who he has been texting. You find a person that he has been texting almost everyday - Emily Donelly. Apparently that is his daughter that studies at a university in London. He has been sending her money for her university so maybe that's why his apartment was in such a miserable state");
                cout << endl;
                break;
            case 2:
                type_text("You look through his history and you find out that he has been talking to somebody. He has been talking to Emily Donelly. Apparently that is his daughter that studies at a university in London. He has been sending her money for her university so maybe that's why his apartment was in such a miserable state.");
                cout << endl;
                break;
            case 3:
                type_text("You decide to look through his folders. Unfortunately there is nothing interesting.");
                cout << endl;
            }
            type_text("Close the laptop?");
            string answerClose;
            cin >> answerClose;
            if (answerClose == "yes") {
                type_text("There is nothing else in the room so you decide to go to his bedroom. You see a big pile of books on his bed.");
            }
            type_text("Do you want to look through them?");
            string answerBooks;
            cin >> answerBooks;
            if (answerBooks == "yes") {
                type_text("You read a few pages of one of the books and decide to look at the author's name. The author's name is Fred Donelly. You find out that he is a writer and that's why he almost never goes out. With the amount of money he has been making he had to choose wether to help his daughter out or take care of himself. The choice was obvious, he cared with all his heart for his daughter so he decided to help her out till she graduates, gets a job and comes back to him so they can meet after years of being seperated.");
                cout << endl;
                type_text("*You close the book*");
                cout << endl;
            }

            type_text("*You look through the room and find a note on the side of the bed*");
            cout << endl;
            type_text("Do you want to read it?");
            string answerRead;
            cin >> answerRead;
            if (answerRead == "yes") {
                type_text("The note says 'Don't forget to pay him back. Your daughter will be back soon'");
                cout << endl;
                type_text("Who was 'him' you wondered...");
            
            type_text("You search every nook and cranny. You find something under the bed. Do you reach and get it?");
            string getItem;
            cin >> getItem;
            if (getItem == "yes") {
                type_text("It's a diary! You flip through some of the pages: ");
                cout << endl;
                type_text("date: 2015 31st Dec");
                cout << endl;
                type_text("Right now Emily is probably having fun with her friends at campus. Another New Year's Eve without her. I miss having dinner together I can't wait to finally see her.");
                cout << endl;
                type_text("date: 2016 16st Jan");
                cout << endl;
                type_text("My new book got published today! I hope my readers like it.");
                cout << endl;
                type_text("date: 2016 28th May");
                cout << endl;
                type_text("Lately I've been busy, my book did so well! I was at book signing events. But today was a bit different. There is only one week before Emily's birthday. I got her a gift, I hope she likes it.");
                cout << endl;
                type_text("date: 2016 4th Jun");
                cout << endl;
                type_text("Today is Emily's birthday! We are meeting at our favourite restaurant at lunch. I shouldn't forget to give her the present");
                cout << endl;
                type_text("There is nothing else in the diary. It wasn't used often.");
                cout << endl;
            
            type_text("You decide to open the closet you saw earlier. There you find a safe. You try to open it but you have to enter a password.");
            cout << endl;
            string password;
            cin >> password;
            if (password== "04062019") {
                type_text("You successfully unlock the safe. You find some letters. Opening a few of them you realise that they are fan letters, though not any celebirty or person would like to receive these...they were death threats...");
                cout << endl;
                type_text("You decide to go to the adresses. You question the suspects. Here is all the information that you gathered:");
                cout << endl;
                type_text("First suspect - Loretta Millar");
                cout << endl;
                type_text("Loretta said that she had sent the dead threat because Fred Donnely ignored her. She has been a big fan of his books but when she went to meet him she was completely ignored. She said that he was rude to her and that she felt like he paid more attention to others than her.");
                cout << endl;
                type_text("Loretta's behavior during the questioning: a little nervous, hesitant to answer the question at first but then she opened up and gave straightforward answers.");
                cout << endl;
                cout << endl;
                type_text("Second suspect - Freddy Snow");
                cout << endl;
                type_text("Freddy said that he hates Fred's books because they didn't make sense. He has read every single of his books and disagrees with everything he has written, that's why he has such a strong opinion on him.");
                cout << endl;
                type_text("Freddy's behavior during the questioning: wasn't nervous and gave straightforward answers. He was pretty confident.");
                cout << endl;
                cout << endl;
                type_text("Third suspect - Chris Dickson");
                cout << endl;
                type_text("Chris said that he is also a writer. He assisted in writing one of Fred's books. The book became successful and Fred made a lot of money. Since Chris took part in making the book he wanted part of the money but Fred declined. Fred had told him that he had sent the money to his daughter.");
                cout << endl;
                type_text("Chris' behavior during the questioning: nervous and avoided eye contact.");
                cout << endl;
            type_text("Who do you think is the killer?");
            cout << endl;
            string chooseKiller;
            cin >> chooseKiller;
            if (chooseKiller == "Loretta Millar") {

            }
            if (chooseKiller == "Freddy Snow") {

            }

            if (chooseKiller == "Chris Dickson") {

            }

            if (chooseKiller == "Mrs Weston") {
            }
            }
            }
            }
        }
    }

}

void howToPlay() {
    cout << "The rules are simple. You have to pay attention to the story and take notes in order to find the murderer. You will have to either type yes or no to investigate the item or to pick it up. If you skip way too many items or don't pay " << endl;
    cout << "attention to the story the case will remain unsolved.";
}


bool Exit() {
    return 0;
}

void Continue(char cont, int choice) {
  cout << endl;
  cout << "Would you like to see something else? (y/n)";
  cin >> cont;



   if(cont == 'y') {
    Menu();

    cout << "Enter option number: ";
    cin >> choice;

   
    switch(choice) {



    case 2: {
      howToPlay();
      Continue(cont, choice);
     
      break;
    }

    case 3: {
      Exit();
      break;
    }

    default: {
      cout << "Something's wrong! Make sure you've entered a whole number (type int) from 1 to 4." << endl;
    }
    }

  }

   }

int main()
{
    Menu();
  
    int choice;
    char cont{};
    {
        cout << "Enter number: ";
        cin >> choice;
        cout << endl;
       
        switch (choice) {
        case 1: {
            startGame();
           
            break; 
        }
        case 2: {
            howToPlay();
            Continue(cont, choice);
            break;
        }
        case 3: {
            Exit();
            break;
        }
        default: {
            cout << "You should enter a number from 1-3";
        }
        }
    }
}