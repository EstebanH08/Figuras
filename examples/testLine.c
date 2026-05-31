#include "../turtlec.h"



void tree(Turtle *t, float dist, int nivel);

int main(void){
  TurtleApp *app = turtleAppCreate(400, 200, "Test Line");

  if(app == NULL)
    return 1;

  Turtle *t = turtleAppGetTurtle(app);

  turtlePenUp(t);
  turtleGoTo(t, 200.0f,190.0f);
  turtlePenDown(t);

  turtleSetColor(t, 255, 10, 5);
  turtleSetSpeed(t, 5.0f);
  
  turtleLeft(t, 90.0f);
  
  tree(t, 60, 3);
  

  turtleAppRun(app);
  turtleAppDestroy(app);
  return 0;
}

void tree(Turtle *t, float length, int depth){
	if(depth == 0 || length < 5){
		return ;
	}
	
	if(depth > 2)
	       turtleSetColor(t, 111, 78, 50);
	else if(depth > 0)
		turtleSetColor(t, 134, 252, 0); 

	turtleForward(t, length);

	turtleLeft(t, 70);	
	tree(t, length * 0.4f, depth -1);

	turtleRight(t,70);
	tree(t, length * 0.4f, depth - 1);
	
	turtleRight(t, 70);
	tree(t, length * 0.4f, depth - 1);
	
	turtleLeft(t, 70);
	turtleBackward(t, length);

	if(depth > 2)
		turtleSetColor(t, 134, 78, 50);
	else if(depth > 0)
		turtleSetColor(t, 124, 252, 0);
}
