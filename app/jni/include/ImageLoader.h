//
// Created by niroigen on 09/08/20.
//

#ifndef ANDROID_PROJECT_IMAGELOADER_H
#define ANDROID_PROJECT_IMAGELOADER_H

#include <SDL.h>
#include <SDL_image.h>
#include <string>

bool loadMedia(SDL_Surface*&, SDL_Surface*&, const std::string&);
SDL_Surface* loadSurface(SDL_Surface*&, const std::string& );

#endif //ANDROID_PROJECT_IMAGELOADER_H
