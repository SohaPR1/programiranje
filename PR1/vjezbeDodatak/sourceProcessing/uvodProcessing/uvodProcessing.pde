float rectX, rectY;  // Position of square button
color boja = color(15,50,150);

void setup() {
  size(860, 444);
  smooth();
  stroke(255,0,255);
  strokeWeight(1);
  rectX = width/2;
  rectY = height/2;
  
  
  rectMode(CENTER);
}

void draw() {
  background(255);
  fill(boja);

  iscrtajKockice();
}

void iscrtajKockice()
{
  for (int i = 0; i < 5; i++)
  {
  for (int j = 0; j < 5; j++)
  {
    rect(j*25+50,i*25+50,10,10);
  }
  }
}

void mousePressed() {
  
  if (preko()) {
  if (boja == color(15,50,150))
    boja = color(100,150,250);
  else
    boja = color(15,50,150);
  }

}

boolean preko() {
  if (mouseX > rectX-75 && mouseX < rectX + 75 && mouseY > rectY-25 && mouseY < rectY + 25)
  {
    return true;
  }
  else
    return false;
}

