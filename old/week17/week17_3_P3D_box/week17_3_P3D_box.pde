void setup(){
  size(400, 400, P3D);
}

void draw(){
  background(#FFFFF2);
  translate(width/2, height/2);
  translate(mouseX, mouseY);
  rotateY( radians(frameCount));
  box(100);
}
