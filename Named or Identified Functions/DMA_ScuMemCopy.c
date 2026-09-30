
/* DMA data transfer.
   below, function should be written as:
   }void DMA_ScuMemCopy(void *dst, void *src, Uint32 cnt) */

void DMA_ScuMemCopy(undefined *dst,undefined *src,undefined4 cnt)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int unaff_gbr;
  
  puVar2 = PTR_SCU_D0R_0601a09c;
  if (((src < PTR_DAT_0601a080) && (PTR_DAT_0601a07c <= src)) ||
     ((dst < PTR_DAT_0601a080 && (PTR_DAT_0601a07c <= dst)))) {
LAB_0601a064:
    (*(code *)PTR_slCashPurge_0601a090)(src,dst);
    *(undefined1 *)(unaff_gbr + 0xb8) = 1;
    return;
  }
  if ((src < PTR_DAT_0601a080 + (int)PTR_DAT_0601a084) &&
     (PTR_DAT_0601a07c + (int)PTR_DAT_0601a084 <= src)) goto LAB_0601a064;
  if ((dst < PTR_DAT_0601a080 + (int)PTR_DAT_0601a084) &&
     (PTR_DAT_0601a07c + (int)PTR_DAT_0601a084 <= dst)) goto LAB_0601a064;
  iVar4 = (int)DAT_0601a078;
  if ((PTR_DAT_0601a08c <= dst) || (dst < PTR_DAT_0601a088)) {
    if ((PTR_DAT_0601a08c + (int)PTR_DAT_0601a084 <= dst) ||
       (dst < PTR_DAT_0601a088 + (int)PTR_DAT_0601a084)) goto LAB_0601a026;
  }
  iVar4 = iVar4 + -1;
LAB_0601a026:
  bVar1 = *(byte *)(unaff_gbr + 0xbb);
  while( true ) {
    if ((bVar1 & 4) != 0) break;
    iVar3 = 0x30;
    if (((uint)PTR_DAT_0601a098 & *(uint *)PTR_SCU_DSTA_0601a094) == 0) break;
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    bVar1 = *(byte *)(unaff_gbr + 0xbb);
  }
  *(undefined **)PTR_SCU_D0R_0601a09c = src;
  *(undefined **)(puVar2 + 4) = dst;
  *(undefined4 *)(puVar2 + 8) = cnt;
  *(int *)(puVar2 + 0xc) = iVar4;
  *(undefined4 *)(puVar2 + 0x14) = 7;
  iVar4 = (int)DAT_0601a07a;
  *(undefined1 *)(unaff_gbr + 0xbb) = 0x10;
  *(int *)(puVar2 + 0x10) = iVar4;
  *(undefined1 *)(unaff_gbr + 0xb8) = 3;
  return;
}

