
void _CDC_CdScan(int param_1)

{
  undefined *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = PTR_FUN_06060a1c;
  local_14 = 0;
  local_18 = 0x10000000;
  (*(code *)PTR_FUN_06060a1c)(param_1,(int)&local_18 + 1);
  local_14 = CONCAT13(*(undefined1 *)(param_1 + 0x10),local_14._1_3_);
  (*(code *)puVar1)(param_1 + 8,(int)&local_14 + 1);
  (*(code *)PTR_FUN_06060a20)(0,&local_18);
  return;
}

