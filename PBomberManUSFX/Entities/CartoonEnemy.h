#pragma once
#include "Enemy.h"
class CartoonEnemy :
    public Enemy
{
public:
    CartoonEnemy(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer);
    
    
    //--------------------------------------------------------------------------
    GameEnemyType returnGameEnemyType() { return ENEMY_CARTOON; }
    shared_ptr<Enemy> clone();
};////---------------------------------------------------------