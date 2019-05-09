#ifndef DANL_H
#define DANL_H

#include <GL/glx.h>
#include "fonts.h"
#include "Image.h"
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
        bool collisionCheck(float,float);
        void activatePowerUp();
        PowerUp(float,float);
};

extern std::vector<PowerUp> power_ups;

void powerUpPhysicsCheck(float, float);
void powerUpTimer(float, float);
void spawnPowerUp(int, float, float);
void destroyPowerUp(int);
void renderPowerUps();
void powerUpCollision(float, float);
void loadPowerUpImages();
unsigned char buildAlpha(Image);
extern void danL(float, float, GLuint);
extern GLuint powerUpTextures[3];
extern Image powerUpImage[3];

#endif