
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c3b8a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x11dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x11dd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    uVar2 = func_0x0286e8b4(iVar1,param_1,param_2,param_3);
    return uVar2;
  }
  pcVar4 = (char *)(_UNK_02c3e9dc + 0x2c3e764);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3e9e0 + 0x2c3e778));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e9e4 + 0x2c3e784));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e9e8 + 0x2c3e790));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e9ec + 0x2c3e79c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e9f0 + 0x2c3e7a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e9f4 + 0x2c3e7b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e9f8 + 0x2c3e7c0));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar2 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x11de,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02c3d564(param_1,param_2);
    if ((iVar1 != 0) &&
       (bVar9 = *(int *)(iVar1 + 0xc) != 0, uVar2 = (uint)bVar9, bVar9 && param_3 != 0)) {
      func_0x0152da0c(&uStack_40,iVar1,**(undefined4 **)(_UNK_02c3e9fc + 0x2c3e868));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar6 = *(undefined4 **)(_UNK_02c3ea00 + 0x2c3e884);
      piVar7 = *(int **)(_UNK_02c3ea04 + 0x2c3e88c);
      puVar8 = *(undefined4 **)(_UNK_02c3ea08 + 0x2c3e894);
      do {
        iVar3 = func_0x04878f14(&uStack_30,*puVar6);
        iVar1 = iStack_24;
        if (iVar3 == 0) {
          iVar1 = 5;
          goto LAB_02c3e918;
        }
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(*puVar8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = *(undefined4 *)(iVar1 + 0x1c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02bd149c(iVar3,uVar5,0);
      } while (iVar1 == 0);
      iVar1 = 8;
LAB_02c3e918:
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02c3ea0c + 0x2c3e924));
      uVar2 = 0;
      if (iVar1 != 8) {
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x11de,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0286e8b4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

