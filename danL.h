#ifndef DANL_H
#define DANL_H

#include <GL/glx.h>
#include "fonts.h"
#include <stdlib.h>
#include <vector>
#include <stdio.h>

using namespace std;


class PowerUp{
    public:
        float position[2];
        int type;
        void drawPowerUp();
        void shibaCollision(int);
        PowerUp(float,float);
};

extern std::vector<PowerUp> powerups;

void powerUpPhysicsCheck(float, float);
void powerUpTimer(float, float);
void spawnPowerUp(int, float, float);
void destroyPowerUp(int);
void renderPowerUps();
void powerUpCollisionCheck(float, float);
extern void danL(float, float, GLuint);

#endif