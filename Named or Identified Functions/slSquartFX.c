
uint _slSquartFX(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0x10;
  uVar5 = 0;
  uVar1 = 0;
  do {
    while( true ) {
      uVar3 = uVar1;
      uVar1 = param_1 & 0x80000000;
      uVar2 = param_1 & 0x40000000;
      param_1 = param_1 << 2;
      uVar5 = (uVar5 << 1 | (uint)(uVar1 != 0)) << 1 | (uint)(uVar2 != 0);
      uVar2 = uVar3 * 2;
      if (uVar2 + 1 <= uVar5) break;
      iVar4 = iVar4 + -1;
      uVar1 = uVar2;
      if (iVar4 == 0) {
        return uVar3 & 0x7fffffff;
      }
    }
    uVar5 = uVar5 - (uVar2 + 1);
    iVar4 = iVar4 + -1;
    uVar1 = uVar2 + 2;
  } while (iVar4 != 0);
  return uVar2 + 2 >> 1;
}

