
void _CDC_GetCopyErr(byte param_1,undefined1 param_2)

{
  int local_10 [3];
  
  local_10[1] = 0;
  local_10[0] = CONCAT13(0x60,(uint3)param_1 << 0x10);
  local_10[0] = (uint)CONCAT21(local_10[0]._0_2_,param_2) << 8;
  (*(code *)PTR_FUN_060668b4)(0x40,local_10);
  return;
}

