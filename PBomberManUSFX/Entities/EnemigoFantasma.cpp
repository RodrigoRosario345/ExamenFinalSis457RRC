#include "EnemigoFantasma.h"

EnemigoFantasma::EnemigoFantasma(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer) : Enemy(_texture, _renderer)

{
    attackSpeed = 0.0045f;
}
//--------------------------------------------------------
shared_ptr<Enemy> EnemigoFantasma::clone()
{
    return shared_ptr<Enemy>(new EnemigoFantasma(*this));;
}
//-------------------------------------------------------------------