
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0164e920(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
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
  
  pcVar3 = (char *)(_UNK_0164ea40 + 0x164e934);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164ea44 + 0x164e948));
    func_0x01438628(*(undefined4 *)(_UNK_0164ea48 + 0x164e954));
    func_0x01438628(*(undefined4 *)(_UNK_0164ea4c + 0x164e960));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x863d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x863d,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar2,0,0);
    uVar7 = func_0x024f56f0(&uStack_30,0,0);
    return uVar7;
  }
  piVar4 = *(int **)(_UNK_0164ea50 + 0x164e9b8);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar6 = *(undefined4 **)(_UNK_0164ea54 + 0x164e9d4);
  iVar1 = func_0x014e9518(*puVar6);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x38) != 0) {
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}

