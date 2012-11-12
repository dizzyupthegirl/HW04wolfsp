#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "Starbucks.h"
#include "StarbucksWolf.h"
#include "cinder/gl/Texture.h"
#include <iostream>
#include <fstream>
#include <time.h>


using namespace ci;
using namespace ci::app;
using namespace std;

class HW04wolfspApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
	void prepareSettings(Settings* settings);
	gl::Texture* my_Texture;

private:
	
	StarbucksWolf* starbucks_;
	Surface* mySurface_;

	static const int appHeight = 600;
	static const int appWidth = 600;
	static const int surfaceSize = 1024;
};

void HW04wolfspApp::prepareSettings(Settings* settings)
{
	(*settings).setWindowSize(appWidth, appHeight);
	(*settings).setResizable(false);
}

void HW04wolfspApp::setup()
{
	cout << "Test" << endl;
	//Attemps to test, but won't print ro console for some dumb reason. 
	mySurface_ = new Surface(surfaceSize, surfaceSize, false);
	starbucks_ = new StarbucksWolf();
	Entry* cur_entry = starbucks_->getNearest(0.0, 0.0);
	console() << "Starbucks: " << cur_entry->identifier << ", X = " << cur_entry->x << ", Y = " << cur_entry->y << std::endl;
	/*
	cur_entry = starbucks_->getNearest(0.1, 0.1);
	console() << "Starbucks:" << cur_entry->identifier << ", X = " << cur_entry->x << ", Y = " << cur_entry->y;
	cur_entry = starbucks_->getNearest(0.2, 0.2);
	console() << "Starbucks:" << cur_entry->identifier << ", X = " << cur_entry->x << ", Y = " << cur_entry->y;
	cur_entry = starbucks_->getNearest(0.3, 0.3);
	console() << "Starbucks: " << cur_entry->identifier << ", X = " << cur_entry->x << ", Y = " << cur_entry->y;
	cur_entry = starbucks_->getNearest(0.4, 0.4);
	console() << "Starbucks: " << cur_entry->identifier << ", X = " << cur_entry->x << ", Y = " << cur_entry->y;
	cur_entry = starbucks_->getNearest(0.5, 0.5);
	console() << "Starbucks: " << cur_entry->identifier << ", X = " << cur_entry->x << ", Y = " << cur_entry->y;
	*/
	
}


void HW04wolfspApp::mouseDown( MouseEvent event )
{
}

void HW04wolfspApp::update() {
}

void HW04wolfspApp::draw() {
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}


CINDER_APP_BASIC( HW04wolfspApp, RendererGl )
