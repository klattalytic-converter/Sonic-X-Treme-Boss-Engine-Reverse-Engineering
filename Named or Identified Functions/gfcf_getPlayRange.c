
undefined4 _gfcf_getPlayRange(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = PTR_FUN_06062aa8;
  puVar1 = PTR_DAT_06062aa4;
  iVar6 = (int)DAT_06062aa0;
  iVar5 = *(int *)PTR_DAT_06062aa4;
  puVar4 = (uint *)(iVar5 + iVar6);
  *puVar4 = *puVar4 & 0xfffffffe;
  iVar5 = (*(code *)puVar2)(iVar5 + DAT_06062aa2,param_1);
  if (iVar5 == 0) {
    puVar4 = (uint *)(*(int *)puVar1 + iVar6);
    *puVar4 = *puVar4 | 1;
  }
  switch(iVar5) {
  case 0:
    uVar3 = 0;
    break;
  case -0x10:
    uVar3 = 0xffffffe7;
    break;
  case -0xf:
    uVar3 = 0xfffffffd;
    break;
  case -0xe:
    uVar3 = 0xfffffffe;
    break;
  case -0xd:
    uVar3 = 0xffffffe9;
    break;
  default:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

