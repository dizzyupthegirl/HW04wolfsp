#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HW04wolfspApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

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
