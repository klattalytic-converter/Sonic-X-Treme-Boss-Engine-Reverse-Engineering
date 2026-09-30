
void _atan_tbl(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
    iVar1 = 4;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    iVar1 = iVar1 + 8;
  }
  Onchip_DVSR = param_1;
  if ((int)param_1 < (int)param_2) {
    iVar1 = iVar1 + 0x10;
    Onchip_DVSR = param_2;
    param_2 = param_1;
  }
  Onchip_DVDNTH = (int)(short)(ushort)(param_2 >> 0x13);
  Onchip_DVDNTL = (param_2 >> 3) << 0x10;
                    /* WARNING: Could not recover jumptable at 0x0600c14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)&PTR_LAB_0600c19c + iVar1))(0x4000,0x8000);
  return;
}

