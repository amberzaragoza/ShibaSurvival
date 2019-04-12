#ifndef joseph_h
#define joseph_h

#include<vector>
#include <GL/glx.h>
#include "fonts.h"
#include <stdlib.h>
#include <vector>
#include <stdio.h>
//#include "Image.h"
using namespace std;

typedef float Vec[3];

class JoeyGlobal{
public:

	float gameXresolution;
	float gameYresolution;
    
    static JoeyGlobal *instance;
    static JoeyGlobal *getInstance(){
        if(!instance){
            instance = new JoeyGlobal;
        }
        return instance;
    }
    JoeyGlobal(){
        gameXresolution = 1366;
		gameYresolution = 766;
    }
};


extern void josephS(float, float, GLuint);
void enemyGetResolution(float, float);

class Enemy{
public:
    float position[2];
    float velocity[2];
    float sideLength;
    float speed;
    int health;
    static int enemiesHitShiba;
    void drawEnemy();
    void updatePosition(float, float, int);
    void takeDamage(int);
    void shibaCollision(int);
    Enemy(float, float);
};




//int Enemy::enemiesHitShiba = 0;

extern std::vector<Enemy> enemies;

void createEnemy(int, float, float);
void destroyEnemy(int);
void renderEnemies();
void updateAllPosition(float, float);
void cleanupEnemies();


#endif

