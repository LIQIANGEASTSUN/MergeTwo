
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c81c04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01c81ed0 + 0x1c81c20);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c81ed4 + 0x1c81c34));
    func_0x01438628(*(undefined4 *)(_UNK_01c81ed8 + 0x1c81c40));
    func_0x01438628(*(undefined4 *)(_UNK_01c81edc + 0x1c81c4c));
    func_0x01438628(*(undefined4 *)(_UNK_01c81ee0 + 0x1c81c58));
    func_0x01438628(*(undefined4 *)(_UNK_01c81ee4 + 0x1c81c64));
    func_0x01438628(*(undefined4 *)(_UNK_01c81ee8 + 0x1c81c70));
    func_0x01438628(*(undefined4 *)(_UNK_01c81eec + 0x1c81c7c));
    func_0x01438628(*(undefined4 *)(_UNK_01c81ef0 + 0x1c81c88));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xadd9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xadd9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = FUN_01c733a0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0584(iVar1,param_2,**(undefined4 **)(_UNK_01c81ef4 + 0x1c81d14));
  if (iVar1 != 0) {
    iVar1 = FUN_01c6a748(param_1,param_2);
    iVar4 = FUN_01c733a0(param_1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x4c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    puVar7 = *(undefined4 **)(_UNK_01c81ef8 + 0x1c81d70);
    iVar4 = func_0x03b72148(iVar4,param_2,*puVar7);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if ((*(int *)(iVar4 + 0xc) < iVar1) && (0 < iVar1)) {
      iVar4 = 0;
      puVar8 = *(undefined4 **)(_UNK_01c81efc + 0x1c81db8);
      puVar9 = *(undefined4 **)(_UNK_01c81f00 + 0x1c81dc0);
      do {
        iVar2 = FUN_01c733a0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x4c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b72148(iVar2,param_2,*puVar7);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f0f34(iVar2,iVar4,*puVar8);
        if (iVar2 == 0) {
          if (*(int *)(**(int **)(_UNK_01c81f04 + 0x1c81e38) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_01c81f08 + 0x1c81e54));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar6 = *(undefined4 *)(iVar2 + 0x60);
          if (*(int *)(**(int **)(_UNK_01c81f0c + 0x1c81e74) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x0364a714(uVar6,0,*puVar9);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          FUN_01c7a7d4(param_1,param_2,iVar4,*(undefined4 *)(iVar2 + 8));
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  return;
}

