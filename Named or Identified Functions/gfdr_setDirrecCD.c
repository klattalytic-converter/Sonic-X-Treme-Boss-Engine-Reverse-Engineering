
int _gfdr_setDirrecCd(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  uint local_18 [2];
  
  if (param_1 != 0) {
    (*(code *)PTR_FUN_06063348)(param_1,0,0,0,local_18);
    if ((local_18[0] & 0x80) == 0) {
      return -6;
    }
    iVar1 = (*(code *)PTR_FUN_0606334c)(param_1,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (*param_2 == 0) {
    iVar1 = param_2[1];
    pcVar2 = (code *)PTR_FUN_06063350;
  }
  else {
    iVar1 = param_2[1];
    pcVar2 = (code *)PTR_FUN_06063354;
  }
  iVar1 = (*pcVar2)(param_1,param_2[2],iVar1);
  return iVar1;
}

