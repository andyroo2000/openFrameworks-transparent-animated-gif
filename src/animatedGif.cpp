//  animatedGif.cpp
//  slideshowDancing

#include "animatedGif.h"

AnimatedGif::AnimatedGif(string _imagePath, float _x, float _y)
{
    x = _x;
    y = _y;
    myImage.loadImage(_imagePath);
    
}

void AnimatedGif::setup() {
    currentTime = ofGetElapsedTimeMillis();
    savedTime = currentTime;
}

void AnimatedGif::update() {
    currentTime = ofGetElapsedTimeMillis();
    int passedTime = currentTime - savedTime;
    
    if (passedTime > totalTime) {
        xPositionOfSprite += incrementAmount;
        
        if (xPositionOfSprite >= incrementAmount * numberOfFrames) {
            xPositionOfSprite = 0;
        }
        
        savedTime = currentTime;
    }
}

void AnimatedGif::draw() {
    myImage.drawSubsection(x, y, w, h, xPositionOfSprite, yPositionOfSprite, sourceWidth, sourceHeight);
}

void AnimatedGif::setImagePath(string _imagePath) {
    myImage.loadImage(_imagePath);
}

void AnimatedGif::setDrawSubsectionParameters(float _x, float _y, float _w, float _h, float _xPositionOfSprite, float _yPositionOfSprite, float _sourceWidth, float _sourceHeight) {
    x = _x;
    y = _y;
    w = _w;
    h = _h;
    xPositionOfSprite = _xPositionOfSprite;
    yPositionOfSprite = _yPositionOfSprite;
    sourceHeight = _sourceHeight;
    sourceWidth = _sourceWidth;
}