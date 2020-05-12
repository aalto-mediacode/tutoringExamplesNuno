#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mySection1.setup();
    mySection2.setup();
    sectionNum = 1;
    sectionMax = 2;
}

//--------------------------------------------------------------
void ofApp::update(){
    switch (sectionNum) {
        case 1:
            mySection1.update();
            break;
        case 2:
            mySection2.update();
            break;
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    switch (sectionNum) {
        case 1:
            mySection1.draw();
            break;
        case 2:
            mySection2.draw();
            break;
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    sectionNum++;
    if(sectionNum>sectionMax) sectionNum=1;
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
