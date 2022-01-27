#pragma once
#include "Enemy.h"
#include "../GameTextures.h"
#include "../Entities/GameActor.h"
#include "../GameAITypes.h"
#include "../Entities/GameObject.h"

class EnemigoFantasma :
    public Enemy 
{
public:
    EnemigoFantasma(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer);
 //-----------------------------------------------------------------   
   GameEnemyType returnGameEnemyType() { return ENEMY_CLASICO;  }

    shared_ptr<Enemy> clone();
};//---------------------------------------------------------------------

