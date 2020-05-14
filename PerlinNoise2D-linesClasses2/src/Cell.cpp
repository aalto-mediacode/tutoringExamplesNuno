#include "Cell.hpp"

//--------------------------------------------------------------
void Cell::setup(){

}

//--------------------------------------------------------------
void Cell::update(){

}

//--------------------------------------------------------------
void Cell::draw(float x, float y, float noise, float size, float alpha){
    ofSetColor(noise*255,noise*255,0, alpha);
    //RECTANGLE CODE - CREATES EACH 'CELL'
    ofRectangle myRectangle;
    myRectangle.set(x, y, size, size);
    glm::vec2 topRight={myRectangle.getRight(),myRectangle.getTop()};
    ofNoFill();
    //ofDrawRectangle(myRectangle);
    //CODE FOR THE LINES
    ofPushMatrix();
    ofTranslate(myRectangle.getCenter());//center of rectangle becomes (0,0)
    float myAngle = noise*360;
    //float myAngle = ofNoise(x*scaleX, y*scaleY+100,time)*360;
    ofRotateZDeg(myAngle);
    float extraLength=20;//this can be fixed or a proportion of rect (next line)
    //float extraLength=myRectangle.width/4;
    ofDrawLine(0,0,0+myRectangle.width/2+extraLength,0);//'1 arm' version
    //ofDrawLine(0-myRectangle.width/2,0,0+myRectangle.width/2,0);//'2 arms' version
    ofPopMatrix();
}
