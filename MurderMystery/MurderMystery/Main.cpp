#include "World.h"
#include<vector>


//using namespace std;

int main() 
{
	std::vector<std::string> inTxt;
	inTxt.reserve(10);
	srand(time(NULL));
	
	World world;
	world.initGame();



	while (world.getPlaying())
	{
		inTxt.push_back("look");
		world.mainGame();
		//world.PlayerMovement(inTxt);

	}


	return 0;


}