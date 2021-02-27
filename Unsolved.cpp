#include <iostream>
#include <iomanip>
#include <thread>
#include <string>
#include <stdio.h>
#include <Windows.h>

using namespace std;

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
		this_thread::sleep_for(chrono::milliseconds(20));
	}
}

void menu() {

	system("Color 8F");

	cout << setw(87) << " _    _ _   _  _____  ____  _ __      ________ _____  " << endl;
	cout << setw(87) << "| |  | | \\ | |/ ____|/ __ \\| |\\ \\    / /  ____|  __ \\ " << endl;
	cout << setw(87) << "| |  | |  \\| | (___ | |  | | | \\ \\  / /| |__  | |  | |" << endl;
	cout << setw(87) << "| |  | | . ` |\\___ \\| |  | | |  \\ \\/ / |  __| | |  | |" << endl;
	cout << setw(87) << "| |__| | |\\  |____) | |__| | |___\\  /  | |____| |__| |" << endl;
	cout << setw(87) << " \\____/|_| \\_|_____/ \\____/|______\\\/   |______|_____/ " << endl;

	cout << setw(71) << " _____________________" << endl;
	cout << setw(72) << "|                     |" << endl;
	cout << setw(72) << "|        START        |" << endl;
	cout << setw(72) << "|_____________________|" << endl;


	cout << setw(71) << " _____________________" << endl;
	cout << setw(72) << "|                     |" << endl;
	cout << setw(72) << "|     HOW TO PLAY     |" << endl;
	cout << setw(72) << "|_____________________|" << endl;

	cout << setw(71) << " _____________________" << endl;
	cout << setw(72) << "|                     |" << endl;
	cout << setw(72) << "|      EXIT GAME      |" << endl;
	cout << setw(72) << "|_____________________|" << endl;

}

void menuSolved() {
	cout << setw(83) << "_____   ____   _  __      __ ______  _____ " << endl;
	cout << setw(84) << " / ____| / __ \\ | | \\ \\    / /|  ____||  __ \\ " << endl;
	cout << setw(84) << "| (___  | |  | || |  \\ \\  / / | |__   | |  | |" << endl;
	cout << setw(84) << " \\___ \\ | |  | || |   \\ \\/ /  |  __|  | |  | |" << endl;
	cout << setw(84) << "  ___) || |__| || |____\\  /   | |____ | |__| |" << endl;
	cout << setw(84) << "|_____/  \\____/ |______|\\/    |______||_____/ " << endl;

	cout << setw(71) << " _____________________" << endl;
	cout << setw(72) << "|                     |" << endl;
	cout << setw(72) << "|        START        |" << endl;
	cout << setw(72) << "|_____________________|" << endl;


	cout << setw(71) << " _____________________" << endl;
	cout << setw(72) << "|                     |" << endl;
	cout << setw(72) << "|     HOW TO PLAY     |" << endl;
	cout << setw(72) << "|_____________________|" << endl;

	cout << setw(71) << " _____________________" << endl;
	cout << setw(72) << "|                     |" << endl;
	cout << setw(72) << "|      EXIT GAME      |" << endl;
	cout << setw(72) << "|_____________________|" << endl;

}

void howToPlay() {
	cout << endl << flush;
	system("cls");
	type_text("The rules are simple. You have to pay attention to the story and take notes in order to find the murderer. You will have to either type yes or no to investigate the item or to pick it up. If you skip way too many items or don't pay attention to the story the case will remain unsolved.");

}

bool exitGame() {
	return 0;
}

void startGame() {
	cout << endl << flush;
	system("cls");

	system("Color 8F");
	type_text("On O'Connell Street, 15th Sept 2016, in one of the apartments, the neighbour of Fred Donelly - a man that has been living alone for many years and rarely goes out, this is at least how Mrs Weston described him (his neighbour), was killed.");

	cout << endl;
	cout << endl;
	int noAnswers = 0;
	int yesAnswers = 0;
	int rightAnswer = 0;


	type_text("She sent a report to the police about a strange smell coming from his apartment. She also told them that he hasn't left his apartment for a week, but that was nothing new she said. The police went to his apartment and found the cause of the strange smell. Apparently, Mr Donelly has been killed. By the stab wounds, it was clear that it wasn't a suicide. They've been gathering evidence for three years now but the case has remained unsolved - why was he killed and who was the murderer. They needed help, so they asked you to investigate the case.");
	cout << endl;
	cout << endl;
	cout << setw(65) << "| 11 may 2019 |" << endl;
	cout << endl;
	cout << "You're in front of Mr Donelly's door. Open the door? (Enter either 'yes' or 'no')" << endl;

	string answerDoor;
	cin >> answerDoor;

	cout << endl << flush;
	system("cls");

	if (answerDoor == "yes")
	{
		yesAnswers++;
		cout << setw(62) << "*You open the door.*" << endl;
		type_text("As you enter the apartment you can smell a gross odor. His clothes and books, some random papers too were all over the place. Almost as he has never cleaned. By the interior you could tell that he was poor. You start to search for items that might help you with the investigation. On the table you see a laptop. You go and get it but it doesn't have any battery.");

		cout << endl;
		cout << endl;

		cout << setw(62) << "Do you want to charge the laptop? (Enter either 'yes' or 'no')" << endl;
		string answerLaptop;
		cin >> answerLaptop;

		cout << endl;
		if (answerLaptop == "no") {
			type_text("There is nothing else in the room so you decide to go to his bedroom. You see a big pile of books on his bed. ");
		}
		else if (answerLaptop == "yes")
		{
			yesAnswers++;
			type_text("You wait for the laptop to charge and then you turn it on. What do you do now? (Choose a number from 1 to 3)");
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
						type_text("You type some keywords to see if he has searched for a person, a weapon, anything that could be involved in the case. You don't find anything in particular so you decide to see who he has been texting. You find a person that he has been texting almost everyday - Emily Donelly. Apparently that is his daughter that studies at a university in London. He has been sending her money for her university so maybe that's why his apartment was in such a miserable state");

						cout << endl << flush;
						system("cls");
						break;
			}

			case 2: {
						type_text("You look through his history and you find out that he has been talking to somebody. He has been talking to Emily Donelly. Apparently that is his daughter that studies at a university in London. He has been sending her money for her university so maybe that's why his apartment was in such a miserable state.");

						cout << endl << flush;
						system("cls");
						break;
			}

			case 3: {
						type_text("You decide to look through his folders. Unfortunately there is nothing interesting.");

						cout << endl << flush;
						system("cls");
			}
			}

			cout << setw(62) << "Close the laptop? (Enter either 'yes' or 'no')" << endl;
			string answerClose;
			cin >> answerClose;

			cout << endl << flush;
			system("cls");

			if (answerClose == "yes") {
				type_text("There is nothing else in the room so you decide to go to his bedroom. You see a big pile of books on his bed. ");
				yesAnswers++;
			}

			else if (answerClose == "no") {
				type_text("You continue to look through his laptop but find nothing interesting.");
				type_text("You close the laptop");
				type_text("There is nothing else in the room so you decide to go to his bedroom. You see a big pile of books on his bed. ");
				noAnswers++;
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
				type_text("You read a few pages of one of the books and decide to look at the author's name. The author's name is Fred Donelly. You find out that he is a writer and that's why he almost never goes out. With the amount of money he has been making he had to choose whether to help his daughter out or take care of himself. The choice was obvious, he cared with all his heart for his daughter so he decided to help her out till she graduates, gets a job and comes back to him so they can meet after years of being seperated.");
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
				type_text("You search every nook and cranny. You find something under the bed.");
				cout << endl;
				cout << "Do you reach and get it? (Enter either 'yes' or 'no')";
				noAnswers++;
				string getItem;
				cin >> getItem;
			}

			else if (answerRead == "yes") {
				type_text("The note says 'Don't forget to pay him back. Your daughter will be back soon'");
				cout << endl;
				type_text("Who was 'him' you wondered...");
				yesAnswers++;
				type_text("You search every nook and cranny. You find something under the bed.");
				cout << endl;
				cout << "Do you reach and get it? (Enter either 'yes' or 'no')";
				string getItem;
				cin >> getItem;

				if (getItem == "no") {
					cout << "You don't find anything else in the house so you leave";
				}

				else if (getItem == "yes") {
					type_text("It's a diary! You flip through some of the pages: ");
					cout << endl << flush;
					system("cls");
					yesAnswers++;
					type_text("date: 2015 31st Dec");
					cout << endl;
					cout << "-----------------------";
					cout << endl;

					type_text("Right now Emily is probably having fun with her friends at campus. Another New Year's Eve without her. I miss having dinner together I can't wait to finally see her.");
					cout << endl;

					cout << endl;

					type_text("date: 2016 16st Jan");
					cout << endl;
					cout << "-----------------------";
					cout << endl;

					type_text("My new book got published today! I hope my readers like it.");
					cout << endl;

					cout << endl;

					type_text("date: 2016 28th May");
					cout << endl;
					cout << "-----------------------";
					cout << endl;

					type_text("Lately I've been busy, my book did so well! I was at book signing events. But today was a bit different. There is only one week before Emily's birthday. I got her a gift, I hope she likes it.");
					cout << endl;

					cout << endl;

					type_text("date: 2016 4th Jun");
					cout << endl;
					cout << "-----------------------";
					cout << endl;

					type_text("Today is Emily's birthday! I can't believe how much she's grown, turning 21 and becoming a fully responsible adult. We are meeting at our favourite restaurant at lunch. I shouldn't forget to give her the present.");
					cout << endl;

					type_text("There is nothing else in the diary. It wasn't used often.");
					cout << endl;
					system("pause");
					cout << endl << flush;
					system("cls");

					type_text("You decide to open the closet you saw earlier. There you find a safe. You try to open it but you have to enter a password.");

					cout << endl;

					cout << "The password consists of 8 digits, enter it here: " << endl;

					cout << endl;
					string password;
					cin >> password;

					cout << endl << flush;
					system("cls");

					while (password != "04061998")
					{
						cout << "The password is incorrect: ";
						cin >> password;
						if (password == "04061998") {
							type_text("You successfully unlock the safe. You find some letters. Opening a few of them you realise that they are fan letters, though not any celebirty or person would like to receive these...they were death threats...");
							cout << endl << flush;
							system("cls");

							type_text("You decide to go to the adresses. You question the suspects. Here is all the information that you gathered:");

							cout << endl << flush;
							system("cls");

							/* Loretta */

							type_text("First suspect - Loretta Millar");
							cout << endl;
							cout << "-----------------------";
							cout << endl;

							type_text("Loretta said that she had sent the dead threat because Fred Donnely ignored her. She has been a big fan of his books but when she went to meet him she was completely ignored. She said that he was rude to her and that she felt like he paid more attention to others than her.");
							cout << endl;

							type_text("Loretta's behavior during the questioning: a little nervous, hesitant to answer the question at first but then she opened up and gave straightforward answers.");
							cout << endl;
							cout << endl;

							/* Freddy */

							type_text("Second suspect - Freddy Snow");
							cout << endl;
							cout << "-----------------------";
							cout << endl;

							type_text("Freddy said that he hates Fred's books because they didn't make sense. He has read every single of his books and disagrees with everything he has written, that's why he has such a strong opinion on him.");
							cout << endl;

							type_text("Freddy's behavior during the questioning: wasn't nervous and gave straightforward answers. He was pretty confident.");
							cout << endl;
							cout << endl;

							/* Chris */

							type_text("Third suspect - Chris Dickson");
							cout << endl;
							cout << "-----------------------";
							cout << endl;

							type_text("Chris said that he is also a writer. He assisted in writing one of Fred's books. The book became successful and Fred made a lot of money. Since Chris took part in making the book he wanted part of the money but Fred declined. Fred had told him that he had sent the money to his daughter.");
							cout << endl;

							type_text("Chris' behavior during the questioning: nervous and avoided eye contact.");
							cout << endl << flush;
							system("pause");
							system("cls");

							type_text("Who do you think is the killer? (Type their first name or last name)");
							cout << endl;

							string chooseKiller;
							cin >> chooseKiller;
							string names[8] = { "Loretta", "Millar", "Freddy", "Chris", "Dickson", "Snow", "Mrs", "Weston" };

							while (chooseKiller != "Loretta" && chooseKiller != "Miller" && chooseKiller != "Freddy" && chooseKiller != "Chris" &&
								chooseKiller != "Dickson" && chooseKiller != "Snow" && chooseKiller != "Mrs" && chooseKiller != "Weston"){
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
		}
	}

	if (noAnswers == 3) {
		cout << endl;
		cout << setw(60) << "The case remains unsolved." << endl;
		system("pause");
		cout << endl << flush;
		system("cls");
		menu();
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
		menu();
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
		menuSolved();
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

}

int main()
{
	menu();
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