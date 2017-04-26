#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Scene.h"
#include "ofxFirstPersonCamera.h"

#define NMESH 5
#define NSCENE 5

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void meshSelectChanged(int & meshSelect);

    void gotMessage(ofMessage msg);
    Scene scenes[NSCENE];
    
    ofParameter<int> meshSelect;
    ofxPanel gui1;
    ofxPanel gui2;
    ofxPanel gui3;
    ofxFirstPersonCamera cam;
		
};
