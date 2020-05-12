#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myPhoto.load("753px-Helsinki_July_2013-27a.jpg");
    myPhoto.resize(myPhoto.getWidth()/2,myPhoto.getHeight()/2);
    myPixels=myPhoto.getPixels();
    glitchPixels1.allocate(myPhoto.getWidth(), myPhoto.getHeight(), OF_PIXELS_RGB);
    glitchPixels2.allocate(myPhoto.getWidth(), myPhoto.getHeight(), OF_PIXELS_RGB);
    glitchPixels3.allocate(myPhoto.getWidth(), myPhoto.getHeight(), OF_PIXELS_RGB);
    myTexture1.allocate(glitchPixels1);
    myTexture2.allocate(glitchPixels2);
    myTexture3.allocate(glitchPixels3);
}

//--------------------------------------------------------------
void ofApp::update(){
    //getting all pixels (and inverting)
    for(int i=0;i<myPixels.size();i++){
        glitchPixels1[i]=255-myPixels[i];
    }
    //getting each channel
    for(int i=0;i<myPixels.size();i++){
        if(i%3==0){
            glitchPixels2[i]=0;
        }else{
            glitchPixels2[i]=myPixels[i];
        }
    }
    //getting each line
    for(int y=0;y<myPhoto.getHeight();y++){
        int width = myPhoto.getWidth()*3;
        for(int x=0;x<width;x++){
            if(y%10==0){
                glitchPixels3[y*width+x]=ofRandom(255);
            }else{
                glitchPixels3[y*width+x]=myPixels[y*width+x];
            }
        }
    }
    myTexture1.loadData(glitchPixels1);
    myTexture2.loadData(glitchPixels2);
    myTexture3.loadData(glitchPixels3);
}

//--------------------------------------------------------------
void ofApp::draw(){
    //original image
    ofSetColor(127);
    myPhoto.draw(0,0);
    //new version of the image
    myTexture1.draw(myPhoto.getWidth()+10,0);
    myTexture2.draw(0,myPhoto.getHeight()+10);
    myTexture3.draw(myPhoto.getWidth()+10,myPhoto.getHeight()+10);
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
