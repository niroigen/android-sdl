//
// Created by niroigen on 09/08/20.
//

#include "../include/FingerMotionHandler.h"

void handleFingerMotion(const SDL_TouchFingerEvent& touchFingerEvent, bool (*loadMedia)(const char*)) {
	// Movement to the right
	if (touchFingerEvent.dx > 0) {
		loadMedia("right.bmp");
	}
		// Movement to the left
	else if (touchFingerEvent.dx < 0) {
		loadMedia("left.bmp");
	}
		// Movement up
	else if (touchFingerEvent.dy < 0) {
		loadMedia("up.bmp");
	}
		// Movement down
	else if (touchFingerEvent.dy > 0) {
		loadMedia("down.bmp");
	}
}