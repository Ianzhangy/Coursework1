#include "player.h"

std::string player::getName() {
    return name;
}

void player::setName(std::string name) {
    this->name = name;
}

std::string player::getRole() {
    return role;
}

void player::setRole(std::string role) {
    this->role = role;
}

int player::getLevel() {
    return level;
}

void player::setLevel(int level) {
    this->level = level;
}

int player::getHp() {
    return hp;
}

void player::setHp(int hp) {
    this->hp = hp;
}

int player::getMaxHp() {
    return Maxhp;
}

void player::setMaxHp(int Maxhp) {
    this->Maxhp = Maxhp;
}

int player::getexpr() {
    return expr;
}

void player::setexpr(int expr) {
    this->expr = expr;
}

int player::getMaxexpr() {
    return Maxexpr;
}

void player::setMaxexpr(int Maxexpr) {
    this->Maxexpr = Maxexpr;
}

int player::getAp() {
    return Ap;
}

void player::setAp(int Ap) {
    this->Ap = Ap;
}

int player::getDp() {
    return Dp;
}

void player::setDp(int Dp) {
    this->Dp = Dp;
}
