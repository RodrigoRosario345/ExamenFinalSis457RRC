#include "CartoonEnemy.h"

CartoonEnemy::CartoonEnemy(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer):Enemy(_texture, _renderer)
{
    //attackSpeed = 0.0005f;
}

//------------------------------------------------------
std:: shared_ptr<Enemy> CartoonEnemy::clone()
{
    return shared_ptr<Enemy>(new CartoonEnemy(*this));
}
//-----------------------------------------------------------