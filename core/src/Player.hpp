#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <vector>

class Player : public Entity {
    public:
        Player(unsigned int x, unsigned int y, unsigned int ch = '@', 
            const TCODColor &color = colors::player, std::string name = "Player", 
            bool blocks = true, bool canDie = true, 
            unsigned int fovRadius = 5, bool canExplore = true, 
            double maxHp = 100, double hp = 100, double maxMp = 100, 
            double mp = 100, double atk = 15, double defense = 7, 
            unsigned int spd = 1, unsigned int bagSize = 26);
        
        ~Player() {};
        
        void update();
        void die();
    
    protected:
        bool moveOrAttack(unsigned int target_x, unsigned int target_y);
        void handleActionKey(int key);
        Item* chooseFromInventory();
};

#endif
