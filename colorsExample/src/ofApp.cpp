#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    myColor[0].set(255,0,0);
    myColor[1].set(0,255,0);
    myColor[2].set(0,0,255);
    myColor[3].set(255,0,255);
    myColor[4].set(0,255,255);
    myColor[5].set(255,255,0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if(ofGetFrameNum()%60==0){
        color1=myColor[(int)ofRandom(6)];
    }
    ofSetColor(color1);
    ofDrawCircle(ofGetWidth()/2-200, ofGetHeight()/2, 300);
    if(ofGetFrameNum()%60==0){
        float hue = ofMap(mouseX,0,ofGetWidth(),0,255);
        color2.setHsb(hue,ofRandom(255),127);
    }
    ofSetColor(color2);
    ofDrawCircle(ofGetWidth()/2+200, ofGetHeight()/2, 300);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
