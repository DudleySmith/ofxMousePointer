//
//  ofxMousePointer.h
//  ofxMousePointer
//
//  Created by Dudley Smith on 01/10/13.
//
//

#pragma once

#include "ofMain.h"

class ofxMousePointer{
    
protected:
    ofPoint m_oPos;
    ofPoint m_oVel;

    void setup();
    
public:
    void update();
    
    //We need to declare all this mouse events methods to be able to listen to mouse events.
    //All this must be declared even if we are just going to use only one of this methods.
    void mouseMoved(ofMouseEventArgs & args);
    void mouseDragged(ofMouseEventArgs & args);
    void mousePressed(ofMouseEventArgs & args);
    void mouseReleased(ofMouseEventArgs & args);
    
    //------------------------------------------------------------
    void hideCursor();
    void showCursor();
   
    // TO INHERIT ------------------------------------------------------------
    virtual void    draw() const = 0;
    
};