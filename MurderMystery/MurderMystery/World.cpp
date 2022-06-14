#include "World.h"
#include "Functions.h"
#include "Inventory.h"




World::World() 
{

	choice = 0;
	directionChoice;
	playing = true;
	fileName = "player-character.txt";
	ActualPos = 1;
	this->gotKey = false;
	deadEnemy = false;
	keyDropped = 0;
	gotBackpack = false;
	backpackContents;

}


//Functions

void World::initGame() {

	//ItemClassDebug
	//NotHollowItem i1("BodyArmor", false,true,false);
	//std::cout << i1.toString() << std::endl;

	/*Inventory inv;
	inv.addItem(NotHollowItem("Crowbar", false, false, true));
	inv.addItem(NotHollowItem("Bulletproof Vest", false, true, false));

	for (size_t i = 0; i < inv.size(); i++) {

		std::cout << inv[i].debugPrint() << std::endl;

	}*/

	//EnemyLogic

	/*enemy e(1);
	std::cout << e.getasstring() << std::endl;*/


		

	//ask for a character name on startup
	if(!gamePlayed){
	std::string name;
	std::cout << "Enter your character's name";
	getline(std::cin, name);

	player.initialize(name);
	gamePlayed = true;

	


	}
	else if (gamePlayed) {

		std::cout << "Continue?";

	}
	//


}

void World::mainGame()
{
	
	//Entity entity;
	//char movChoice[10];
	Inventory inv;
	if(ActualPos == 1){
	std::cout << "Welcome to Nocturnal" << std::endl << std::endl;
	std::cout << "You are detective investigating a murder on the Abercrombie mansion, right now you are in the front patio" << std::endl << std::endl;
	}

	std::cout << "Press 1 to go north" << std::endl;
	std::cout << "Press 2 to go east" << std::endl;
	std::cout << "Press 3 to go south" << std::endl;
	std::cout << "Press 4 to go west" << std::endl;
	std::cout << "Press 5 Take an item" << std::endl;
	std::cout << "Press 6 Drop an item" << std::endl;
	std::cout << "Press 7 Investigate(look)" << std::endl;
	std::cout << "Press 8 to see your character Stats" << std::endl;
	std::cout << "Press 9 to save" << std::endl;
	std::cout << "Press 0 to quit" << std::endl;

	std::cout << std::endl << "Choice: ";
	std::cin >> choice;
	//std::cin >> directionChoice;
	

	switch (ActualPos) {

	case 1:
		switch (choice)
		{
		case 0:
			playing = false;
			break;


		case 1:

			std::cout << "You enter  the mansion" << std::endl;
			ActualPos = 2;
			break;

		case 2:
			std::cout << "Cant go that way" << std::endl;

			break;

		case 3:

			std::cout << "Cant go that way" << std::endl;
			break;

		case 4:
			std::cout << "Cant go that way" << std::endl;

			break;

		case 5:
			if (keyDropped != 1) {
				std::cout << "You take the backpack" << std::endl;
				inv.addItem(NotHollowItem("Backpack", false, false, true));
			}
			else if (keyDropped == 1) {
				std::cout << "You take a key..." << std::endl;
				inv.addItem(NotHollowItem("Bedroom Key", false, false, true));
				gotKey = true;

			}
			break;

		case 6:
			inv.removeItem(3);

			std::cout << "You drop:" << std::endl;
			std::cout << inv[3].debugPrint() << std::endl;

			keyDropped = true;
			gotKey = false;

			break;

		case 7:

			if (keyDropped != 1) {
				std::cout << "Its a reception patio, before you stands Abercrombie Mansion, the inside seems weirdly lit" << std::endl;
			}
			else if (keyDropped == 1) {
				std::cout << "Its a reception patio, before you stands Abercrombie Mansion, the inside seems weirdly lit, there is a key on the floor"
					<< std::endl;

			}

			break;

		case 8:

			player.PrintStats();

			break;

		case 9:

			saveCharacter();
			break;



		default:
			break;
		}

		break;

	case 2:
		switch (choice)
		{
		case 0:
			playing = false;
			break;


		case 1:

			std::cout << "You walk up the stairs, into the upper level corridor" << std::endl;
			ActualPos = 7;
			break;

		case 2:
			std::cout << "You enter the living room" << std::endl;
			ActualPos = 3;
			break;

		case 3:

			std::cout << "You get outside into the patio" << std::endl;
			ActualPos = 1;
			break;

		case 4:
			std::cout << "You enter the kitchen" << std::endl;
			ActualPos = 4;
			break;

		case 5:
			if (keyDropped != 2) {
				std::cout << "There is nothing to take here" << std::endl;
			}
			else if (keyDropped == 2) {

				std::cout << "You take a key..." << std::endl;
				inv.addItem(NotHollowItem("Bedroom Key", false, false, true));
				gotKey = true;
			}
			break;

		case 6:
			inv.removeItem(3);

			std::cout << "You drop:" << std::endl;
			std::cout << inv[3].debugPrint() << std::endl;

			keyDropped = true;
			gotKey = false;


			break;

		case 7:
			if (keyDropped != 2) {
				std::cout << "the entrance to the mansion is adorned with many paintings,there is a backpack hanging from a hook." << std::endl;
			}
			else if (keyDropped == 2) {
				std::cout << "the entrance to the mansion is adorned with many paintings" << std::endl;
				std::cout << "the" << std::endl;

			}
			break;

		case 8:

			player.PrintStats();

			break;

		case 9:

			saveCharacter();
			break;



		default:
			break;
		}

		break;

	case 3:
		switch (choice)
		{
		case 0:
			playing = false;
			break;


		case 1:

			std::cout << "Cant go that way" << std::endl;
			break;

		case 2:
			std::cout << "You exit into the mansion's garden" << std::endl;
			ActualPos = 6;

			break;

		case 3:

			std::cout << "Cant go that way" << std::endl;
			break;

		case 4:
			std::cout << "You return to the entrance" << std::endl;
			ActualPos = 2;

			break;

		case 5:
			if (keyDropped != 3) {
				std::cout << "There is nothing to take here" << std::endl;
			}
			else if (keyDropped == 3) {

				std::cout << "You take a key..." << std::endl;
				inv.addItem(NotHollowItem("Bedroom Key", false, false, true));
				gotKey = true;
			}
			break;

		case 6:
			inv.removeItem(3);

			std::cout << "You drop:" << std::endl;
			std::cout << inv[3].debugPrint() << std::endl;

			keyDropped = true;
			gotKey = false;

			break;

		case 7:
			if (keyDropped != 3) {
				std::cout << "The room is quite big, it seems here is where the boy was found, it still smells of death" << std::endl;
				std::cout << "there is a door to the garden on the other side." << std::endl;
			}
			else if (keyDropped == 3) {

				std::cout << "The room is quite big, it seems here is where the boy was found, it still smells of death" << std::endl;
				std::cout << "there is a door to the garden on the other side." << std::endl;
				std::cout << "There is a key on the floor" << std::endl;
			}
			break;

		case 8:

			player.PrintStats();

			break;

		case 9:

			saveCharacter();
			break;





		default:
			break;
		}
		break;

	case 4:
		switch (choice)
		{
		case 0:
			playing = false;
			break;


		case 1:

			std::cout << "Cant go that way" << std::endl;
			break;

		case 2:
			std::cout << "You return to the entrance" << std::endl;
			ActualPos = 2;
			break;

		case 3:

			std::cout << "You exit into the service yard" << std::endl;
			ActualPos = 5;
			break;

		case 4:
			std::cout << "Cant go that way" << std::endl;

			break;

		case 5:
			if (keyDropped != 4) {
				std::cout << "There is nothing to take here" << std::endl;
			}
			else if (keyDropped == 4) {

				std::cout << "You take a key..." << std::endl;
				inv.addItem(NotHollowItem("Bedroom Key", false, false, true));
				gotKey = true;

			}
			break;

		case 6:
			inv.removeItem(3);

			std::cout << "You drop:" << std::endl;
			std::cout << inv[3].debugPrint() << std::endl;
			gotKey = false;
			keyDropped = true;
			gotKey = false;

			break;

		case 7:
			if (keyDropped != 4) {
				std::cout << "The kitchen smells terrible, it seems it wasnt cleaned in a century." << std::endl;
				std::cout << "There is a narrow door leading into the service patio." << std::endl;
			}
			else if (keyDropped == 4) {
				std::cout << "The kitchen smell terrible, it seems it wasnt cleaned in a century." << std::endl;
				std::cout << "There is a narrow door leading into the service patio." << std::endl;
				std::cout << "There is a key on the floor" << std::endl;

			}
			break;

		case 8:

			player.PrintStats();

			break;

		case 9:

			saveCharacter();
			break;



		default:
			break;
		}
		break;

	case 5:
		switch (choice)
		{
		case 0:
			playing = false;
			break;


		case 1:

			std::cout << "You enter into the kitchen" << std::endl;
			ActualPos = 4;
			break;

		case 2:
			std::cout << "Cant go that way" << std::endl;

			break;

		case 3:

			std::cout << "Cant go that way" << std::endl;

			break;

		case 4:
			std::cout << "Cant go that way" << std::endl;

			break;

		case 5:
			if (keyDropped != 5) {
				//std::cout << "You take the crowbar" << std::endl;
				std::cout << "You take the crowbar" << std::endl;
				inv.addItem(NotHollowItem("Crowbar", false, false, true));
				//entity.EventManager();
			}
			else if (keyDropped == 5) {

				std::cout << "You take a key..." << std::endl;
				inv.addItem(NotHollowItem("Bedroom Key", false, false, true));
				gotKey = true;
			}
			break;

		case 6:
			inv.removeItem(3);

			std::cout << "You drop:" << std::endl;
			std::cout << inv[3].debugPrint() << std::endl;

			keyDropped = true;
			gotKey = false;

			break;

		case 7:
			if (keyDropped != 5) {
				std::cout << "There is a crowbar lying next to the washmachine to the right" << std::endl;
			}
			else if (keyDropped == 5) {
				std::cout << "There is a crowbar lying next to the washmachine to the right" << std::endl;
				std::cout << "There is key on the floor" << std::endl;

			}
			break;

		case 8:

			player.PrintStats();

			break;

		case 9:

			saveCharacter();
			break;



		default:
			break;
		}
		break;

	case 6:
		switch (choice)
		{
		case 0:
			playing = false;
			break;


		case 1:

			std::cout << "Cant go that way" << std::endl;
			break;

		case 2:
			std::cout << "Cant go that way" << std::endl;

			break;

		case 3:

			std::cout << "Cant go that way" << std::endl;
			break;

		case 4:
			std::cout << "You enter into the living room" << std::endl;
			ActualPos = 3;
			break;

		case 5:
			if (keyDropped != 6) {
				
				std::cout << "You take a key from the dog house" << std::endl;
				this->gotKey = true;
				inv.addItem(NotHollowItem("Bedroom Key", false, false, true));
				
			}
			else if (keyDropped == 6) {

				std::cout << "You take a key..." << std::endl;
				gotKey = true;
				inv.addItem(NotHollowItem("Bedroom Key", false, false, true));
				
			}

			break;

		case 6:
			inv.removeItem(3);

			std::cout << "You drop:" << std::endl;
			std::cout << inv[3].debugPrint() << std::endl;

			keyDropped = true;
			gotKey = false;

			break;

		case 7:
			if (keyDropped != 6) {
				std::cout << "There is a small dog house in the garden, it seems like the is something shiny inside." << std::endl;
			}
			else if (keyDropped == 6) {
				std::cout << "There is a small dog house in the garden, it seems like the is something shiny inside." << std::endl;
				std::cout << "There is a key on the floor" << std::endl;

			}
			break;

		case 8:

			player.PrintStats();

			break;

		case 9:

			saveCharacter();
			break;



		default:
			break;
		}
		break;

	case 7:
		switch (choice)
		{
		case 0:
			playing = false;
			break;


		case 1:

			std::cout << "cant go that way" << std::endl;

			break; 

		case 2:
			if (this->gotKey) {
				
				std::cout << "you walk into the Master room" << std::endl;
				ActualPos = 8;
			}
			else if (!this->gotKey) {

				
				std::cout << "the door to the master bedroom is locked..." << std::endl;

			}

			break;

		case 3:

			std::cout << "you go down to the entrance" << std::endl;
			ActualPos = 2;
			break;

		case 4:
			std::cout << "you enter the secondary room" << std::endl;
			ActualPos = 9;
			break;

		case 5:
			if (keyDropped != 7) {
				std::cout << "There is nothing to take here" << std::endl;
			}
			else if (keyDropped == 7) {
				std::cout << "You take a key..." << std::endl;
				inv.addItem(NotHollowItem("Bedroom Key", false, false, true));
				gotKey = true;

			}
			break;

		case 6:
			inv.removeItem(3);

			std::cout << "You drop:" << std::endl;
			std::cout << inv[3].debugPrint() << std::endl;

			keyDropped = true;
			gotKey = false;
			break;

		case 7:
			if (keyDropped != 7) {
				std::cout << "You are in a long corridor with big doors on both sides" << std::endl;
			}
			else if (keyDropped == 7) {
				std::cout << "You are in a long corridor with big doors on both sides" << std::endl;
				std::cout << "There is a key on the floor" << std::endl;

			}
			break;

		case 8:

			player.PrintStats();

			break;

		case 9:

			saveCharacter();
			break;



		default:
			break;
		}
		break;

	case 8:
		switch (choice)
		{
		case 0:
			playing = false;
			break;


		case 1:

			std::cout << "Cant go that way" << std::endl;
			break;

		case 2:
			std::cout << "Cant go that way" << std::endl;

			break;

		case 3:

			std::cout << "Cant go that way" << std::endl;
			break;

		case 4:
			std::cout << "You return to the upper level corridor" << std::endl;
			ActualPos = 7;

			break;

		case 5:
			if (gotBackpack) {
				if (keyDropped != 8) {
					std::cout << "You take the diary" << std::endl;
					backpackContents.push_back("diary");
				}
			}
			else if (keyDropped == 8) {
				std::cout << "You take a key..." << std::endl;
				inv.addItem(NotHollowItem("Bedroom Key", false, false, true));
				gotKey = true;

			}
			break;

		case 6:
			inv.removeItem(3);

			std::cout << "You drop:" << std::endl;
			std::cout << inv[3].debugPrint() << std::endl;

			keyDropped = true;
			gotKey = false;

			break;

		case 7:
			if (keyDropped != 8) {
				std::cout << "There is a big bed on the side, its seems pretty normal" << std::endl;
			}
			else if (keyDropped == 8) {

				std::cout << "There is a big bed on the side, its seems preety normal" << std::endl;
				std::cout << "There is key on the floor" << std::endl;
			}
			break;

		case 8:

			player.PrintStats();

			break;

		case 9:

			saveCharacter();
			break;



		default:
			break;
		}
		break;

	case 9:
		switch (choice)
		{
		case 0:
			playing = false;
			break;


		case 1:

			std::cout << "Cant go that way" << std::endl;
			break;

		case 2:
			std::cout << "You return to the upper level corridor" << std::endl;
			ActualPos = 7;

			break;

		case 3:

			std::cout << "Cant go that way" << std::endl;
			break;

		case 4:
			std::cout << "Cant go that way" << std::endl;

			break;

		case 5:

			if (keyDropped != 9) {
				std::cout << "There is nothing to take" << std::endl;
			}
			else if (keyDropped == 9) {
				std::cout << "You take a key..." << std::endl;
				inv.addItem(NotHollowItem("Bedroom Key", false, false, true));
				gotKey = true;

			}

			break;

		case 6:
			inv.removeItem(3);

			std::cout << "You drop:" << std::endl;
			std::cout << inv[3].debugPrint() << std::endl;

			keyDropped = true;
			gotKey = false;

			break;

		case 7:
			if (keyDropped != 9) {
				std::cout << "There is a big smudge on the center of the floor, it reeks of blood" << std::endl;
			}
			else if (keyDropped == 9) {
				std::cout << "There is a big smudge on the center of the floor, it reeks of blood" << std::endl;
				std::cout << "There is key on the floor" << std::endl;
			
				break;
		}
	
	
		case 8:

			player.PrintStats();

			break;

		case 9:

			saveCharacter();
			break;



		default:
			break;
		}
		
		break;
	}

	



}

void World::saveCharacter() {

	std::ofstream outfile(fileName);

	if (outfile.is_open()) {

		outfile << player.getAsString();

	}

	outfile.close();
	std::cout << "Character Saved!" << std::endl << std::endl;

}

//void World::loadCharacter() {
//
//	std::ifstream inFile(fileName);
//
//	std::string name = "";
//	int ActualPos = 0;
//	int level = 0;
//	int exp = 0;
//	int expNext = 0;
//	int strength = 0;
//	int vitality = 0;
//
//
//	int hp = 0;
//	int stamina = 0;
//	int damageMIN = 0;
//	int damageMAX = 0;
//	int defence = 0;
//
//	int statPoints = 0;
//
//	
//	if (inFile.is_open())
//	{
//		while (inFile.eof) {
//
//			inFile >> name;
//			inFile >> ActualPos;
//			inFile >> level;
//			inFile >> exp;
//			inFile >> expNext;
//			inFile >> strength;
//			inFile >> vitality;
//			inFile >> hp;
//			inFile >> stamina;
//			inFile >> damageMIN;
//			inFile >> damageMAX;
//			inFile >> defence;
//			inFile >> statPoints;
//
//
//		
//		}
//
//
//	}
//
//	inFile.close();
//}

//void World::enemyEncounter() {
//
//	bool completed = false;
//
//	while (!completed) {
//
//
//	}
//
//}

void World::takeItem() {



}

 


//bool World::textCheck(std::vector<std::string>& intTxt)
//{
	//bool ret = true;

	//if (intTxt.size() > 0 && intTxt[0].length() > 0)
		//ret = PlayerMovement(intTxt);

	//GameLoop();

	//return ret;
//}

// World::PlayerMovement(std::vector<std::string>& inTxt) {

	//bool ret = true;

	//if (compTxt(inTxt[0], "investigate") || compTxt(inTxt[0], "i")) {

		//std::cout << "There is..." << std::endl;

	//}

	//if (compTxt(directionChoice, "investigate") || compTxt(directionChoice, "i")) {

		//std::cout << "There is..." << std::endl;

	//}
	

	//char movChoice[10]; 
	//if (strcmp(movChoice, "north") || strcmp(movChoice, "n") == 0) {

		//std::cout << "You move north" << std::endl;

	//}
	

	//return ret;

//}
