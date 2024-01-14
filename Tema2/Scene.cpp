#include "Scene.h"

void Scene::goNextRoom()
{
    currentRoom++;
}

Room* Scene::getCurrentRoom()
{
    return &rooms[currentRoom];
}
