#include "ofApp.h"
#include "animatedGif.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSeedRandom();
    getImagePaths();
    
    // Get the center point of the screen for placing new images
    ofSetRectMode(OF_RECTMODE_CENTER); //set rectangle mode to the center
    screenWidth = ofGetScreenWidth();
    screenHeight = ofGetScreenHeight();
    screenVerticalCenter = screenWidth / 2;
    screenHorizontalCenter = screenHeight / 2;
    
    gif[0] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[1] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[2] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[3] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[4] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[5] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[6] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[7] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[8] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[9] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[10] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[11] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[12] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    gif[13] = new AnimatedGif(imagePaths[ofRandom(numOfImages)], ofRandom(screenWidth), ofRandom(screenVerticalCenter, screenHeight));
    
    setupAllGifs();
}

//--------------------------------------------------------------
void ofApp::update(){
    updateAllGifs();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    drawAllGifs();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // Set 'f' key to toggle fullscreen video
    if (key == 'f' ) {
        ofToggleFullscreen();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

//--------------------------------------------------------------
void ofApp::setupAllGifs() {
    // run setup function on each gif instance
    for (int i = 0; i < numOfImagesToDisplay; i++){
        gif[i]->setup();
    }
}


//--------------------------------------------------------------
void ofApp::updateAllGifs() {
    // run draw function on each gif instance
    for (int i = 0; i < numOfImagesToDisplay; i++){
        gif[i]->update();
    }
}

//--------------------------------------------------------------
void ofApp::drawAllGifs() {
    // run draw function on each gif instance
    for (int i = 0; i < numOfImagesToDisplay; i++){
        gif[i]->draw();
    }
}

//--------------------------------------------------------------
void ofApp::getImagePaths() {
    numOfImages = imageDirectory.listDir("images");
    
    for (int i = 0; i < numOfImages; i++) {
        imagePaths.push_back(imageDirectory.getPath(i));
    }
}

//--------------------------------------------------------------
void ofApp::setNewRandomImage(int index) {
    numOfImages = imageDirectory.listDir("images");
    
    for (int i = 0; i < numOfImages; i++) {
        imagePaths.push_back(imageDirectory.getPath(i));
    }
    
    gif[index]->setImagePath(imagePaths[ofRandom(numOfImages)]);
    
}






