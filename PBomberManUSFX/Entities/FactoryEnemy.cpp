#include "FactoryEnemy.h"

//GameManager* FactoryEnemy::gameManager ;


//FactoryEnemy::FactoryEnemy() {
//	gameManager = GameManager::instance;
//	scaledTileSize = 32;
//}

shared_ptr<Enemy> FactoryEnemy::TipoFantasma1 = nullptr;
shared_ptr<Enemy> FactoryEnemy::TipoFantasma2 = nullptr;
shared_ptr<Enemy> FactoryEnemy::TipoFantasma3 = nullptr;
shared_ptr<Enemy> FactoryEnemy::TipoFantasma4 = nullptr;

//shared_ptr<Enemy> FactoryEnemy::tipoCartoon1 = nullptr;
//shared_ptr<Enemy> FactoryEnemy::tipoCartoon2 = nullptr;
//shared_ptr<Enemy> FactoryEnemy::tipoCartoon3 = nullptr;
//shared_ptr<Enemy> FactoryEnemy::tipoCartoon4 = nullptr;

/// aca clona y devuelve con este metodo

shared_ptr<Enemy> FactoryEnemy::getTipoFantasma1() 
{
	return TipoFantasma1->clone();
}

shared_ptr<Enemy> FactoryEnemy::getTipoFantasma2()
{
	return TipoFantasma2->clone();
}

shared_ptr<Enemy> FactoryEnemy::getTipoFantasma3()
{
	return TipoFantasma3->clone();
}

shared_ptr<Enemy> FactoryEnemy::getTipoFantasma4()
{
	return TipoFantasma4->clone();
}

//shared_ptr<Enemy> FactoryEnemy::getTipoCartoon1()
//{
//	return tipoCartoon1->clone();
//}
//
//shared_ptr<Enemy> FactoryEnemy::getTipoCartoon2()
//{
//	return tipoCartoon2->clone();
//}
//
//shared_ptr<Enemy> FactoryEnemy::getTipoCartoon3()
//{
//	return tipoCartoon3->clone();
//}
//
//shared_ptr<Enemy> FactoryEnemy::getTipoCartoon4()
//{
//	return tipoCartoon4->clone();
//}