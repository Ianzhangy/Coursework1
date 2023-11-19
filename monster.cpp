#include "monster.h"

std::string monster::getMonster1() {
    return monster1;
}

void monster::setMonster1(std::string monster1) {
    this->monster1 = monster1;
}

int monster::getm_Level() {
    return m_level;
}

void monster::setm_Level(int m_level) {
    this->m_level = m_level;
}

int monster::getm_Hp() {
    return m_hp;
}

void monster::setm_Hp(int m_hp) {
    this->m_hp = m_hp;
}

int monster::getm_MHp() {
    return m_Mhp;
}

void monster::setm_MHp(int m_Mhp) {
    this->m_Mhp = m_Mhp;
}

int monster::getm_Ap() {
    return m_Ap;
}

void monster::setm_Ap(int m_Ap) {
    this->m_Ap = m_Ap;
}

int monster::getm_Dp() {
    return m_Dp;
}

void monster::setm_Dp(int m_Dp) {
    this->m_Dp = m_Dp;
}

int monster::getMexpr() {
    return mexpr;
}

void monster::setMexpr(int mexpr) {
    this->mexpr = mexpr;
}
