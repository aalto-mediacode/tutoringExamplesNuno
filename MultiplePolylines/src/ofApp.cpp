#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    int NUM_LINES = ofRandom(2,4);
    cout << NUM_LINES << endl;
    for(int i=0;i<NUM_LINES;i++){
        ofPolyline newLine;
        newLine.addVertex(ofGetWidth()/2,ofGetHeight()/2);
        line.push_back(newLine);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    if(ofGetFrameNum()%60==0){
        for(int i=0;i<line.size();i++){
            line[i].addVertex(ofRandomWidth(),ofRandomHeight());
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0;i<line.size();i++){
        line[i].draw();
    }
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
