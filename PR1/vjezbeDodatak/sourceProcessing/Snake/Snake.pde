
int velicinaKockice = 25;
int brojKockica = 20;
ArrayList<Integer> x = new ArrayList<Integer> ();
ArrayList<Integer> y = new ArrayList<Integer> ();
int horizontala = 1;
int vertikala = 0;
int jabukaX;
int jabukaY;
int brzina = 20;
void setup ()
{
  jabukaX = (int)random(1,brojKockica);
  jabukaY = (int)random(1,brojKockica);
  x.add(5);
  y.add(5);
  x.add(6);
  y.add(5);
  x.add(7);
  y.add(5);
  size(brojKockica*velicinaKockice, brojKockica*velicinaKockice);
}

void draw ()
{
  background(255);
  for (int i = 0; i < brojKockica; i ++)
  {
      line(i*velicinaKockice,0,i*velicinaKockice,height);
      line(0,i*velicinaKockice,width,i*velicinaKockice);
  }
  fill(#90A0D4);
  if (frameCount % brzina == 0)
  {
    if ((x.get(x.size()-1) == jabukaX && (y.get(y.size()-1) == jabukaY )))
    {
          jabukaX = (int)random(1,brojKockica);
          jabukaY = (int)random(1,brojKockica);
          x.add (x.get(x.size()-1)+horizontala);
          y.add (y.get(y.size()-1)+vertikala);
          brzina--;
    }
    x.add (x.get(x.size()-1)+horizontala);
    x.remove(0);
    y.add (y.get(y.size()-1)+vertikala);
    y.remove(0);
  }
 for (int i = 0;i<x.size();i++)
  rect((x.get(i)-1)*velicinaKockice,(y.get(i)-1)*velicinaKockice,velicinaKockice,velicinaKockice);
  fill(#F5162C);
  rect((jabukaX-1)*velicinaKockice,(jabukaY-1)*velicinaKockice,velicinaKockice,velicinaKockice);
  
}

void keyPressed ()
{
  if (key == 'a')
  {
     horizontala=-1;
     vertikala=0;
  }
  if (key == 'd')
  {
     horizontala=1;
     vertikala=0;
  }
  if (key == 'w')
  {
     vertikala=-1;
     horizontala=0;
  }
  if (key == 's')
  {
     vertikala=1;
     horizontala=0;
  }
}
