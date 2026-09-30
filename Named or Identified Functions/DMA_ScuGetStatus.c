
void _DMA_ScuGetStatus(uint *param_1,uint param_2)

{
  bool bVar1;
  int unaff_gbr;
  
  bVar1 = false;
  if ((*(byte *)(((param_2 & 0xff) - 0x45 & 0xff) + unaff_gbr) & 4) == 0) {
    bVar1 = ((uint)(&PTR_DAT_0600e558)[param_2] & *(uint *)PTR_SCU_DSTA_0600e554) == 0;
  }
  *param_1 = (uint)bVar1;
  return;
}

