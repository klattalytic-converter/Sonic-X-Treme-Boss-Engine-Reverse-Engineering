
void _slBack1ColSet(undefined2 *param_1,undefined2 param_2)

{
  int unaff_gbr;
  
  *param_1 = param_2;
  *(uint *)(unaff_gbr + 0x16c) = (uint)param_1 >> 1;
  return;
}

