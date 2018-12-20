//###############################################################
//# mask1_slots.h for ProcessViewServer 
//# please fill out these slots
//# here you find all possible events
//###############################################################

// todo: uncomment me if you want to use this data aquisiton
// also uncomment this classes in main.cpp and pvapp.h
// also remember to uncomment rllib in the project file
extern rlModbusClient     PLC;
extern rlModbusClient     SE;
extern rlModbusClient     MATLAB;
//extern rlSiemensTCPClient siemensTCP;
//extern rlPPIClient        ppi;
//extern rlDataAcquisition *acqui;

static int counterPLC(int offset)
{
  return PLC.readByte(offset,1)*256 + PLC.readByte(offset,0);
}

static int counterSE(int offset)
{
  return SE.readByte(offset,1)*256 + SE.readByte(offset,0);
}

static int counterMATLAB(int offset)
{
  return MATLAB.readByte(offset,1)*256 + MATLAB.readByte(offset,0);
}

typedef struct // (todo: define your data structure here)
{
  char s1[5];
  char s2[5];
  char s3[1];
  char s4[1];
  char s5[1];
  char s6[1];
  char s7[1];
  char s8[1];
  char s9[1];
  char s10[1];
  char s11[1];
  char s12[1];
  char s13[1];
  char s14[1];
  char s15[1];
  char s16[1];
  char s17[1];
  char s18[1];
  char s19[1];
  char s20[1];
  char s21[1];
  char s22[1];
  char s23[1];
  char s24[1];
  char s25[1];
  char s26[1];
  char s27[1];
  char s28[1];
  char s29[1];
  char s30[1];
  char s31[1];
  char s32[1];
  char s33[1];
  char s34[1];
  char s35[1];
  char s36[1];
  char s37[1];
  char s38[1];
  char s39[1];
  char s40[1];
  char s41[1];
  char s42[1];
  char s43[1];
  char s44[1];
  char s45[1];
  char s46[1];
  char s47[1];
  char s48[1];
  char s49[1];
  char s50[1];// switches
}

DATA;

static int slotInit(PARAM *p, DATA *d)
{
  if(p == NULL || d == NULL) return -1;
  memset(d,0,sizeof(DATA));
  printf("init start\n");
  d->s1[0] = -1;
  d->s1[1] = -1;
  d->s1[2] = -1;
  d->s1[3] = -1;
  d->s1[4] = -1;
  d->s2[0] = -1;
  d->s2[1] = -1;
  d->s2[2] = -1;
  d->s2[3] = -1;
  d->s2[4] = -1;
  d->s3[0] = -1;
  d->s4[0] = -1;
  d->s5[0] = -1;
  d->s6[0] = -1;
  d->s7[0] = -1;
  d->s8[0] = -1;
  d->s9[0] = -1;
  d->s10[0] = -1;
  d->s11[0] = -1;
  d->s12[0] = -1;
  d->s13[0] = -1;
  d->s14[0] = -1;
  d->s15[0] = -1;
  d->s16[0] = -1;
  d->s17[0] = -1;
  d->s18[0] = -1;
  d->s19[0] = -1;
  d->s20[0] = -1;
  d->s21[0] = -1;
  d->s22[0] = -1;
  d->s23[0] = -1;
  d->s24[0] = -1;
  d->s25[0] = -1;
  d->s26[0] = -1;
  d->s27[0] = -1;
  d->s28[0] = -1;
  d->s29[0] = -1;
  d->s30[0] = -1;
  d->s31[0] = -1;
  d->s32[0] = -1;
  d->s33[0] = -1;
  d->s34[0] = -1;
  d->s35[0] = -1;
  d->s36[0] = -1;
  d->s37[0] = -1;
  d->s38[0] = -1;
  d->s39[0] = -1;
  d->s40[0] = -1;
  d->s41[0] = -1;
  d->s42[0] = -1;
  d->s43[0] = -1;
  d->s44[0] = -1;
  d->s45[0] = -1;
  d->s46[0] = -1;
  d->s47[0] = -1;
  d->s48[0] = -1;
  d->s49[0] = -1;
  d->s50[0] = -1;
  pvTablePrintf(p,table1,-1,0,"phase_1");
  pvTablePrintf(p,table1,-1,1,"phase_2");
  pvTablePrintf(p,table1,-1,2,"phase_3");
  pvTablePrintf(p,table1,-1,3,"lc_TRIP");
  pvTablePrintf(p,table1,-1,4,"lc_CLOSE");
  pvTablePrintf(p,table1,2,0,"TRIP");
  pvTablePrintf(p,table1,2,1,"CLOSE");
  pvTablePrintf(p,table1,0,-1,"FAULT");
  pvTablePrintf(p,table1,1,-1,"ACTION");
  pvTablePrintf(p,table1,2,-1,"STATUS");
  pvSetTablePixmap(p,table1,0,0,"on.png");
  pvSetTablePixmap(p,table1,0,1,"on.png");
  pvSetTablePixmap(p,table1,0,2,"on.png");
  pvSetTablePixmap(p,table1,0,3,"on.png");
  pvSetTablePixmap(p,table1,0,4,"on.png");
  pvSetTablePixmap(p,table1,2,0,"on.png");
  pvSetTablePixmap(p,table1,2,1,"on.png");
  pvSetTableCheckBox(p,table1,1,0,0,"TRIP(8)");
  pvSetTableCheckBox(p,table1,1,1,0,"CLOSE(7)");
  pvSetTableCheckBox(p,table1,1,2,0,"rt_coil6");
  pvSetTableCheckBox(p,table1,1,3,0,"rt_coil5");
  pvSetTableCheckBox(p,table1,1,4,0,"rt_coil4");
  printf("init end\n");
  return 0;
}

// Function to convert 2 16-bit integers from Modbus to a Floating type (single) number
static float b2f(unsigned char b0, unsigned char b1, unsigned char b2, unsigned char b3)
{
  float output;
  *((unsigned char*)(&output) + 3) = b0;
  *((unsigned char*)(&output) + 2) = b1;
  *((unsigned char*)(&output) + 1) = b2;
  *((unsigned char*)(&output) + 0) = b3;
  return output;
}

static int slotNullEvent(PARAM *p, DATA *d)
{
  if(p == NULL || d == NULL) return -1;

  int i,inputs,trip,close;
       
  for(i=0; i<5; i++)
  {
    inputs = PLC.readBit(0,i);
    if(d->s1[i] != inputs)
    {
      printf("inputs[%d]=%d\n",i,inputs);
      if(inputs == 1)        pvSetTablePixmap(p,table1,0,i,"on.png");
      else if (inputs == 0)  pvSetTablePixmap(p,table1,0,i,"off.png");
      d->s1[i] = inputs;
    }
  } 

    close = PLC.readBit(1,0);
    if(d->s2[0] != close)
    {
      printf("close[%d]=%d\n",0,close);
      if(close == 1)        pvSetTablePixmap(p,table1,2,1,"on.png");
      else if (close == 0)  pvSetTablePixmap(p,table1,2,1,"off.png");
      d->s2[0] = close;
    }
 
    trip = PLC.readBit(1,1);
    if(d->s2[1] != trip)
    {
      printf("trip[%d]=%d\n",1,trip);
      if(trip == 1)        pvSetTablePixmap(p,table1,2,0,"on.png");
      else if (trip == 0)  pvSetTablePixmap(p,table1,2,0,"off.png");
      d->s2[1] = trip;
    }

    int iplc= PLC.readShort(2,0); //Read 2 bytes from shared memory (PLC deamon) -> PLC.readByte(2,0)*256+PLC.readByte(2,1);
    if(d->s3[0] != iplc)
    {
      //printf("iplc[%d]=%d\n",iplc);
      pvPrintf(p,I_x, "|I_ph| = %d Amperes_RMS", iplc);//*10);
      //SE.writePresetSingleRegister(2,100,iplc(p.u);     
      d->s3[0] = iplc;
   }

    unsigned char v1a = MATLAB.readByte(0,0);
    unsigned char v1b = MATLAB.readByte(0,1);
    unsigned char v1c = MATLAB.readByte(2,0);
    unsigned char v1d = MATLAB.readByte(2,1); //Read 4 bytes (single) from shared memory (MATLAB deamon)
//    printf("v1a=%x\n",v1a);
//    printf("v1b=%x\n",v1b);
//    printf("v1c=%x\n",v1c);
//    printf("v1d=%x\n",v1d);
	
    float v1; 
    v1 = b2f(v1a, v1b, v1c, v1d);//Read 4 bytes (single) from shared memory (MATLAB deamon and return a floating type number)

    int v1_1= v1a*256+v1b;
//    printf("v1_1=%d\n",v1_1);
    int v1_2= v1c*256+v1d;
//    printf("v1_2=%d\n",v1_2);

//    SE.writePresetSingleRegister(2,0,v1_1); 
//    SE.writePresetSingleRegister(2,1,v1_2); Write a floating (single) type number to two modbus registers (SE deamon)   

    if(d->s4[0] != v1)
    {
      pvPrintf(p,V1, "V1 = %g p.u", v1);
      d->s4[0] = v1;
    }

    unsigned char v1aph = MATLAB.readByte(4,0);
    unsigned char v1bph = MATLAB.readByte(4,1);
    unsigned char v1cph = MATLAB.readByte(6,0);
    unsigned char v1dph = MATLAB.readByte(6,1); 
	
    float v1ph; 
    v1ph = b2f(v1aph, v1bph, v1cph, v1dph);

    int v1_1ph= v1aph*256+v1bph;
    int v1_2ph= v1cph*256+v1dph;

    if(d->s5[0] != v1ph)
    {
      pvPrintf(p,V1ph, "V1ph = %g deg.", v1ph);     
      d->s5[0] = v1ph;
    }

    unsigned char p1a = MATLAB.readByte(8,0);
    unsigned char p1b = MATLAB.readByte(8,1);
    unsigned char p1c = MATLAB.readByte(10,0);
    unsigned char p1d = MATLAB.readByte(10,1); 
	
    float p1; 
    p1 = b2f(p1a, p1b, p1c, p1d);

    int p1_1= p1a*256+p1b;
    int p1_2= p1c*256+p1d;

    if(d->s6[0] != p1)
    {
      pvPrintf(p,P1_G, "P1_G = %g p.u", p1);  
      d->s6[0] = p1;
    }

    unsigned char q1a = MATLAB.readByte(12,0);
    unsigned char q1b = MATLAB.readByte(12,1);
    unsigned char q1c = MATLAB.readByte(14,0);
    unsigned char q1d = MATLAB.readByte(14,1); 
	
    float q1; 
    q1 = b2f(q1a, q1b, q1c, q1d);

    int q1_1= q1a*256+q1b;
    int q1_2= q1c*256+q1d;

    if(d->s7[0] != q1)
    {
      pvPrintf(p,Q1_G, "Q1_G = %g p.u", q1);  
      d->s7[0] = q1;
    }

    unsigned char v2a = MATLAB.readByte(16,0);
    unsigned char v2b = MATLAB.readByte(16,1);
    unsigned char v2c = MATLAB.readByte(18,0);
    unsigned char v2d = MATLAB.readByte(18,1); 
	
    float v2; 
    v2 = b2f(v2a, v2b, v2c, v2d);

    int v2_1= v2a*256+v2b;
    int v2_2= v2c*256+v2d;

    if(d->s8[0] != v2)
    {
      pvPrintf(p,V2, "V2 = %g p.u", v2);
      d->s8[0] = v2;
    }

    unsigned char v2aph = MATLAB.readByte(20,0);
    unsigned char v2bph = MATLAB.readByte(20,1);
    unsigned char v2cph = MATLAB.readByte(22,0);
    unsigned char v2dph = MATLAB.readByte(22,1); 
	
    float v2ph; 
    v2ph = b2f(v2aph, v2bph, v2cph, v2dph);

    int v2_1ph= v2aph*256+v2bph;
    int v2_2ph= v2cph*256+v2dph;

    if(d->s9[0] != v2ph)
    {
      pvPrintf(p,V2ph, "V2ph = %g deg.", v2ph);     
      d->s9[0] = v2ph;
    }

    unsigned char p2a = MATLAB.readByte(24,0);
    unsigned char p2b = MATLAB.readByte(24,1);
    unsigned char p2c = MATLAB.readByte(26,0);
    unsigned char p2d = MATLAB.readByte(26,1); 
	
    float p2; 
    p2 = b2f(p2a, p2b, p2c, p2d);

    int p2_1= p2a*256+p2b;
    int p2_2= p2c*256+p2d;

    if(d->s10[0] != p2)
    {
      pvPrintf(p,P2_G, "P2_G = %g p.u", p2);  
      d->s10[0] = p2;
    }

    unsigned char q2a = MATLAB.readByte(28,0);
    unsigned char q2b = MATLAB.readByte(28,1);
    unsigned char q2c = MATLAB.readByte(30,0);
    unsigned char q2d = MATLAB.readByte(30,1); 
	
    float q2; 
    q2 = b2f(q2a, q2b, q2c, q2d);

    int q2_1= q2a*256+q2b;
    int q2_2= q2c*256+q2d;

    if(d->s11[0] != q2)
    {
      pvPrintf(p,Q2_G, "Q2_G = %g p.u", q2);  
      d->s11[0] = q2;
    }

    unsigned char v3a = MATLAB.readByte(32,0);
    unsigned char v3b = MATLAB.readByte(32,1);
    unsigned char v3c = MATLAB.readByte(34,0);
    unsigned char v3d = MATLAB.readByte(34,1); 
	
    float v3; 
    v3 = b2f(v3a, v3b, v3c, v3d);

    int v3_1= v3a*256+v3b;
    int v3_2= v3c*256+v3d;

    if(d->s12[0] != v3)
    {
      pvPrintf(p,V3, "V3 = %g p.u", v3);
      d->s12[0] = v3;
    }

    unsigned char v3aph = MATLAB.readByte(36,0);
    unsigned char v3bph = MATLAB.readByte(36,1);
    unsigned char v3cph = MATLAB.readByte(38,0);
    unsigned char v3dph = MATLAB.readByte(38,1); 
	
    float v3ph; 
    v3ph = b2f(v3aph, v3bph, v3cph, v3dph);

    int v3_1ph= v3aph*256+v3bph;
    int v3_2ph= v3cph*256+v3dph;

    if(d->s13[0] != v3ph)
    {
      pvPrintf(p,V3ph, "V3ph = %g deg.", v3ph);     
      d->s13[0] = v3ph;
    }

    unsigned char p3a = MATLAB.readByte(40,0);
    unsigned char p3b = MATLAB.readByte(40,1);
    unsigned char p3c = MATLAB.readByte(42,0);
    unsigned char p3d = MATLAB.readByte(42,1); 
	
    float p3; 
    p3 = b2f(p3a, p3b, p3c, p3d);

    int p3_1= p3a*256+p3b;
    int p3_2= p3c*256+p3d;

    if(d->s14[0] != p3)
    {
      pvPrintf(p,P3_G, "P3_G = %g p.u", p3);  
      d->s14[0] = p3;
    }

    unsigned char q3a = MATLAB.readByte(44,0);
    unsigned char q3b = MATLAB.readByte(44,1);
    unsigned char q3c = MATLAB.readByte(46,0);
    unsigned char q3d = MATLAB.readByte(46,1); 
	
    float q3; 
    q3 = b2f(q3a, q3b, q3c, q3d);

    int q3_1= q3a*256+q3b;
    int q3_2= q3c*256+q3d;

    if(d->s15[0] != q3)
    {
      pvPrintf(p,Q3_G, "Q3_G = %g p.u", q3);  
      d->s15[0] = q3;
    }
    unsigned char v4a = MATLAB.readByte(48,0);
    unsigned char v4b = MATLAB.readByte(48,1);
    unsigned char v4c = MATLAB.readByte(50,0);
    unsigned char v4d = MATLAB.readByte(50,1); 
	
    float v4; 
    v4 = b2f(v4a, v4b, v4c, v4d);

    int v4_1= v4a*256+v4b;
    int v4_2= v4c*256+v4d;

    if(d->s16[0] != v4)
    {
      pvPrintf(p,V4, "V4 = %g p.u", v4);
      d->s16[0] = v4;
    }

    unsigned char v4aph = MATLAB.readByte(52,0);
    unsigned char v4bph = MATLAB.readByte(52,1);
    unsigned char v4cph = MATLAB.readByte(54,0);
    unsigned char v4dph = MATLAB.readByte(54,1); 
	
    float v4ph; 
    v4ph = b2f(v4aph, v4bph, v4cph, v4dph);

    int v4_1ph= v4aph*256+v4bph;
    int v4_2ph= v4cph*256+v4dph;

    if(d->s17[0] != v4ph)
    {
      pvPrintf(p,V4ph, "V4ph = %g deg.", v4ph);     
      d->s17[0] = v4ph;
    }

    unsigned char p45a = MATLAB.readByte(56,0);
    unsigned char p45b = MATLAB.readByte(56,1);
    unsigned char p45c = MATLAB.readByte(58,0);
    unsigned char p45d = MATLAB.readByte(58,1); 
	
    float p45; 
    p45 = b2f(p45a, p45b, p45c, p45d);

    int p45_1= p45a*256+p45b;
    int p45_2= p45c*256+p45d;

    if(d->s18[0] != p45)
    {
      pvPrintf(p,P45, "P45 = %g p.u", p45);  
      d->s18[0] = p45;
    }

    unsigned char q45a = MATLAB.readByte(60,0);
    unsigned char q45b = MATLAB.readByte(60,1);
    unsigned char q45c = MATLAB.readByte(62,0);
    unsigned char q45d = MATLAB.readByte(62,1); 
	
    float q45; 
    q45 = b2f(q45a, q45b, q45c, q45d);

    int q45_1= q45a*256+q45b;
    int q45_2= q45c*256+q45d;

    if(d->s19[0] != q45)
    {
      pvPrintf(p,Q45, "Q45 = %g p.u", q45);  
      d->s19[0] = q45;
    }

    unsigned char p46a = MATLAB.readByte(64,0);
    unsigned char p46b = MATLAB.readByte(64,1);
    unsigned char p46c = MATLAB.readByte(66,0);
    unsigned char p46d = MATLAB.readByte(66,1); 
	
    float p46; 
    p46 = b2f(p46a, p46b, p46c, p46d);

    int p46_1= p46a*256+p46b;
    int p46_2= p46c*256+p46d;

    if(d->s20[0] != p46)
    {
      pvPrintf(p,P46, "P46 = %g p.u", p46);  
      d->s20[0] = p46;
    }

    unsigned char q46a = MATLAB.readByte(68,0);
    unsigned char q46b = MATLAB.readByte(68,1);
    unsigned char q46c = MATLAB.readByte(70,0);
    unsigned char q46d = MATLAB.readByte(70,1); 
	
    float q46; 
    q46 = b2f(q46a, q46b, q46c, q46d);

    int q46_1= q46a*256+q46b;
    int q46_2= q46c*256+q46d;

    if(d->s21[0] != q46)
    {
      pvPrintf(p,Q46, "Q46 = %g p.u", q46);  
      d->s21[0] = q46;
    }

    unsigned char v5a = MATLAB.readByte(72,0);
    unsigned char v5b = MATLAB.readByte(72,1);
    unsigned char v5c = MATLAB.readByte(74,0);
    unsigned char v5d = MATLAB.readByte(74,1); 
	
    float v5; 
    v5 = b2f(v5a, v5b, v5c, v5d);

    int v5_1= v5a*256+v5b;
    int v5_2= v5c*256+v5d;

    if(d->s22[0] != v5)
    {
      pvPrintf(p,V5, "V5 = %g p.u", v5);
      d->s22[0] = v5;
    }

    unsigned char v5aph = MATLAB.readByte(76,0);
    unsigned char v5bph = MATLAB.readByte(76,1);
    unsigned char v5cph = MATLAB.readByte(78,0);
    unsigned char v5dph = MATLAB.readByte(78,1); 
	
    float v5ph; 
    v5ph = b2f(v5aph, v5bph, v5cph, v5dph);

    int v5_1ph= v5aph*256+v5bph;
    int v5_2ph= v5cph*256+v5dph;

    if(d->s23[0] != v5ph)
    {
      pvPrintf(p,V5ph, "V5ph = %g deg.", v5ph);     
      d->s23[0] = v5ph;
    }

    unsigned char p5a = MATLAB.readByte(80,0);
    unsigned char p5b = MATLAB.readByte(80,1);
    unsigned char p5c = MATLAB.readByte(82,0);
    unsigned char p5d = MATLAB.readByte(82,1); 
	
    float p5;
    p5 = b2f(p5a, p5b, p5c, p5d);

    int p5_1= p5a*256+p5b;
    int p5_2= p5c*256+p5d;

    if(d->s24[0] != p5)
    {
      pvPrintf(p,P5_L, "P5_L = %g p.u", p5);  
      d->s24[0] = p5;
    }

    unsigned char q5a = MATLAB.readByte(84,0);
    unsigned char q5b = MATLAB.readByte(84,1);
    unsigned char q5c = MATLAB.readByte(86,0);
    unsigned char q5d = MATLAB.readByte(86,1);
	
    float q5; 
    q5 = b2f(q5a, q5b, q5c, q5d);

    int q5_1= q5a*256+q5b;
    int q5_2= q5c*256+q5d;

    if(d->s25[0] != q5)
    {
      pvPrintf(p,Q5_L, "Q5_L = %g p.u", q5);  
      d->s25[0] = q5;
    }

    unsigned char v6a = MATLAB.readByte(88,0);
    unsigned char v6b = MATLAB.readByte(88,1);
    unsigned char v6c = MATLAB.readByte(90,0);
    unsigned char v6d = MATLAB.readByte(90,1); 
	
    float v6; 
    v6 = b2f(v6a, v6b, v6c, v6d);

    int v6_1= v6a*256+v6b;
    int v6_2= v6c*256+v6d;

    if(d->s26[0] != v6)
    {
      pvPrintf(p,V6, "V6 = %g p.u", v6);
      d->s26[0] = v6;
    }

    unsigned char v6aph = MATLAB.readByte(92,0);
    unsigned char v6bph = MATLAB.readByte(92,1);
    unsigned char v6cph = MATLAB.readByte(94,0);
    unsigned char v6dph = MATLAB.readByte(94,1); 
	
    float v6ph; 
    v6ph = b2f(v6aph, v6bph, v6cph, v6dph);

    int v6_1ph= v6aph*256+v6bph;
    int v6_2ph= v6cph*256+v6dph;

    if(d->s27[0] != v6ph)
    {
      pvPrintf(p,V6ph, "V6ph = %g deg.", v6ph);     
      d->s27[0] = v6ph;
    }

    unsigned char p6a = MATLAB.readByte(96,0);
    unsigned char p6b = MATLAB.readByte(96,1);
    unsigned char p6c = MATLAB.readByte(98,0);
    unsigned char p6d = MATLAB.readByte(98,1); 
	
    float p6;
    p6 = b2f(p6a, p6b, p6c, p6d);

    int p6_1= p6a*256+p6b;
    int p6_2= p6c*256+p6d;

    if(d->s28[0] != p6)
    {
      pvPrintf(p,P6_L, "P6_L = %g p.u", p6);  
      d->s28[0] = p6;
    }

    unsigned char q6a = MATLAB.readByte(100,0);
    unsigned char q6b = MATLAB.readByte(100,1);
    unsigned char q6c = MATLAB.readByte(102,0);
    unsigned char q6d = MATLAB.readByte(102,1);
	
    float q6; 
    q6 = b2f(q6a, q6b, q6c, q6d);

    int q6_1= q6a*256+q6b;
    int q6_2= q6c*256+q6d;

    if(d->s29[0] != q6)
    {
      pvPrintf(p,Q6_L, "Q6_L = %g p.u", q6);  
      d->s29[0] = q6;
    }

    unsigned char v7a = MATLAB.readByte(104,0);
    unsigned char v7b = MATLAB.readByte(104,1);
    unsigned char v7c = MATLAB.readByte(106,0);
    unsigned char v7d = MATLAB.readByte(106,1); 
	
    float v7; 
    v7 = b2f(v7a, v7b, v7c, v7d);

    int v7_1= v7a*256+v7b;
    int v7_2= v7c*256+v7d;

    if(d->s30[0] != v7)
    {
      pvPrintf(p,V7, "V7 = %g p.u", v7);
      d->s30[0] = v7;
    }

    unsigned char v7aph = MATLAB.readByte(108,0);
    unsigned char v7bph = MATLAB.readByte(108,1);
    unsigned char v7cph = MATLAB.readByte(110,0);
    unsigned char v7dph = MATLAB.readByte(110,1); 
	
    float v7ph; 
    v7ph = b2f(v7aph, v7bph, v7cph, v7dph);

    int v7_1ph= v7aph*256+v7bph;
    int v7_2ph= v7cph*256+v7dph;

    if(d->s31[0] != v7ph)
    {
      pvPrintf(p,V7ph, "V7ph = %g deg.", v7ph);     
      d->s31[0] = v7ph;
    }

    unsigned char p78a = MATLAB.readByte(112,0);
    unsigned char p78b = MATLAB.readByte(112,1);
    unsigned char p78c = MATLAB.readByte(114,0);
    unsigned char p78d = MATLAB.readByte(114,1); 
	
    float p78; 
    p78 = b2f(p78a, p78b, p78c, p78d);

    int p78_1= p78a*256+p78b;
    int p78_2= p78c*256+p78d;

    if(d->s32[0] != p78)
    {
      pvPrintf(p,P78, "P78 = %g p.u", p78);  
      d->s32[0] = p78;
    }

    unsigned char q78a = MATLAB.readByte(116,0);
    unsigned char q78b = MATLAB.readByte(116,1);
    unsigned char q78c = MATLAB.readByte(118,0);
    unsigned char q78d = MATLAB.readByte(118,1); 
	
    float q78; 
    q78 = b2f(q78a, q78b, q78c, q78d);

    int q78_1= q78a*256+q78b;
    int q78_2= q78c*256+q78d;

    if(d->s33[0] != q78)
    {
      pvPrintf(p,Q78, "Q78 = %g p.u", q78);  
      d->s33[0] = q78;
    }

    unsigned char p75a = MATLAB.readByte(120,0);
    unsigned char p75b = MATLAB.readByte(120,1);
    unsigned char p75c = MATLAB.readByte(122,0);
    unsigned char p75d = MATLAB.readByte(122,1); 
	
    float p75; 
    p75 = b2f(p75a, p75b, p75c, p75d);

    int p75_1= p75a*256+p75b;
    int p75_2= p75c*256+p75d;

    if(d->s34[0] != p75)
    {
      pvPrintf(p,P75, "P75 = %g p.u", p75);  
      d->s34[0] = p75;
    }

    unsigned char q75a = MATLAB.readByte(124,0);
    unsigned char q75b = MATLAB.readByte(124,1);
    unsigned char q75c = MATLAB.readByte(126,0);
    unsigned char q75d = MATLAB.readByte(126,1); 
	
    float q75; 
    q75 = b2f(q75a, q75b, q75c, q75d);

    int q75_1= q75a*256+q75b;
    int q75_2= q75c*256+q75d;

    if(d->s35[0] != q75)
    {
      pvPrintf(p,Q75, "Q75 = %g p.u", q75);  
      d->s35[0] = q75;
    }

    unsigned char v8a = MATLAB.readByte(128,0);
    unsigned char v8b = MATLAB.readByte(128,1);
    unsigned char v8c = MATLAB.readByte(130,0);
    unsigned char v8d = MATLAB.readByte(130,1); 
	
    float v8; 
    v8 = b2f(v8a, v8b, v8c, v8d);

    int v8_1= v8a*256+v8b;
    int v8_2= v8c*256+v8d;

    if(d->s36[0] != v8)
    {
      pvPrintf(p,V8, "V8 = %g p.u", v8);
      d->s36[0] = v8;
    }

    unsigned char v8aph = MATLAB.readByte(132,0);
    unsigned char v8bph = MATLAB.readByte(132,1);
    unsigned char v8cph = MATLAB.readByte(134,0);
    unsigned char v8dph = MATLAB.readByte(134,1); 
	
    float v8ph; 
    v8ph = b2f(v8aph, v8bph, v8cph, v8dph);

    int v8_1ph= v8aph*256+v8bph;
    int v8_2ph= v8cph*256+v8dph;

    if(d->s37[0] != v8ph)
    {
      pvPrintf(p,V8ph, "V8ph = %g deg.", v8ph);     
      d->s37[0] = v8ph;
    }

    unsigned char p8a = MATLAB.readByte(136,0);
    unsigned char p8b = MATLAB.readByte(136,1);
    unsigned char p8c = MATLAB.readByte(138,0);
    unsigned char p8d = MATLAB.readByte(138,1); 
	
    float p8;
    p8 = b2f(p8a, p8b, p8c, p8d);

    int p8_1= p8a*256+p8b;
    int p8_2= p8c*256+p8d;

    if(d->s38[0] != p8)
    {
      pvPrintf(p,P8_L, "P8_L = %g p.u", p8);  
      d->s38[0] = p8;
    }

    unsigned char q8a = MATLAB.readByte(140,0);
    unsigned char q8b = MATLAB.readByte(140,1);
    unsigned char q8c = MATLAB.readByte(142,0);
    unsigned char q8d = MATLAB.readByte(142,1);
	
    float q8; 
    q8 = b2f(q8a, q8b, q8c, q8d);

    int q8_1= q8a*256+q8b;
    int q8_2= q8c*256+q8d;

    if(d->s39[0] != q8)
    {
      pvPrintf(p,Q8_L, "Q8_L = %g p.u", q8);  
      d->s39[0] = q8;
    }

    unsigned char v9a = MATLAB.readByte(144,0);
    unsigned char v9b = MATLAB.readByte(144,1);
    unsigned char v9c = MATLAB.readByte(146,0);
    unsigned char v9d = MATLAB.readByte(146,1); 
	
    float v9; 
    v9 = b2f(v9a, v9b, v9c, v9d);

    int v9_1= v9a*256+v9b;
    int v9_2= v9c*256+v9d;

    if(d->s40[0] != v9)
    {
      pvPrintf(p,V9, "V9 = %g p.u", v9);
      d->s40[0] = v9;
    }

    unsigned char v9aph = MATLAB.readByte(148,0);
    unsigned char v9bph = MATLAB.readByte(148,1);
    unsigned char v9cph = MATLAB.readByte(150,0);
    unsigned char v9dph = MATLAB.readByte(150,1); 
	
    float v9ph; 
    v9ph = b2f(v9aph, v9bph, v9cph, v9dph);

    int v9_1ph= v9aph*256+v9bph;
    int v9_2ph= v9cph*256+v9dph;

    if(d->s41[0] != v9ph)
    {
      pvPrintf(p,V9ph, "V9ph = %g deg.", v9ph);     
      d->s41[0] = v9ph;
    }

    unsigned char p98a = MATLAB.readByte(152,0);
    unsigned char p98b = MATLAB.readByte(152,1);
    unsigned char p98c = MATLAB.readByte(154,0);
    unsigned char p98d = MATLAB.readByte(154,1); 
	
    float p98; 
    p98 = b2f(p98a, p98b, p98c, p98d);

    int p98_1= p98a*256+p98b;
    int p98_2= p98c*256+p98d;

    if(d->s42[0] != p98)
    {
      pvPrintf(p,P98, "P98 = %g p.u", p98);  
      d->s42[0] = p98;
    }

    unsigned char q98a = MATLAB.readByte(156,0);
    unsigned char q98b = MATLAB.readByte(156,1);
    unsigned char q98c = MATLAB.readByte(158,0);
    unsigned char q98d = MATLAB.readByte(158,1); 
	
    float q98; 
    q98 = b2f(q98a, q98b, q98c, q98d);

    int q98_1= q98a*256+q98b;
    int q98_2= q98c*256+q98d;

    if(d->s43[0] != q98)
    {
      pvPrintf(p,Q98, "Q98 = %g p.u", q98);  
      d->s43[0] = q98;
    }

    unsigned char p96a = MATLAB.readByte(160,0);
    unsigned char p96b = MATLAB.readByte(160,1);
    unsigned char p96c = MATLAB.readByte(162,0);
    unsigned char p96d = MATLAB.readByte(162,1); 
	
    float p96; 
    p96 = b2f(p96a, p96b, p96c, p96d);

    int p96_1= p96a*256+p96b;
    int p96_2= p96c*256+p96d;

    if(d->s44[0] != p96)
    {
      pvPrintf(p,P96, "P96 = %g p.u", p96);  
      d->s44[0] = p96;
    }

    unsigned char q96a = MATLAB.readByte(164,0);
    unsigned char q96b = MATLAB.readByte(164,1);
    unsigned char q96c = MATLAB.readByte(166,0);
    unsigned char q96d = MATLAB.readByte(166,1); 
	
    float q96; 
    q96 = b2f(q96a, q96b, q96c, q96d);

    int q96_1= q96a*256+q96b;
    int q96_2= q96c*256+q96d;

    if(d->s45[0] != q96)
    {
      pvPrintf(p,Q96, "Q96 = %g p.u", q96);  
      d->s45[0] = q96;
    }

  const int SE_reg[84] = {v1_1, v1_2, v1_1ph, v1_2ph, p1_1, p1_2, q1_1, q1_2, 
                          v2_1, v2_2, v2_1ph, v2_2ph, p2_1, p2_2, q2_1, q2_2,
                          v3_1, v3_2, v3_1ph, v3_2ph, p3_1, p3_2, q3_1, q3_2,
                          v4_1, v4_2, v4_1ph, v4_2ph, p45_1, p45_2, q45_1, q45_2, p46_1, p46_2, q46_1, q46_2,
                          v5_1, v5_2, v5_1ph, v5_2ph, p5_1, p5_2, q5_1, q5_2,
                          v6_1, v6_2, v6_1ph, v6_2ph, p6_1, p6_2, q6_1, q6_2,
                          v7_1, v7_2, v7_1ph, v7_2ph, p78_1, p78_2, q78_1, q78_2, p75_1, p75_2, q75_1, q75_2,
                          v8_1, v8_2, v8_1ph, v8_2ph, p8_1, p8_2, q8_1, q8_2,
                          v9_1, v9_2, v9_1ph, v9_2ph, p98_1, p98_2, q98_1, q98_2, p96_1, p96_2, q96_1, q96_2
                          }; 
  
  SE.writePresetMultipleRegisters(2,0,SE_reg,84); //Write floating type numbers to two modbus registers per number at the SE deamon

//Read State Estimation values from SE DEAMON

    unsigned char erroraSE = SE.readByte(0,0);
    unsigned char errorbSE = SE.readByte(0,1);
    unsigned char errorcSE = SE.readByte(2,0);
    unsigned char errordSE = SE.readByte(2,1); 
	
    float errorSE; 
    errorSE = b2f(erroraSE, errorbSE, errorcSE, errordSE);

    if(d->s46[0] != errorSE)
    {
      
    pvDisplayFloat(p,ErrorSE,errorSE);
//pvPrintf(p,ErrorSE, "Error_SE =  %g %", errorSE);     
      d->s46[0] = errorSE;
    }
      
  pvPrintf(p,lifeCounter_PLC,    "lifeCounter_PLC = %d"    ,counterPLC(PLC_LIFE_COUNTER_BASE));
  pvPrintf(p,lifeCounter_SE,    "lifeCounter_SE = %d"    ,counterSE(SE_LIFE_COUNTER_BASE)); 
  pvPrintf(p,lifeCounter_MATLAB,    "lifeCounter_MATLAB = %d"    ,counterMATLAB(MATLAB_LIFE_COUNTER_BASE)); 
  pvPrintf(p,readErrorCount_PLC, "readErrorCount_PLC = %d" ,counterPLC(PLC_READ_ERROR_COUNT_BASE));
  pvPrintf(p,readErrorCount_SE, "readErrorCount_SE = %d" ,counterSE(SE_READ_ERROR_COUNT_BASE));
  pvPrintf(p,readErrorCount_MATLAB, "readErrorCount_MATLAB = %d" ,counterMATLAB(MATLAB_READ_ERROR_COUNT_BASE));  
  pvPrintf(p,writeErrorCount_PLC,"writeErrorCount_PLC = %d",counterPLC(PLC_WRITE_ERROR_COUNT_BASE));
  pvPrintf(p,writeErrorCount_SE,"writeErrorCount_SE = %d",counterSE(SE_WRITE_ERROR_COUNT_BASE));
  pvPrintf(p,writeErrorCount_MATLAB,"writeErrorCount_MATLAB = %d",counterMATLAB(MATLAB_WRITE_ERROR_COUNT_BASE));

  return 0;
}

static int slotButtonEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotButtonPressedEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotButtonReleasedEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotTextEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotSliderEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotCheckboxEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotRadioButtonEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotGlInitializeEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotGlPaintEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotGlResizeEvent(PARAM *p, int id, DATA *d, int width, int height)
{
  if(p == NULL || id == 0 || d == NULL || width < 0 || height < 0) return -1;
  return 0;
}

static int slotGlIdleEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotTabEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotTableTextEvent(PARAM *p, int id, DATA *d, int x, int y, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000 || text == NULL) return -1;
  if(id == table1 && x == 1)
  {
    int val;
    sscanf(text,"%d",&val);
    PLC.writeSingleCoil(1,y,val);
  }
  return 0;
}

static int slotTableClickedEvent(PARAM *p, int id, DATA *d, int x, int y, int button)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000 || button < 0) return -1;
  return 0;
}

static int slotSelectionEvent(PARAM *p, int id, DATA *d, int val, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000 || text == NULL) return -1;
  return 0;
}

static int slotClipboardEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotRightMouseEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  //pvPopupMenu(p,-1,"Menu1,Menu2,,Menu3");
  return 0;
}

static int slotKeyboardEvent(PARAM *p, int id, DATA *d, int val, int modifier)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000 || modifier < -1000) return -1;
  return 0;
}

static int slotMouseMovedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMousePressedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMouseReleasedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMouseOverEvent(PARAM *p, int id, DATA *d, int enter)
{
  if(p == NULL || id == 0 || d == NULL || enter < -1000) return -1;
  return 0;
}

static int slotUserEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}
