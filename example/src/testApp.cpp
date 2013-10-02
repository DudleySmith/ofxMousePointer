#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    m_oPointer.setup(10);
}

//--------------------------------------------------------------
void testApp::update(){
    m_oPointer.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    m_oPointer.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    ofLog() << "KEY PRESSED : " << key;

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}