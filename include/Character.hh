#include<iostream>

class Character
{
    private: //No es accesible
        //uint32_t es lo mismo que poner unsigned int
        short int health;
        uint32_t strength;
        uint32_t exp;
        short int luck;
        std::string lore;//not initial
        uint32_t speed;

        
    public: //Si es accesible
        //blueprints
        Character(short int, uint32_t, uint32_t, short int, uint32_t); //constructor: recibe parametros
        ~Character(); //destructor
        short int GetHealth() const;
        uint32_t GetStrenght() const;
        uint32_t GetExp() const;
        short int GetLuck() const;
        std::string GetLore() const;
        uint32_t GetSpeed() const;

        void SetLore(std::string);
        void GetDamage(short int damage);

};


