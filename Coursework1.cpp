#include <iostream>
#include "player.h"
#include "monster.h"

using namespace std;

// Global variables
int selection;
int selection2;
int selection3;
int selection4;
int selection5;
int command;
string r;
int maplevel;
bool back = true;


// Function to initialize player attributes
void InitialMenu(player& Player) {
    cout << "Please enter your name：" << endl;
    string name;
    cin >> name;
    Player.setName(name);
    do {
        cout << name << " " << "Please choose your role：" << endl;
        cout << "1.Warrior" << " " << "2.Mage" << " " << "3.Hunter\t" << endl;
        cin >> selection;
        cin.clear(); cin.ignore(100, '\n');

        switch (selection) {
        case 1:
            Player.setRole("Warrior");
            Player.setHp(400);
            Player.setMaxHp(400);
            Player.setAp(40);
            Player.setDp(40);
            back = false;
            break;
        case 2:
            Player.setRole("Mage");
            Player.setHp(300);
            Player.setMaxHp(300);
            Player.setAp(20);
            Player.setDp(40);
            back = false;
            break;
        case 3:
            Player.setRole("Hunter");
            Player.setHp(200);
            Player.setMaxHp(200);
            Player.setAp(40);
            Player.setDp(20);
            back = false;
            break;
        default:
            cout << "Enter error! Please enter again!" << endl;
        }
    } while (back);
}

// Function for the main menu
void MainMenu() {

    cout << "Welcome to Dark Island" << endl;
    cout << "Main Menu：" << endl;
    cout << "1. Attribute" << " " << "2.Map" << " " << "3.Quit\t" << endl;
    cin >> selection3;
    cin.clear(); cin.ignore(100, '\n');
}

// Function to show player attributes
void PersonAttribute(player& Player) {
    cout << "---------------------------------" << endl;
    cout << "Role-Attribute:" << endl;
    cout << "Name: " << Player.getName() << endl;
    cout << "Role: " << Player.getRole() << endl;
    cout << "Lev: " << Player.getLevel() << endl;
    cout << "Exp: " << Player.getexpr() << "/" << Player.getMaxexpr() << endl;
    cout << "Hp: " << Player.getHp() << "/" << Player.getMaxHp() << endl;
    cout << "Ap: " << Player.getAp() << endl;
    cout << "Dp: " << Player.getDp() << endl;
    cout << "---------------------------------" << endl;
}

// Function to choose the map
void ChooseMap() {
    cout << "Choose Map:" << endl;
    cout << "1.Dark Tower" << " " << "2.Return\t" << endl;
    cin >> selection4;
    cin.clear(); cin.ignore(100, '\n');
}

// Function to choose the map level
int ChooseMapLevel() {
    int maplevel;
    cout << "Please enter your map level![1 until 100]" << endl;
    cin >> maplevel;
    cin.clear();
    cin.ignore(100, '\n');
    return maplevel;
}

// Function to show monster data
void MonsterData(monster& Monster) {
    int m_hp;
    int m_Mhp;
    int m_Ap;
    int m_Dp;
    int mexpr;
    int m_level;
    if (maplevel == 100) {
        m_hp = maplevel * 100;
        Monster.setm_Hp(m_hp);
        m_Mhp = maplevel * 100;
        Monster.setm_MHp(m_Mhp);
        m_Ap = maplevel * 20;
        Monster.setm_Ap(m_Ap);
        m_Dp = maplevel * 20;
        Monster.setm_Dp(m_Dp);
        mexpr = maplevel * 100;
        Monster.setMexpr(mexpr);
        m_level = maplevel;
        Monster.setm_Level(m_level);
        cout << "<" << maplevel << " Floor" << ">\t" << endl;
        cout << "Dangerous! This level is BOSS which is very powerful!" << ">\t" << endl;
        cout << "---------------------------------" << endl;
        cout << "Name:" << Monster.getMonster1() << endl;
        cout << "Lev:" << Monster.getm_Level() << endl;
        cout << "Slime-Hp:" << Monster.getm_Hp() << "/" << Monster.getm_MHp() << endl;
        cout << "Slime-Ap:" << Monster.getm_Ap() << endl;
        cout << "Slime-Dp:" << Monster.getm_Dp() << endl;
        cout << "---------------------------------" << endl;
        cout << "1.Start" << " " << "2.Return\t" << endl;
    }
    else {
        m_hp = maplevel * 50;
        Monster.setm_Hp(m_hp);
        m_Mhp = maplevel * 50;
        Monster.setm_MHp(m_Mhp);
        m_Ap = maplevel * 2;
        Monster.setm_Ap(m_Ap);
        m_Dp = maplevel * 2;
        Monster.setm_Dp(m_Dp);
        mexpr = maplevel * 50;
        Monster.setMexpr(mexpr);
        m_level = maplevel;
        Monster.setm_Level(m_level);
        cout << "<" << maplevel << " Floor" << ">\t" << endl;
        cout << "---------------------------------" << endl;
        cout << "Name:" << Monster.getMonster1() << endl;
        cout << "Lev:" << Monster.getm_Level() << endl;
        cout << "Slime-Hp:" << Monster.getm_Hp() << "/" << Monster.getm_MHp() << endl;
        cout << "Slime-Ap:" << Monster.getm_Ap() << endl;
        cout << "Slime-Dp:" << Monster.getm_Dp() << endl;
        cout << "---------------------------------" << endl;
        cout << "1.Start" << " " << "2.Return\t" << endl;
    }
}

//Determine the damage suffered by the monster
void MWetherWounded(int RandomNumber, player& Player, monster& Monster) {
    int m_hp;
    if (Player.getAp() - Monster.getm_Dp() <= 0) {
        cout << Monster.getMonster1() << " hp-0" << endl;
        cout << "|||||||||||||||||||||||||||||||||" << endl;
    }
    else {
        if (RandomNumber == 1) {
            cout << Monster.getMonster1() << " hp-" << (Player.getAp() - (Monster.getm_Dp() / 2)) << endl;
            m_hp = Monster.getm_Hp() - (Player.getAp() - (Monster.getm_Dp() / 2));
            Monster.setm_Hp(m_hp);
            cout << "|||||||||||||||||||||||||||||||||" << endl;
        }
        else if (RandomNumber == 2) {
            cout << Monster.getMonster1() << " hp-" << (Player.getAp() - Monster.getm_Dp()) << endl;
            m_hp = Monster.getm_Hp() - (Player.getAp() - Monster.getm_Dp());
            Monster.setm_Hp(m_hp);
            cout << "|||||||||||||||||||||||||||||||||" << endl;
        }
    }

}

//Determine the damage suffered by the player
void PWetherWounded(player& Player, monster& Monster) {
    int hp;
    if (Monster.getm_Ap() - Player.getDp() <= 0) {
        cout << Player.getName() << " hp-0" << endl;
        cout << "|||||||||||||||||||||||||||||||||" << endl;
    }
    else {
        if (command == 1) {
            cout << Player.getName() << " hp-" << (Monster.getm_Ap() - Player.getDp() / 2) << endl;
            hp = Player.getHp() - (Monster.getm_Ap() - (Player.getDp() / 2));
            Player.setHp(hp);
            cout << "|||||||||||||||||||||||||||||||||" << endl;
        }
        else if (command == 2) {
            cout << Player.getName() << " hp-" << (Monster.getm_Ap() - Player.getDp()) << endl;
            hp = Player.getHp() - (Monster.getm_Ap() - Player.getDp());
            Player.setHp(hp);
            cout << "|||||||||||||||||||||||||||||||||" << endl;
        }
    }
}

//Random generate monster action instructions
void MonsterActionBuild(player& Player, monster& Monster) {

    int RandomNumber;
    srand((unsigned)time(NULL));
    RandomNumber = rand() % 2 + 1;
    if (command == 1) {
        switch (RandomNumber) {
        case 1:
            cout << Player.getName() << " choose attack--" << Monster.getMonster1() << endl;
            cout << Monster.getMonster1() << " choose attack--" << Player.getName() << endl;
            MWetherWounded(RandomNumber, Player, Monster);
            PWetherWounded(Player, Monster);
            break;
        case 2:
            cout << Player.getName() << " choose attack--" << Monster.getMonster1() << endl;
            cout << Monster.getMonster1() << " choose defense--" << Player.getName() << endl;
            MWetherWounded(RandomNumber, Player, Monster);
            PWetherWounded(Player, Monster);
            break;
        }
    }
    else if (command == 2) {
        switch (RandomNumber) {
        case 1:
            cout << Player.getName() << " choose defense--" << Monster.getMonster1() << endl;
            cout << Monster.getMonster1() << " choose attack--" << Player.getName() << endl;
            MWetherWounded(RandomNumber, Player, Monster);
            PWetherWounded(Player, Monster);
            break;
        case 2:
            cout << Player.getName() << " choose defense--" << Monster.getMonster1() << endl;
            cout << Monster.getMonster1() << " choose defense--" << Player.getName() << endl;
            cout << Monster.getMonster1() << " hp-0" << endl;
            cout << Player.getName() << " hp-0" << endl;
            cout << "|||||||||||||||||||||||||||||||||" << endl;
            break;
        }
    }
}


// Function for player and monster combat
void PVEFight(player& Player, monster& Monster) {
    cout << "<<<=========Start Fight======>>>" << endl;

    do {
        cout << "---------------------------------" << endl;
        cout << "Name: " << Player.getName() << endl;
        cout << "Hp: " << Player.getHp() << "/" << Player.getMaxHp() << endl;
        cout << "---------------------------------" << endl;
        cout << "VS" << endl;
        cout << "---------------------------------" << endl;
        cout << "Name:" << Monster.getMonster1() << endl;
        cout << "Slime-Hp:" << Monster.getm_Hp() << "/" << Monster.getm_MHp() << endl;
        cout << "---------------------------------" << endl;
        cout << "Please choose your command:" << endl;
        cout << "1.Attack" << " 2.Defense\t" << endl;
        cin >> command;
        if (command == 1) {
            MonsterActionBuild(Player, Monster);
        }
        else if (command == 2) {
            MonsterActionBuild(Player, Monster);
        }
        else {
            cout << "Command error! Please enter again!" << endl;
        }

    } while (!(Player.getHp() <= 0 || Monster.getm_Hp() <= 0));

}

// Function to display result after combat
void Result(player& Player, monster& Monster) {
    int expr = 0;
    int m_hp;
    if (maplevel == 100) {
        if (Player.getHp() <= 0) {
            cout << "You fail!" << endl;
            m_hp = Monster.getm_MHp();
            expr = Player.getexpr() + (maplevel * 20);
            Player.setexpr(expr);
        }
        else if (Monster.getm_Hp() <= 0) {
            cout << "Congratulations on finally defeating the monster Boss! You save the whole world!" << endl;
            expr = Player.getexpr() + Monster.getMexpr();
            Player.setexpr(expr);
        }
    }
    else {
        if (Player.getHp() <= 0) {
            cout << "You fail!" << endl;
            m_hp = Monster.getm_MHp();
            expr = Player.getexpr() + (maplevel * 10);
            Player.setexpr(expr);
        }
        else if (Monster.getm_Hp() <= 0) {
            cout << "You win!" << endl;
            expr = Player.getexpr() + Monster.getMexpr();
            Player.setexpr(expr);
        }
    }

}

// Function to check if the player should level up
void WhetherUplevel(player& Player, monster& Monster) {
    int level;
    int expr;
    int Maxexpr;
    int Maxhp;
    int hp;
    int Ap;
    int Dp;
    expr = Player.getexpr() + Monster.getMexpr();
    Player.setexpr(expr);
    if (Player.getexpr() >= Player.getMaxexpr()) {
        level = Player.getLevel() + 1;
        Player.setLevel(level);
        expr = Player.getexpr() - Player.getMaxexpr();
        Player.setexpr(expr);
        Maxexpr = Player.getMaxexpr() + (level * 100);
        Player.setMaxexpr(Maxexpr);
        Maxhp = Player.getMaxHp() + (level * 10);
        Player.setMaxHp(Maxhp);
        hp = Player.getHp() + (level * 10);
        Player.setHp(hp);
        Ap = Player.getAp() + (level * 10);
        Player.setAp(Ap);
        Dp = Player.getDp() + (level * 10);
        Player.setDp(Dp);
        hp = Player.getMaxHp();
        Player.setHp(hp);
    }
    else {
        hp = Player.getMaxHp();
        Player.setHp(hp);
    }

}

// Run all functions
int main()
{
    player Player;
    monster Monster;
    InitialMenu(Player);
    do {
        MainMenu();
        switch (selection3) {
        case 1:
            PersonAttribute(Player);
            cout << "Enter any values can return main menu!" << endl;
            cin >> r;
            break;
        case 2:
            ChooseMap();
            switch (selection4)
            {
            case 1:
                do {
                    maplevel = ChooseMapLevel();
                } while (maplevel < 1 || maplevel>100);

                if (maplevel <= 100) {
                    maplevel = maplevel;
                    MonsterData(Monster);
                    cin >> selection5;
                    if (selection5 == 1) {
                        PVEFight(Player, Monster);
                        Result(Player, Monster);
                        do {
                            WhetherUplevel(Player,Monster);
                        } while (Player.getexpr() >= Player.getMaxexpr());
                        cout << "Enter any values can return main menu!" << endl;
                        cin >> r;
                    }
                    else if (selection5 == 2) {
                    }
                }
                else {
                    cout << "Error! Please enter Right map level!" << endl;

                }

                break;
            case 2:

                break;
            default:
                cout << "Enter error! Please enter a valid option!" << endl;
                break;
            }
            break;
        case 3:
            cout << "See you!" << endl;
            return 0;
            break;
        }
    } while (true);

}
