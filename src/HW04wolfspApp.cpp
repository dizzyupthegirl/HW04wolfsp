#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
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
}


void HW04wolfspApp::mouseDown( MouseEvent event )
{
}

void HW04wolfspApp::update()
{
}

void HW04wolfspApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( HW04wolfspApp, RendererGl )
