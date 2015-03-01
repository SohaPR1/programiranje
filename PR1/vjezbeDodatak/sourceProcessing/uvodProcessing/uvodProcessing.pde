int rectX, rectY;      // Position of square button

void setup() {
  size(640, 360);
  noStroke();
  rectX = width/2;
  rectY = height/2;
  
  
  rectMode(CENTER);
}

void draw() {
  background(255);
  fill(155);
  rect(rectX, rectY, 50,50);
}


void mousePressed() {

}

