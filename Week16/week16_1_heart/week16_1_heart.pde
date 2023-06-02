size(400, 400);
fill(255, 0, 0);

noStroke();
for(int i=0; i<400; i++)
{
    for(int j=0; j<400; j++)
    {
        float x=(j-200)/100.0;
        float y=-(i-200)/100.0;
        float xxyy=(x*x+y*y-1);
        if(xxyy*xxyy*xxyy-x*x*y*y*y<0)
        {
          ellipse(j, i, 10, 10);
        }
    }
}
        
  
