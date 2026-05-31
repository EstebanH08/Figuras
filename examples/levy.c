#include "turtlec.h"
#include <math.h>


void levy(Turtle *turtle, float length, int depth);

int main(void) {
  TurtleApp *app = turtleAppCreate(400, 200, "Test Line");

  if(app == NULL)
    return 1;

  Turtle *turtle = turtleAppGetTurtle(app);

  turtlePenUp(turtle);
  turtleGoTo(turtle, 160.0f,120.0f);
  turtlePenDown(turtle);

  turtleSetColor(turtle, 255, 10, 5);
  turtleSetSpeed(turtle, 5.0f);
  
  levy(turtle, 80,8);
  

  turtleAppRun(app);
  turtleAppDestroy(app);
  return 0;

}



void levy ( Turtle * turtle , float length , int depth ) {
	if( depth == 0) {
		turtleForward ( turtle , length ) ;
		return ;
	}

	turtleLeft ( turtle , 30) ;
	levy ( turtle , length / sqrt (2) , depth - 1) ;

	turtleRight ( turtle , 90) ;
	levy ( turtle , length / sqrt (2) , depth - 1) ;

	turtleLeft ( turtle , 30) ;
}
