
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c31ea4(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02c32010 + 0x2c31eb8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c32014 + 0x2c31ecc));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x21bf,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x21bf,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  uVar8 = *(undefined4 *)(param_1 + 0x84);
  if (*(int *)(**(int **)(_UNK_02c32018 + 0x2c31f24) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x024eec50(uVar8,0,0);
  if (iVar3 == 0) {
    piVar7 = (int *)(param_1 + 0x124);
    if (*piVar7 != 0) {
      func_0x024f0fd8(param_1,*piVar7,0);
    }
    iVar3 = *(int *)(param_1 + 0x84);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x014e94d8(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar3,0,0);
    iVar3 = *(int *)(param_1 + 0x84);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x014e94d8(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar3,1,0);
    uVar8 = func_0x02c3201c(param_1);
    uVar8 = func_0x024ef208(param_1,uVar8,0);
    *(undefined4 *)(param_1 + 0x124) = uVar8;
    if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
      puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar7 >> 0x11) * 4);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar7 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
  return;
}

