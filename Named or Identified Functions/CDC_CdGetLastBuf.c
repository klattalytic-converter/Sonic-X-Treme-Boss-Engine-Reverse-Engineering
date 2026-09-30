
void _CDC_CdGetLastBuf(byte param_1)

{
  undefined4 local_10;
  int local_c;
  
  local_10 = 0x30000000;
  local_c = (uint)param_1 << 0x18;
  (*(code *)PTR_FUN_06066fbc)(0x40,&local_10);
  return;
}

