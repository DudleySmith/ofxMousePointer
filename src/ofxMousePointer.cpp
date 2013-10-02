//
//  ofxMousePointer.cpp
//  ofxMousePointer
//
//  Created by Dudley Smith on 01/10/13.
//
//

#include "ofxMousePointer.h"

//--------------------------------------------------------------
void ofxMousePointer::setup(){
    // Setup mouse positions --
    m_oPos.set(ofGetMouseX(), ofGetMouseY());
    // Register Events in this class
    hideCursor();
    //ofRegisterMouseEvents(this);
}


void ofxMousePointer::update(){
    // First, calculate velocity with old and new positions of mouse
    m_oVel = ofPoint(ofGetMouseX(), ofGetMouseY()) - m_oPos;
    // Second,
    m_oPos.set(ofGetMouseX(), ofGetMouseY());
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
    glutSetCursor(GLUT_CURSOR_NONE);
#endif
}

//------------------------------------------------------------
void ofxMousePointer::showCursor(){
#if defined(TARGET_OSX) && defined(MAC_OS_X_VERSION_10_7)
    CGDisplayShowCursor(NULL);
#else
    glutSetCursor(GLUT_CURSOR_LEFT_ARROW);
#endif
}
