//
//  ofxMousePointer_Radar.cpp
//  ofxMousePointer
//
//  Created by Dudley Smith on 02/10/13.
//
//

#include "ofxMousePointer_Radar.h"

// ------------------------------------------------------------
void ofxMousePointer_Radar::setup(float _size)
{
    ofxMousePointer::setup();
    m_fSize = _size;
}

// ------------------------------------------------------------
void ofxMousePointer_Radar::draw() const{
    ofPushStyle();
    
    ofNoFill();
    
    ofCircle(m_oPos, m_fSize+m_oVel.length());
    ofCircle(m_oPos, m_fSize-m_oVel.length());
    
    ofPopStyle();
}