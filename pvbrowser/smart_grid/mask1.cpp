////////////////////////////////////////////////////////////////////////////
//
// show_mask1 for ProcessViewServer
//
////////////////////////////////////////////////////////////////////////////
#include "pvapp.h"

// _begin_of_generated_area_ (do not edit -> use ui2pvc) -------------------

// our mask contains the following objects
enum {
  ID_MAIN_WIDGET = 0,
  table1,
  obj2,
  lifeCounter_PLC,
  readErrorCount_PLC,
  obj11,
  writeErrorCount_PLC,
  I_x,
  obj10,
  lifeCounter_SE,
  readErrorCount_SE,
  writeErrorCount_SE,
  lifeCounter_MATLAB,
  readErrorCount_MATLAB,
  writeErrorCount_MATLAB,
  Q1_G,
  V2,
  V1ph,
  P1_G,
  V2ph,
  V1,
  P2_G,
  Q2_G,
  obj12,
  V3,
  V3ph,
  P3_G,
  Q3_G,
  V4,
  V4ph,
  P45,
  Q45,
  P46,
  Q46,
  V5,
  V5ph,
  P5_L,
  Q5_L,
  V6,
  V6ph,
  P6_L,
  Q6_L,
  V7,
  V7ph,
  P78,
  Q78,
  P75,
  Q75,
  V8,
  V8ph,
  P8_L,
  Q8_L,
  V9,
  V9ph,
  P98,
  Q98,
  P96,
  Q96,
  ErrorSE,
  ID_END_OF_WIDGETS
};

// our mask contains the following widget names
  static const char *widgetName[] = {
  "ID_MAIN_WIDGET",
  "table1",
  "obj2",
  "lifeCounter_PLC",
  "readErrorCount_PLC",
  "obj11",
  "writeErrorCount_PLC",
  "I_x",
  "obj10",
  "lifeCounter_SE",
  "readErrorCount_SE",
  "writeErrorCount_SE",
  "lifeCounter_MATLAB",
  "readErrorCount_MATLAB",
  "writeErrorCount_MATLAB",
  "Q1_G",
  "V2",
  "V1ph",
  "P1_G",
  "V2ph",
  "V1",
  "P2_G",
  "Q2_G",
  "obj12",
  "V3",
  "V3ph",
  "P3_G",
  "Q3_G",
  "V4",
  "V4ph",
  "P45",
  "Q45",
  "P46",
  "Q46",
  "V5",
  "V5ph",
  "P5_L",
  "Q5_L",
  "V6",
  "V6ph",
  "P6_L",
  "Q6_L",
  "V7",
  "V7ph",
  "P78",
  "Q78",
  "P75",
  "Q75",
  "V8",
  "V8ph",
  "P8_L",
  "Q8_L",
  "V9",
  "V9ph",
  "P98",
  "Q98",
  "P96",
  "Q96",
  "ErrorSE",
  "ID_END_OF_WIDGETS",
  ""};

  static const char *toolTip[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const char *whatsThis[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const int widgetType[ID_END_OF_WIDGETS+1] = {
  0,
  TQTable,
  TQLabel,
  TQLabel,
  TQLabel,
  TQPushButton,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLCDNumber,
  -1 };

static int generated_defineMask(PARAM *p)
{
  int w,h,depth;

  if(p == NULL) return 1;
  if(widgetName[0] == NULL) return 1; // suppress unused warning
  w = h = depth = strcmp(toolTip[0],whatsThis[0]);
  if(widgetType[0] == -1) return 1;
  if(w==h) depth=0; // fool the compiler
  pvStartDefinition(p,ID_END_OF_WIDGETS);

  pvQTable(p,table1,0,5,3);
  pvSetGeometry(p,table1,10,60,381,192);
  pvSetFont(p,table1,"Roboto",12,0,0,0,0);
  pvSetMinSize(p,table1,100,30);

  pvQLabel(p,obj2,0);
  pvSetGeometry(p,obj2,10,10,375,40);
  pvSetText(p,obj2,pvtr("Relay Monitoring"));
  pvSetFont(p,obj2,"Sans Serif",16,1,0,0,0);

  pvQLabel(p,lifeCounter_PLC,0);
  pvSetGeometry(p,lifeCounter_PLC,400,60,220,30);
  pvSetText(p,lifeCounter_PLC,pvtr("Label"));
  pvSetFont(p,lifeCounter_PLC,"Sans Serif",10,0,0,0,0);

  pvQLabel(p,readErrorCount_PLC,0);
  pvSetGeometry(p,readErrorCount_PLC,400,90,220,30);
  pvSetText(p,readErrorCount_PLC,pvtr("Label"));
  pvSetFont(p,readErrorCount_PLC,"Sans Serif",10,0,0,0,0);

  pvQPushButton(p,obj11,readErrorCount_PLC);
  pvSetGeometry(p,obj11,417,75,99,30);
  pvSetText(p,obj11,pvtr("PushButton"));

  pvQLabel(p,writeErrorCount_PLC,0);
  pvSetGeometry(p,writeErrorCount_PLC,400,120,220,30);
  pvSetText(p,writeErrorCount_PLC,pvtr("Label"));
  pvSetFont(p,writeErrorCount_PLC,"Sans Serif",10,0,0,0,0);

  pvQLabel(p,I_x,0);
  pvSetGeometry(p,I_x,10,260,400,30);
  pvSetText(p,I_x,pvtr("Label"));
  pvSetFont(p,I_x,"Arial",14,1,0,0,0);

  pvQLabel(p,obj10,0);
  pvSetGeometry(p,obj10,10,300,400,30);
  pvSetText(p,obj10,pvtr("Monitoring Values (p.u)"));
  pvSetFont(p,obj10,"Sans Serif",16,1,1,0,0);

  pvQLabel(p,lifeCounter_SE,0);
  pvSetGeometry(p,lifeCounter_SE,400,160,220,30);
  pvSetText(p,lifeCounter_SE,pvtr("Label"));
  pvSetFont(p,lifeCounter_SE,"Sans Serif",10,0,0,0,0);

  pvQLabel(p,readErrorCount_SE,0);
  pvSetGeometry(p,readErrorCount_SE,400,190,220,30);
  pvSetText(p,readErrorCount_SE,pvtr("Label"));
  pvSetFont(p,readErrorCount_SE,"Sans Serif",10,0,0,0,0);

  pvQLabel(p,writeErrorCount_SE,0);
  pvSetGeometry(p,writeErrorCount_SE,400,220,220,30);
  pvSetText(p,writeErrorCount_SE,pvtr("Label"));
  pvSetFont(p,writeErrorCount_SE,"Sans Serif",10,0,0,0,0);

  pvQLabel(p,lifeCounter_MATLAB,0);
  pvSetGeometry(p,lifeCounter_MATLAB,650,60,220,30);
  pvSetText(p,lifeCounter_MATLAB,pvtr("Label"));
  pvSetFont(p,lifeCounter_MATLAB,"Sans Serif",10,0,0,0,0);

  pvQLabel(p,readErrorCount_MATLAB,0);
  pvSetGeometry(p,readErrorCount_MATLAB,650,90,220,30);
  pvSetText(p,readErrorCount_MATLAB,pvtr("Label"));
  pvSetFont(p,readErrorCount_MATLAB,"Sans Serif",10,0,0,0,0);

  pvQLabel(p,writeErrorCount_MATLAB,0);
  pvSetGeometry(p,writeErrorCount_MATLAB,650,120,220,30);
  pvSetText(p,writeErrorCount_MATLAB,pvtr("Label"));
  pvSetFont(p,writeErrorCount_MATLAB,"Sans Serif",10,0,0,0,0);

  pvQLabel(p,Q1_G,0);
  pvSetGeometry(p,Q1_G,10,440,200,30);
  pvSetText(p,Q1_G,pvtr("Label"));
  pvSetFont(p,Q1_G,"Roboto",12,0,0,0,0);

  pvQLabel(p,V2,0);
  pvSetGeometry(p,V2,10,470,200,30);
  pvSetText(p,V2,pvtr("Label"));
  pvSetFont(p,V2,"Roboto",12,0,0,0,0);

  pvQLabel(p,V1ph,0);
  pvSetGeometry(p,V1ph,10,380,200,30);
  pvSetText(p,V1ph,pvtr("Label"));
  pvSetFont(p,V1ph,"Roboto",12,0,0,0,0);

  pvQLabel(p,P1_G,0);
  pvSetGeometry(p,P1_G,10,410,200,30);
  pvSetText(p,P1_G,pvtr("Label"));
  pvSetFont(p,P1_G,"Roboto",12,0,0,0,0);

  pvQLabel(p,V2ph,0);
  pvSetGeometry(p,V2ph,10,500,200,30);
  pvSetText(p,V2ph,pvtr("Label"));
  pvSetFont(p,V2ph,"Roboto",12,0,0,0,0);

  pvQLabel(p,V1,0);
  pvSetGeometry(p,V1,10,350,200,30);
  pvSetText(p,V1,pvtr("Label"));
  pvSetFont(p,V1,"Roboto",12,0,0,0,0);

  pvQLabel(p,P2_G,0);
  pvSetGeometry(p,P2_G,10,530,200,30);
  pvSetText(p,P2_G,pvtr("Label"));
  pvSetFont(p,P2_G,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q2_G,0);
  pvSetGeometry(p,Q2_G,9,558,200,30);
  pvSetText(p,Q2_G,pvtr("Label"));
  pvSetFont(p,Q2_G,"Roboto",12,0,0,0,0);

  pvQLabel(p,obj12,0);
  pvSetGeometry(p,obj12,460,300,400,30);
  pvSetText(p,obj12,pvtr("State Estimation Error"));
  pvSetFont(p,obj12,"Sans Serif",16,1,1,0,0);

  pvQLabel(p,V3,0);
  pvSetGeometry(p,V3,10,590,200,30);
  pvSetText(p,V3,pvtr("Label"));
  pvSetFont(p,V3,"Roboto",12,0,0,0,0);

  pvQLabel(p,V3ph,0);
  pvSetGeometry(p,V3ph,10,620,200,30);
  pvSetText(p,V3ph,pvtr("Label"));
  pvSetFont(p,V3ph,"Roboto",12,0,0,0,0);

  pvQLabel(p,P3_G,0);
  pvSetGeometry(p,P3_G,10,650,200,30);
  pvSetText(p,P3_G,pvtr("Label"));
  pvSetFont(p,P3_G,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q3_G,0);
  pvSetGeometry(p,Q3_G,10,680,200,30);
  pvSetText(p,Q3_G,pvtr("Label"));
  pvSetFont(p,Q3_G,"Roboto",12,0,0,0,0);

  pvQLabel(p,V4,0);
  pvSetGeometry(p,V4,9,708,200,30);
  pvSetText(p,V4,pvtr("Label"));
  pvSetFont(p,V4,"Roboto",12,0,0,0,0);

  pvQLabel(p,V4ph,0);
  pvSetGeometry(p,V4ph,10,740,200,30);
  pvSetText(p,V4ph,pvtr("Label"));
  pvSetFont(p,V4ph,"Roboto",12,0,0,0,0);

  pvQLabel(p,P45,0);
  pvSetGeometry(p,P45,10,770,200,30);
  pvSetText(p,P45,pvtr("Label"));
  pvSetFont(p,P45,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q45,0);
  pvSetGeometry(p,Q45,10,800,200,30);
  pvSetText(p,Q45,pvtr("Label"));
  pvSetFont(p,Q45,"Roboto",12,0,0,0,0);

  pvQLabel(p,P46,0);
  pvSetGeometry(p,P46,9,828,200,30);
  pvSetText(p,P46,pvtr("Label"));
  pvSetFont(p,P46,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q46,0);
  pvSetGeometry(p,Q46,9,860,200,30);
  pvSetText(p,Q46,pvtr("Label"));
  pvSetFont(p,Q46,"Roboto",12,0,0,0,0);

  pvQLabel(p,V5,0);
  pvSetGeometry(p,V5,10,890,200,30);
  pvSetText(p,V5,pvtr("Label"));
  pvSetFont(p,V5,"Roboto",12,0,0,0,0);

  pvQLabel(p,V5ph,0);
  pvSetGeometry(p,V5ph,10,920,200,30);
  pvSetText(p,V5ph,pvtr("Label"));
  pvSetFont(p,V5ph,"Roboto",12,0,0,0,0);

  pvQLabel(p,P5_L,0);
  pvSetGeometry(p,P5_L,10,950,200,30);
  pvSetText(p,P5_L,pvtr("Label"));
  pvSetFont(p,P5_L,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q5_L,0);
  pvSetGeometry(p,Q5_L,10,980,200,30);
  pvSetText(p,Q5_L,pvtr("Label"));
  pvSetFont(p,Q5_L,"Roboto",12,0,0,0,0);

  pvQLabel(p,V6,0);
  pvSetGeometry(p,V6,250,350,200,30);
  pvSetText(p,V6,pvtr("Label"));
  pvSetFont(p,V6,"Roboto",12,0,0,0,0);

  pvQLabel(p,V6ph,0);
  pvSetGeometry(p,V6ph,249,380,200,30);
  pvSetText(p,V6ph,pvtr("Label"));
  pvSetFont(p,V6ph,"Roboto",12,0,0,0,0);

  pvQLabel(p,P6_L,0);
  pvSetGeometry(p,P6_L,250,410,200,30);
  pvSetText(p,P6_L,pvtr("Label"));
  pvSetFont(p,P6_L,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q6_L,0);
  pvSetGeometry(p,Q6_L,250,440,200,30);
  pvSetText(p,Q6_L,pvtr("Label"));
  pvSetFont(p,Q6_L,"Roboto",12,0,0,0,0);

  pvQLabel(p,V7,0);
  pvSetGeometry(p,V7,250,470,200,30);
  pvSetText(p,V7,pvtr("Label"));
  pvSetFont(p,V7,"Roboto",12,0,0,0,0);

  pvQLabel(p,V7ph,0);
  pvSetGeometry(p,V7ph,250,500,200,30);
  pvSetText(p,V7ph,pvtr("Label"));
  pvSetFont(p,V7ph,"Roboto",12,0,0,0,0);

  pvQLabel(p,P78,0);
  pvSetGeometry(p,P78,250,530,200,30);
  pvSetText(p,P78,pvtr("Label"));
  pvSetFont(p,P78,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q78,0);
  pvSetGeometry(p,Q78,250,560,200,30);
  pvSetText(p,Q78,pvtr("Label"));
  pvSetFont(p,Q78,"Roboto",12,0,0,0,0);

  pvQLabel(p,P75,0);
  pvSetGeometry(p,P75,250,590,200,30);
  pvSetText(p,P75,pvtr("Label"));
  pvSetFont(p,P75,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q75,0);
  pvSetGeometry(p,Q75,250,620,200,30);
  pvSetText(p,Q75,pvtr("Label"));
  pvSetFont(p,Q75,"Roboto",12,0,0,0,0);

  pvQLabel(p,V8,0);
  pvSetGeometry(p,V8,250,650,200,30);
  pvSetText(p,V8,pvtr("Label"));
  pvSetFont(p,V8,"Roboto",12,0,0,0,0);

  pvQLabel(p,V8ph,0);
  pvSetGeometry(p,V8ph,250,680,200,30);
  pvSetText(p,V8ph,pvtr("Label"));
  pvSetFont(p,V8ph,"Roboto",12,0,0,0,0);

  pvQLabel(p,P8_L,0);
  pvSetGeometry(p,P8_L,250,710,200,30);
  pvSetText(p,P8_L,pvtr("Label"));
  pvSetFont(p,P8_L,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q8_L,0);
  pvSetGeometry(p,Q8_L,250,740,200,30);
  pvSetText(p,Q8_L,pvtr("Label"));
  pvSetFont(p,Q8_L,"Roboto",12,0,0,0,0);

  pvQLabel(p,V9,0);
  pvSetGeometry(p,V9,250,770,200,30);
  pvSetText(p,V9,pvtr("Label"));
  pvSetFont(p,V9,"Roboto",12,0,0,0,0);

  pvQLabel(p,V9ph,0);
  pvSetGeometry(p,V9ph,250,800,92009,30);
  pvSetText(p,V9ph,pvtr("Label"));
  pvSetFont(p,V9ph,"Roboto",12,0,0,0,0);

  pvQLabel(p,P98,0);
  pvSetGeometry(p,P98,250,830,200,30);
  pvSetText(p,P98,pvtr("Label"));
  pvSetFont(p,P98,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q98,0);
  pvSetGeometry(p,Q98,250,860,200,30);
  pvSetText(p,Q98,pvtr("Label"));
  pvSetFont(p,Q98,"Roboto",12,0,0,0,0);

  pvQLabel(p,P96,0);
  pvSetGeometry(p,P96,250,890,200,30);
  pvSetText(p,P96,pvtr("Label"));
  pvSetFont(p,P96,"Roboto",12,0,0,0,0);

  pvQLabel(p,Q96,0);
  pvSetGeometry(p,Q96,250,920,200,30);
  pvSetText(p,Q96,pvtr("Label"));
  pvSetFont(p,Q96,"Roboto",12,0,0,0,0);

  pvQLCDNumber(p,ErrorSE,0,9,Flat,Dec);
  pvSetGeometry(p,ErrorSE,486,357,200,50);
  pvSetFont(p,ErrorSE,"Roboto",12,0,0,0,0);


  pvEndDefinition(p);
  return 0;
}

// _end_of_generated_area_ (do not edit -> use ui2pvc) ---------------------

#include "mask1_slots.h"

static int defineMask(PARAM *p)
{
  if(p == NULL) return 1;
  generated_defineMask(p);
  // (todo: add your code here)
  return 0;
}


static int showData(PARAM *p, DATA *d)
{
  if(p == NULL) return 1;
  if(d == NULL) return 1;
  return 0;
}

static int readData(DATA *d) // from shared memory, database or something else
{
  if(d == NULL) return 1;
  // (todo: add your code here)
  return 0;
}


int show_mask1(PARAM *p)
{
  DATA d;
  char event[MAX_EVENT_LENGTH];
  char text[MAX_EVENT_LENGTH];
  char str1[MAX_EVENT_LENGTH];
  int  i,w,h,val,x,y,button,ret;
  float xval, yval;

  defineMask(p);
  //rlSetDebugPrintf(1);
  if((ret=slotInit(p,&d)) != 0) return ret;
  readData(&d); // from shared memory, database or something else
  showData(p,&d);
  while(1)
  {
    pvPollEvent(p,event);
    switch(pvParseEvent(event, &i, text))
    {
      case NULL_EVENT:
        readData(&d); // from shared memory, database or something else
        showData(p,&d);
        if((ret=slotNullEvent(p,&d)) != 0) return ret;
        break;
      case BUTTON_EVENT:
        printf("BUTTON_EVENT id=%d\n",i);
        if((ret=slotButtonEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_PRESSED_EVENT:
        printf("BUTTON_PRESSED_EVENT id=%d\n",i);
        if((ret=slotButtonPressedEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_RELEASED_EVENT:
        printf("BUTTON_RELEASED_EVENT id=%d\n",i);
        if((ret=slotButtonReleasedEvent(p,i,&d)) != 0) return ret;
        break;
      case TEXT_EVENT:
        printf("TEXT_EVENT id=%d %s\n",i,text);
        if((ret=slotTextEvent(p,i,&d,text)) != 0) return ret;
        break;
      case SLIDER_EVENT:
        sscanf(text,"(%d)",&val);
        printf("SLIDER_EVENT val=%d\n",val);
        if((ret=slotSliderEvent(p,i,&d,val)) != 0) return ret;
        break;
      case CHECKBOX_EVENT:
        printf("CHECKBOX_EVENT id=%d %s\n",i,text);
        if((ret=slotCheckboxEvent(p,i,&d,text)) != 0) return ret;
        break;
      case RADIOBUTTON_EVENT:
        printf("RADIOBUTTON_EVENT id=%d %s\n",i,text);
        if((ret=slotRadioButtonEvent(p,i,&d,text)) != 0) return ret;
        break;
      case GL_INITIALIZE_EVENT:
        printf("you have to call initializeGL()\n");
        if((ret=slotGlInitializeEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_PAINT_EVENT:
        printf("you have to call paintGL()\n");
        if((ret=slotGlPaintEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_RESIZE_EVENT:
        sscanf(text,"(%d,%d)",&w,&h);
        printf("you have to call resizeGL(w,h)\n");
        if((ret=slotGlResizeEvent(p,i,&d,w,h)) != 0) return ret;
        break;
      case GL_IDLE_EVENT:
        if((ret=slotGlIdleEvent(p,i,&d)) != 0) return ret;
        break;
      case TAB_EVENT:
        sscanf(text,"(%d)",&val);
        printf("TAB_EVENT(%d,page=%d)\n",i,val);
        if((ret=slotTabEvent(p,i,&d,val)) != 0) return ret;
        break;
      case TABLE_TEXT_EVENT:
        sscanf(text,"(%d,%d,",&x,&y);
        pvGetText(text,str1);
        printf("TABLE_TEXT_EVENT(%d,%d,\"%s\")\n",x,y,str1);
        if((ret=slotTableTextEvent(p,i,&d,x,y,str1)) != 0) return ret;
        break;
      case TABLE_CLICKED_EVENT:
        sscanf(text,"(%d,%d,%d)",&x,&y,&button);
        printf("TABLE_CLICKED_EVENT(%d,%d,button=%d)\n",x,y,button);
        if((ret=slotTableClickedEvent(p,i,&d,x,y,button)) != 0) return ret;
        break;
      case SELECTION_EVENT:
        sscanf(text,"(%d,",&val);
        pvGetText(text,str1);
        printf("SELECTION_EVENT(column=%d,\"%s\")\n",val,str1);
        if((ret=slotSelectionEvent(p,i,&d,val,str1)) != 0) return ret;
        break;
      case CLIPBOARD_EVENT:
        sscanf(text,"(%d",&val);
        printf("CLIPBOARD_EVENT(id=%d)\n",val);
        printf("clipboard = \n%s\n",p->clipboard);
        if((ret=slotClipboardEvent(p,i,&d,val)) != 0) return ret;
        break;
      case RIGHT_MOUSE_EVENT:
        printf("RIGHT_MOUSE_EVENT id=%d text=%s\n",i,text);
        if((ret=slotRightMouseEvent(p,i,&d,text)) != 0) return ret;
        break;
      case KEYBOARD_EVENT:
        sscanf(text,"(%d",&val);
        printf("KEYBOARD_EVENT modifier=%d key=%d\n",i,val);
        if((ret=slotKeyboardEvent(p,i,&d,val,i)) != 0) return ret;
        break;
      case PLOT_MOUSE_MOVED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        printf("PLOT_MOUSE_MOVE %f %f\n",xval,yval);
        if((ret=slotMouseMovedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_PRESSED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        printf("PLOT_MOUSE_PRESSED %f %f\n",xval,yval);
        if((ret=slotMousePressedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_RELEASED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        printf("PLOT_MOUSE_RELEASED %f %f\n",xval,yval);
        if((ret=slotMouseReleasedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case MOUSE_OVER_EVENT:
        sscanf(text,"%d",&val);
        printf("MOUSE_OVER_EVENT %d\n",val);
        if((ret=slotMouseOverEvent(p,i,&d,val)) != 0) return ret;
        break;
      case USER_EVENT:
        printf("USER_EVENT id=%d %s\n",i,text);
        if((ret=slotUserEvent(p,i,&d,text)) != 0) return ret;
        break;
      default:
        printf("UNKNOWN_EVENT id=%d %s\n",i,text);
        break;
    }
  }
}
