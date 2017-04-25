#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.setDistance(0);
    mesh2.setup("2.mp4", 0, 40, -1000, 0, 30, 0);
    mesh.setup("1.mp4", 0, 0, 0, 0, 0, 0);
    
    
    noiseParameterGroup.add(mesh.noiseParameters1);
    noiseParameterGroup.add(mesh.noiseParameters2);
    

    gui1.setup(noiseParameterGroup);
   	
	
}

//--------------------------------------------------------------
void ofApp::update(){
   	mesh.update();
    mesh2.update();


}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    ofBackground(0);
	mesh.draw();
    mesh2.draw();
    
    cam.end();
    gui1.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
