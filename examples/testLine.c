#include "../turtlec.h"



void tree(Turtle *t, float dist, int nivel);

int main(void){
  TurtleApp *app = turtleAppCreate(400, 200, "Test Line");

  if(app == NULL)
    return 1;

  Turtle *t = turtleAppGetTurtle(app);

  turtlePenUp(t);
  turtleGoTo(t, 100.0f,190.0f);
  turtlePenDown(t);

  turtleSetColor(t, 255, 100, 5);
  turtleSetSpeed(t, 1.0f);
  
  turtleLeft(t, 90.0f);
  
  tree(t, 70, 5);
  

  turtleAppRun(app);
  turtleAppDestroy(app);
  return 0;
}

void tree(Turtle *t, float dist, int ramas){
	if(ramas == 0){
		
		return ;
	}
	
	
	turtleForward(t, dist);
	turtleLeft(t, 30);	
	tree(t, dist / 1.9f, ramas -1);
	
	turtleRight(t, 60);
	tree(t, dist / 1.9f, ramas - 1);
	
	
	turtleLeft(t, 30);
	turtleBackward(t, dist);
}
























