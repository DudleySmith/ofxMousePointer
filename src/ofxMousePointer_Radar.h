//
//  ofxMousePointer_Radar.h
//  ofxMousePointer
//
//  Created by Dudley Smith on 02/10/13.
//
//

#pragma once

#include "ofxMousePointer.h"

class ofxMousePointer_Radar : public ofxMousePointer{

private:
    float m_fSize;
    
public:

    // Method for drawing something : mandatory
    void    draw() const;
    //
    void    setup(bool _isMousePointer, float _size = 0);
    
};
