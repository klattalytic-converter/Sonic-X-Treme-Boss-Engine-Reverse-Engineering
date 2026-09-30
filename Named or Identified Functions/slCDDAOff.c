
void _slCDDAOff(void)

{
  undefined1 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_gbr;
  
  puVar1 = *(undefined1 **)(unaff_gbr + 0x370);
  *(undefined2 *)(puVar1 + 2) = 0;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_gbr + 0x374);
                    /* WARNING: Could not recover jumptable at 0x0600e324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *puVar1 = 0x80;
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

