
uint _slTan(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (param_1 + 2U & 0xff00) >> 8 & 0x7c;
  iVar3 = uVar2 * 2;
  uVar5 = (uint)(char)(&DAT_0600ff0e)[iVar3];
  iVar4 = (int)(char)(&DAT_0600ff0f)[iVar3];
  uVar1 = *(ushort *)
           ((int)&UNK_0601003a +
           (((param_1 + 2U ^ (int)*(short *)(&DAT_0600ff0c + iVar3)) & (int)DAT_0600ff04) >> 1) + 2)
  ;
  switch(uVar2) {
  default:
    return (uint)uVar1 + iVar4 ^ uVar5;
  case 0x20:
  case 0x24:
  case 0x28:
  case 0x54:
  case 0x58:
  case 0x5c:
    return ((uint)uVar1 + iVar4) * 2 ^ uVar5;
  case 0x2c:
  case 0x30:
  case 0x4c:
  case 0x50:
    return ((uint)uVar1 + iVar4) * 4 ^ uVar5;
  case 0x34:
  case 0x38:
  case 0x44:
  case 0x48:
    return ((uint)uVar1 + iVar4) * 0x10 ^ uVar5;
  case 0x3c:
  case 0x40:
    return ((uint)uVar1 + iVar4) * 0x100 ^ uVar5;
  }
}

