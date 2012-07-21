#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MeteroidsApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void MeteroidsApp::setup()
{
}

void MeteroidsApp::mouseDown( MouseEvent event )
{
}

void MeteroidsApp::update()
{
}

void MeteroidsApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( MeteroidsApp, RendererGl )
