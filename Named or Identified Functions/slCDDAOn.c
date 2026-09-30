
void _slCDDAOn(ushort param_1,ushort param_2,char param_3,char param_4)

{
  undefined1 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *extraout_r2;
  uint uVar2;
  uint uVar3;
  int unaff_gbr;
  
  puVar1 = *(undefined1 **)(unaff_gbr + 0x370);
  *(ushort *)(puVar1 + 2) = (param_2 & 0x70 | (param_1 & 0x70) << 8) << 1;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_gbr + 0x374);
  *puVar1 = 0x80;
  (*UNRECOVERED_JUMPTABLE)();
  uVar2 = (uint)param_3;
  uVar3 = (uint)param_4;
  if ((int)uVar2 < 0) {
    uVar2 = ~uVar2 - 0x80;
  }
  if ((int)uVar3 < 0) {
    uVar3 = ~uVar3 - 0x80;
  }
  *(ushort *)(extraout_r2 + 2) = (ushort)((uVar3 & 0xff) >> 3) | (ushort)((uVar2 >> 3) << 8);
                    /* WARNING: Could not recover jumptable at 0x0600e312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *extraout_r2 = 0x81;
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

