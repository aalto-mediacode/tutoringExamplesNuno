#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
//    ofRectangle newRectangle;
//    for(int i=0;i<1000;i++){
//        newRectangle.set(ofRandomWidth(),ofRandomHeight(),20,20);
//        myArea.push_back(newRectangle);
//    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    int size=20;
    float scaleX1=0.001;
    float scaleY1=0.002;
    float scaleX2=0.0001;
    float scaleY2=0.0002;
    float scaleX3=0.005;
    float scaleY3=0.007;
    float time=ofGetElapsedTimef();
    for(int x=0;x<ofGetWidth();x+=size){
        for(int y=0;y<ofGetHeight();y+=size){
            float noise1 = ofNoise(x*scaleX1, y*scaleY1+100,time*0.5);
            float noise2 = ofNoise(x*scaleX2+10000, y*scaleX2+1000,time*0.2);
            Cell myCell;
            //myCell.draw(x,y,noise2,size,255);
            //1st part: check if x and y are multiples of size*2
            //2nd part: check if x and y are multiples of size (and not size*2)
            if(((x%(size*2)==0&&y%(size*2)==0))||(x%(size*2)==size&&(y%(size*2)==size))){
                myCell.draw(x,y,noise1,size,255);
            }else{
                myCell.draw(x,y,noise2,size,255);
            }
        }
    }
    //create exclusion areas
    for(int x=0;x<ofGetWidth();x+=size){
        for(int y=0;y<ofGetHeight();y+=size){
            //the larger the variety, the smoother the edges of exclusion (try 1, 2, 3)
            int varietyNoise = 1;
            float noise3 = ofNoise(x*scaleX3+10000, y*scaleX3+1000,time*0.2)*varietyNoise;
            ofFill();
            noise3=round(noise3);
            ofSetColor(0,noise3*255/varietyNoise);
            ofDrawRectangle(x,y,size,size);
        }
    }
}

void ofApp::drawCells(){
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
