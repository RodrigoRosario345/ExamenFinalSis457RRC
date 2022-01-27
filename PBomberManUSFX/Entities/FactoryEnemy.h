#pragma once
//---------------------------------
#include "../Managers/AssetManager.h"
#include <SDL.h>
#include <memory>
#include <utility>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

#include "../Const.h"
//---------------------------------
#include "../Entities/Enemy.h"
#include "../Entities/EnemigoFantasma.h"
#include "../Entities/CartoonEnemy.h"
///--------------------

#include "../Entities/Music.h"
#include "../Entities/ClasicoPlayer.h"
#include "../Entities/Sound.h"
#include "../Entities/Text.h"
#include "../Scenes/Scene.h"
#include "../GameManager.h"
#include "../Managers/AssetManager.h"
#include "../GameAITypes.h"
#include "../GameTextures.h"
#include "../Factories/Factory.h"
//class GameManager;


class FactoryEnemy
{

	//GameManager* gameManager = nullptr;
	// enemy trabja con puro static porqu solo necista una copia
	//porque con esta unica opia no va trabajr sino servira como una plantilla para crear otra copia de esta 
private:
	static shared_ptr<Enemy> TipoFantasma1;
	static shared_ptr<Enemy> TipoFantasma2;
	static shared_ptr<Enemy> TipoFantasma3;
	static shared_ptr<Enemy> TipoFantasma4;

	//static shared_ptr<Enemy> tipoCartoon1;
	//static shared_ptr<Enemy> tipoCartoon2;
	//static shared_ptr<Enemy> tipoCartoon3;
	//static shared_ptr<Enemy> tipoCartoon4;

public:
	
	//FactoryEnemy();
	 static void  initialize()
	{
		
		auto TipoFantasma1 = new EnemigoFantasma((new AssetManager())->getTexture(GameTexture::Enemy2), nullptr);//crea alos objetos
		auto TipoFantasma2 = new EnemigoFantasma((new AssetManager())->getTexture(GameTexture::Enemy2), nullptr);
		auto TipoFantasma3 = new EnemigoFantasma((new AssetManager())->getTexture(GameTexture::Enemy2), nullptr);
		auto TipoFantasma4 = new EnemigoFantasma((new AssetManager())->getTexture(GameTexture::Enemy2), nullptr);
		
	/*	auto tipoCartoon1 = new CartoonEnemy((new AssetManager())->getTexture(GameTexture::Enemy3), nullptr);
		auto tipoCartoon2 = new CartoonEnemy((new AssetManager())->getTexture(GameTexture::Enemy3), nullptr);
		auto tipoCartoon3 = new CartoonEnemy((new AssetManager())->getTexture(GameTexture::Enemy3), nullptr);
		auto tipoCartoon4 = new CartoonEnemy((new AssetManager())->getTexture(GameTexture::Enemy3), nullptr);*/
	}

	 //aca implementamos este getipofantasma nos devolver un obejto 
	 //pero no el objeto que ha crado sino una copia entonces estos haras de clonar y devolver

	 static shared_ptr<Enemy> getTipoFantasma1();
	static shared_ptr<Enemy> getTipoFantasma2();
	static shared_ptr<Enemy> getTipoFantasma3();
	static shared_ptr<Enemy> getTipoFantasma4();
	
	//static shared_ptr<Enemy> getTipoCartoon1();
	//static shared_ptr<Enemy> getTipoCartoon2();
	//static shared_ptr<Enemy> getTipoCartoon3();
	//static shared_ptr<Enemy> getTipoCartoon4();
};

