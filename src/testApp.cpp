#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	fbo.allocate(ofGetWidth(), ofGetHeight());
	// amount of pixels to lop off of video between screens, 
	// and number screens in each column/row
	bezel.setup(30.0f, 30.0f, 16, 16);
	player.initGrabber(640, 480);
	//player.play();
}

//--------------------------------------------------------------
void testApp::update(){
	player.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	fbo.begin();
	player.draw(0, 0, ofGetWidth(), ofGetHeight());
	fbo.end();
	bezel.draw(&fbo);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	// adjust bezel amount
	switch(key) {
		case OF_KEY_UP:
			bezel.setColumnSpacer(bezel.getColumnSpacer() + 1);
			break;
		case OF_KEY_DOWN:
			bezel.setColumnSpacer(bezel.getColumnSpacer() - 1);
			break;
		case OF_KEY_LEFT:
			bezel.setRowSpacer(bezel.getRowSpacer() + 1);
			break;
		case OF_KEY_RIGHT:
			bezel.setRowSpacer(bezel.getRowSpacer() - 1);
			break;
		case OF_KEY_RETURN:
			bezel.setDisplayHelper(!bezel.getDisplayHelper());
		default:
			break;
	}	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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