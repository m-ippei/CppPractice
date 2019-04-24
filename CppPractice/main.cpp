#include <iostream>

class Game
{
public:
	Game();
	void Initialize();
	void Run();
private:
	int HP;
	int MP;
};

Game::Game()
	:HP(100)
	, MP(50)
{

}

void Game::Initialize()
{
	std::cout << "Initialize" << std::endl;
}

void Game::Run()
{
	std::cout << HP << std::endl;
	std::cout << MP << std::endl;
}

int main(int argc, char** argv)
{
	Game game;
	game.Initialize();
	game.Run();
	return 0;
}

