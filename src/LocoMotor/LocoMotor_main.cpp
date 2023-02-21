// MiMotor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "OgreManager.h"
#include "AudioManager.h"

int exec();
int initBullet();

int main()
{
    AudioManager::Get()->AddSound("si", "si.wav");
    AudioManager::Get()->PlaySound("si");

    OgreWrapper::OgreManager::init("Prueba");
    OgreWrapper::OgreManager* man = OgreWrapper::OgreManager::getInstance();
    man->createScene("Escena");
    man->createScene("Escena2");

    OgreWrapper::Scene* x = man->getScene("Escenah");
    std::cout << (x == nullptr ? "null\n" : "jiji\n");
    //exec();
    initBullet();
    // exec();
    man->render();

    char basura;
    std::cin >> basura;
    return 0;
}
