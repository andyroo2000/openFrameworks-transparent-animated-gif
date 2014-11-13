//  animatedGif.h
//  slideshowDancing

#ifndef __slideshowDancing__animatedGif__
#define __slideshowDancing__animatedGif__

#include "ofMain.h"


class AnimatedGif {
    
public: // place public functions or variables declarations here
    
    // methods, equivalent to specific functions of your class objects
    void setup();
    void update();  // update method, used to refresh your objects properties
    void draw();    // draw method, this where you'll do the object's drawing
    
    
    // from animated gif
    ofImage myImage;
    
    int xPositionOfSprite = 0;
    
    int i = 0;
    float x = 0;
    float y = 0;
    int incrementAmount = 600;
    int numberOfFrames = 6;
    int savedTime = 0;
    int totalTime = 1;
    
    void setValueX(int _x);
    
    // constructor
    AnimatedGif(string _imagePath, float _x, float _y);
    
private: // place private functions or variables declarations here
};


#endif /* defined(__slideshowDancing__animatedGif__) */
