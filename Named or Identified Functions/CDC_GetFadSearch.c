
void _CDC_GetFadSearch(uint *param_1,uint *param_2,uint *param_3)

{
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [2];
  ushort local_1a;
  byte local_18;
  ushort local_16;
  
  uStack_20 = 0;
  local_24 = 0x50000000;
  (*(code *)PTR__CDSUB_SoftTimer_06066d78)(0,&local_24,auStack_1c);
  *param_3 = (uint)local_1a;
  *param_2 = (uint)local_18;
  *param_1 = (uint)local_16;
  return;
}

