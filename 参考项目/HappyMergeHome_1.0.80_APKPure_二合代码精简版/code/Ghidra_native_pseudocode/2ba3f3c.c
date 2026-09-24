
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb3f3c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
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
  
  pcVar7 = (char *)(_UNK_02bb403c + 0x2bb3f50);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb4040 + 0x2bb3f64));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4044 + 0x2bb3f70));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4048 + 0x2bb3f7c));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x2535,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x2535,0);
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
    iVar6 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02bb404c + 0x2bb3fd4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bb4050 + 0x2bb3ff0));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_02bb4054 + 0x2bb4010));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar5 = (undefined4 *)(param_1 + 0x14);
  *puVar5 = *(undefined4 *)(iVar3 + 8);
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar5 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

