#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "SDL/SDL_ttf.h"
#include "SDL/SDL_mixer.h"
#include "mini.h"
#include "min2.h"
int z,X;
mi minimap(perso p,mi m2)
{
X=p.pos[1].x;
m2.posmini.x=750+(X/20);
return m2;
}
