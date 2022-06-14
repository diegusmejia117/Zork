#include "Functions.h"
#include "Player.h"
#include <ctime>
#include <fstream>
#include <vector>




class World
{
public:
	World();

	//Variables
	 int ActualPos;
	 bool deadEnemy;
	 bool gotKey;
	 int keyDropped;
	 bool gotBackpack;
	 std::vector<std::string> backpackContents;
	//Operators



	//FunctionsTravel to (N-North/E-East/S-South/W-West)
	void mainGame();
	void initGame();
	void saveCharacter();
	//void loadCharacter();
	//void enemyEncounter();
	void takeItem();
	//bool textCheck(std::vector<std::string>& intTxt);
	//bool PlayerMovement(std::vector<std::string>& inTxt);
	//bool PlayerMovement(std::string);


	//Accesors

	inline bool getPlaying() const { return this->playing; }

	//Modifiers

	

private:

	int choice;
	
	std::string directionChoice;
	bool playing;
	bool gamePlayed = false;

	//CharacterRelated

	Player player;
	std::string fileName;
	

};

