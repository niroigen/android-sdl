//
// Created by niroigen on 09/08/20.
//

#ifndef ANDROID_PROJECT_FINGERMOTIONHANDLER_H
#define ANDROID_PROJECT_FINGERMOTIONHANDLER_H

#include <SDL.h>
void handleFingerMotion(const SDL_TouchFingerEvent&, bool (*)(const char*));

#endif //ANDROID_PROJECT_FINGERMOTIONHANDLER_H
