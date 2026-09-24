
/* WARNING: Possible PIC construction at 0x02bac110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bac114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02babfe0(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar2 = func_0x02953fd4(0x5cbd,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5cbd,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028f9e50(iVar2,param_1,param_2,param_3,param_4,0);
    return;
  }
  if (param_2 == 0) {
    func_0x014388e4();
    bVar4 = false;
    iVar2 = func_0x02be9188(0,0);
    if (iVar2 < 1) goto LAB_02bac0d8;
    func_0x014388e4();
    uVar3 = func_0x02be9188(0,0);
    func_0x014388e4();
  }
  else {
    bVar4 = false;
    iVar2 = func_0x02be9188(param_2,0);
    if (iVar2 < 1) goto LAB_02bac0d8;
    uVar3 = func_0x02be9188(param_2,0);
  }
  bVar4 = false;
  iVar2 = func_0x02beba7c(param_2,uVar3,0);
  if (iVar2 != 0) {
    bVar4 = *param_4 == iVar2;
  }
LAB_02bac0d8:
  iVar2 = *param_3;
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if ((bool)(~bVar4 & *(int *)(iVar2 + 0x14) != 0)) {
    return;
  }
  *param_3 = *param_4;
  if (*(int *)(_UNK_01408518 + 0x14084d8) == 0) {
    return;
  }
  puVar1 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)param_3 >> 0x11) * 4);
  do {
    bVar4 = (bool)hasExclusiveAccess(puVar1);
  } while (!bVar4);
  *puVar1 = *puVar1 | 1 << (((uint)param_3 & 0x1ffff) >> 0xc);
  return;
}

