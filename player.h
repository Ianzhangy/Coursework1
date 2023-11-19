#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class player {
public:
    // Getter and Setter methods for player attributes
    std::string getName();
    void setName(std::string name);

    std::string getRole();
    void setRole(std::string role);

    int getLevel();
    void setLevel(int level);

    int getHp();
    void setHp(int hp);

    int getMaxHp();
    void setMaxHp(int Maxhp);

    int getexpr();
    void setexpr(int expr);

    int getMaxexpr();
    void setMaxexpr(int Maxexpr);

    int getAp();
    void setAp(int Ap);

    int getDp();
    void setDp(int Dp);

private:
    // Private attributes of the player class
    std::string name;
    std::string role;
    int level = 1;
    int hp;
    int Maxhp;
    int expr = 0;
    int Maxexpr = 50;
    int Ap;
    int Dp;
};

#endif 


