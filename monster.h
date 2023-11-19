#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class monster {
public:
    // Getter and Setter methods for monster attributes
    std::string getMonster1();
    void setMonster1(std::string monster1);

    int getm_Level();
    void setm_Level(int m_level);

    int getm_Hp();
    void setm_Hp(int m_hp);

    int getm_MHp();
    void setm_MHp(int m_Mhp);

    int getm_Ap();
    void setm_Ap(int m_Ap);

    int getm_Dp();
    void setm_Dp(int m_Dp);

    int getMexpr();
    void setMexpr(int mexpr);

private:
    // Private attributes of the monster class
    std::string monster1="Goblin";
    int m_level;
    int m_hp;
    int m_Mhp;
    int m_Ap;
    int m_Dp;
    int mexpr;
};

#endif 


