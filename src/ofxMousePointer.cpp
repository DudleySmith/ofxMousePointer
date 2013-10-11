//
//  ofxMousePointer.cpp
//  ofxMousePointer
//
//  Created by Dudley Smith on 01/10/13.
//
//

#include "ofxMousePointer.h"

//--------------------------------------------------------------
void ofxMousePointer::setup(bool _isMousePointer){
    
    m_bIsMousePointer = _isMousePointer;
    
    // Setup mouse positions --
    if(m_bIsMousePointer){
        update();
        // Register Events in this class
        hideCursor();
    }else{
        update(ofPoint(0.5*ofGetWidth(), 0.5*ofGetHeight()));
    }

    //ofRegisterMouseEvents(this);
    
}


void ofxMousePointer::update(){

    if(m_bIsMousePointer)
        update(ofPoint(ofGetMouseX(), ofGetMouseY()));
    
}

void ofxMousePointer::update(ofPoint _newPos){
    
    // First, calculate velocity with old and new positions of mouse
    m_oVel = _newPos - m_oPos;
    // Second,
    m_oPos = _newPos;
    
}

void ofxMousePointer::move(ofVec3f _move){
    
    update(m_oPos + _move);
    
}

//We need to declare all this mouse events methods to be able to listen to mouse events.
//All this must be declared even if we are just going to use only one of this methods.
//--------------------------------------------------------------
void ofxMousePointer::mouseMoved(ofMouseEventArgs & args){

    m_oPos.set(ofGetMouseX(), ofGetMouseY());
    m_oVel = ofPoint(ofGetMouseX(), ofGetMouseY()) - ofPoint(ofGetPreviousMouseX(), ofGetPreviousMouseY());

}
//--------------------------------------------------------------
void ofxMousePointer::mouseDragged(ofMouseEventArgs & args){

}
//--------------------------------------------------------------
void ofxMousePointer::mousePressed(ofMouseEventArgs & args){

}
//--------------------------------------------------------------
void ofxMousePointer::mouseReleased(ofMouseEventArgs & args){

}

//------------------------------------------------------------
void ofxMousePointer::hideCursor(){
#if defined(TARGET_OSX) && defined(MAC_OS_X_VERSION_10_7)
    CGDisplayHideCursor(NULL);
#else
//    glutSetCursor(GLUT_CURSOR_NONE);
#endif
}

//------------------------------------------------------------
void ofxMousePointer::showCursor(){
#if defined(TARGET_OSX) && defined(MAC_OS_X_VERSION_10_7)
    CGDisplayShowCursor(NULL);
#else
   // glutSetCursor(GLUT_CURSOR_LEFT_ARROW);
#endif
}
