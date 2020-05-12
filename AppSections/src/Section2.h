#pragma once

#include "ofMain.h"

class Section2{

    public:
    void setup(){
    }
    void update(){
    }
    void draw(){
        ofSetColor(0,0,255);
        ofDrawRectangle(300, 300, 200, 400);
        ofSetColor(255);
    }
    
    ofVideoPlayer myVideo;
};


