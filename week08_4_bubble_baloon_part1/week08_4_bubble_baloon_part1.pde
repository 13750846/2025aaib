//week08_4_bubble_baloon_part1
// 用mouse吹氣球
void setup(){
  size(400, 400); //大小
}
int x,y,s; //氣球的座標、氣球的大小
void draw(){
  background(255); //白色的背景
  ellipse(x,y-s/2,s*0.7, s);//瘦瘦的氣球，接觸下方
  if(mousePressed) s++;//一直壓著，才會打氣
}
void mousePressed(){ //按下mouse改變氣球的位置、大小
  x=mouseX;
  y=mouseY;
  s=1;
}
