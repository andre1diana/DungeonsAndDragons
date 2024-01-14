#include"Logger.h"
#include"Character.h"
#include"PlayerCharacter.h"
#include"PlayerBuilder.h"
#include"Options.h"
#include"DnDGame.h"

int main()
{
	DnDGame::getInstance().play();

	return 0;
}