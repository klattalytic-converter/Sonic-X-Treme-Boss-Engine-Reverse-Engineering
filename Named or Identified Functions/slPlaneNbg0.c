
void _slPlaneNbg0(byte param_1)

{
  int unaff_gbr;
  
  *(byte *)(unaff_gbr + 0xfb) = *(byte *)(unaff_gbr + 0xfb) & 0xfc | param_1;
  return;
}

