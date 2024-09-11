#ifndef ATTACKCONTROLLER_H
#define ATTACKCONTROLLER_H

/*
 this class will is used to deal damage, used by the player and the enemies
 but it is not necessary, we neede only to call the method takeDamage from the LifeController class
 but to better understand the code, we will use this class when dealing damage
 and takeDamage when taking damage
*/
class AttackController
{
   public:
    void dealDamage(int damage);

   private:
    int damage;
};
#endif