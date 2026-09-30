
undefined4 * _GFTR_SetTransFunc(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  (*(code *)PTR_FUN_06063c7c)();
  param_1[0xd] = 0;
  (*(code *)PTR_FUN_06063c80)(param_1,3);
  return param_1;
}

