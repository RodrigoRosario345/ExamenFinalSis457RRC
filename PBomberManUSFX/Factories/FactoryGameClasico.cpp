#include "FactoryGameClasico.h"

FactoryGameClasico::FactoryGameClasico() {
    gameManager = GameManager::instance;
    scaledTileSize = 32;
}

std::shared_ptr<GameObject> FactoryGameClasico::CreatePlayer(const int _positionX, const int _positionY)
{
    // spawn player
    auto player = std::make_shared<ClasicoPlayer>(gameManager->getAssetManager()->getTexture(GameTexture::Player), gameManager->getRenderer());
    player->setPosition(_positionX, _positionY);
    player->setSize(scaledTileSize, scaledTileSize);
    player->setClip(tileSize, tileSize, tileSize * 4, 0);

    return dynamic_pointer_cast<GameObject>(player);
}

//-------------------------------------------------------------------------------------------------
std::shared_ptr<GameObject> FactoryGameClasico::CreateEnemy(AIType _type, const int _positionX, const int _positionY)
{
    //shared_ptr<GameObject> enemy(nullptr);
    auto enemy = std::make_shared<EnemigoFantasma>(gameManager->getAssetManager()->getTexture(GameTexture::Enemy1), gameManager->getRenderer());
    enemy->setPosition(_positionX, _positionY);
    enemy->setSize(scaledTileSize, scaledTileSize);
    enemy->setAIType(_type);

    FactoryEnemy::initialize();
    std::shared_ptr<Enemy>  EnemyClonado;
    EnemyClonado = enemy->clone();
    if (EnemyClonado != nullptr) {
        //EnemyClonado->setVelocidad(0.0015f);
        std::cout << "Se ha clonado satisfactoriamente el enemigo 3" << std::endl;
        return dynamic_pointer_cast<GameObject>(EnemyClonado);
    }
    return dynamic_pointer_cast<GameObject>(enemy);
}
//-------------------------------------------------------------------------------
//std::shared_ptr<GameObject> FactoryGameClasico::CreateEnemyDarkFlash(AIType _type, const int _positionX, const int _positionY)
//{
//    //shared_ptr<GameObject> enemy(nullptr);
//    auto enemy2 = std::make_shared<ClasicoEnemy>(gameManager->getAssetManager()->getTexture(GameTexture::EnemyDarkFlash), gameManager->getRenderer());
//    enemy2->setPosition(_positionX, _positionY);
//    enemy2->setSize(scaledTileSize, scaledTileSize);
//    enemy2->setAIType(_type);
//
//    return dynamic_pointer_cast<GameObject>(enemy2);
//}
