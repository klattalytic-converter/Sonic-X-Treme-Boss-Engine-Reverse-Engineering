
undefined4 _CSH_Purge(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 & DAT_0600e528 | DAT_0600e52c);
  iVar2 = param_2 + (int)puVar1;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
  } while ((int)puVar1 < iVar2);
  return 0;
}

