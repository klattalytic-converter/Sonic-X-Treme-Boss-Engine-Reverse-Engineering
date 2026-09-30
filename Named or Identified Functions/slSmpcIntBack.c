
int _slSmpcIntBack(void)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  puVar2 = PTR_DAT_0601a768;
  pcVar5 = PTR_DAT_0601a75c + 2;
  *PTR_DAT_0601a768 = *PTR_DAT_0601a75c;
  iVar4 = 7;
  pcVar3 = puVar2 + 4;
  do {
    pcVar6 = pcVar3;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 2;
    *pcVar6 = cVar1;
    iVar4 = iVar4 + -1;
    pcVar3 = pcVar6 + 1;
  } while (iVar4 != 0);
  pcVar6 = pcVar6 + 2;
  iVar4 = 4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 2;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 2;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return (int)cVar1;
}

