
void _slSndVolume(uint param_1)

{
  undefined1 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_gbr;
  
  puVar1 = *(undefined1 **)(unaff_gbr + 0x370);
  puVar1[2] = (byte)(param_1 >> 3) & 0xf;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_gbr + 0x374);
                    /* WARNING: Could not recover jumptable at 0x0600e50a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *puVar1 = 0x82;
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

