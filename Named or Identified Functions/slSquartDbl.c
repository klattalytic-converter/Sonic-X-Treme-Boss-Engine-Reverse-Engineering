
int slSquartDbl(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 2;
  iVar3 = 0;
  uVar5 = 0;
  iVar4 = 0x10;
  do {
    do {
      uVar1 = param_1 & 0x80000000;
      uVar2 = param_1 & 0x40000000;
      param_1 = param_1 << 2;
      uVar5 = (uVar5 << 1 | (uint)(uVar1 != 0)) << 1 | (uint)(uVar2 != 0);
      iVar3 = iVar3 * 2;
      iVar4 = iVar4 + -1;
      if (iVar3 + 1U <= uVar5) {
        uVar5 = uVar5 - (iVar3 + 1U);
        iVar3 = iVar3 + 2;
      }
    } while (iVar4 != 0);
    iVar6 = iVar6 + -1;
    iVar4 = 0xf;
    param_1 = param_2;
  } while (iVar6 != 0);
  return iVar3;
}

