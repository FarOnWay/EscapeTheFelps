#ifndef LIFECONTROLLER_H
#define LIFECONTROLLER_H

class LifeController
{
    public:
        void takeDamage(int damage);
        void heal(int health);
        void die();
        
        int life;
        int maxLife;
        bool isDead;    
};
#endif