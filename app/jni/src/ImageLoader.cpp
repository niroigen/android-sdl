//
// Created by niroigen on 09/08/20.
//

#include "../include/ImageLoader.h"

bool loadMedia(SDL_Surface*& gStretchedSurface, SDL_Surface*& gScreenSurface, const std::string& path)
{
	//Loading success flag
	bool success = true;

	//Load stretching surface
	gStretchedSurface = loadSurface(gScreenSurface, path);
	if( gStretchedSurface == NULL )
	{
		printf( "Failed to load stretching image!\n" );
		success = false;
	}

	return success;
}

SDL_Surface* loadSurface(SDL_Surface*& gScreenSurface, const std::string& path )
{
	//The final optimized image
	SDL_Surface* optimizedSurface = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
	if( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_Image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
	{
		//Convert surface to screen format
		optimizedSurface = SDL_ConvertSurface( loadedSurface, gScreenSurface->format, 0 );
		if( optimizedSurface == NULL )
		{
			printf( "Unable to optimize image %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	return optimizedSurface;
}