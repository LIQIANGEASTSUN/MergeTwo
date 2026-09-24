
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01af0640(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01af0a60 + 0x1af0658);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af0a64 + 0x1af066c));
    func_0x01438628(*(undefined4 *)(_UNK_01af0a68 + 0x1af0678));
    func_0x01438628(*(undefined4 *)(_UNK_01af0a6c + 0x1af0684));
    func_0x01438628(*(undefined4 *)(_UNK_01af0a70 + 0x1af0690));
    func_0x01438628(*(undefined4 *)(_UNK_01af0a74 + 0x1af069c));
    func_0x01438628(*(undefined4 *)(_UNK_01af0a78 + 0x1af06a8));
    func_0x01438628(*(undefined4 *)(_UNK_01af0a7c + 0x1af06b4));
    func_0x01438628(*(undefined4 *)(_UNK_01af0a80 + 0x1af06c0));
    func_0x01438628(*(undefined4 *)(_UNK_01af0a84 + 0x1af06cc));
    func_0x01438628(*(undefined4 *)(_UNK_01af0a88 + 0x1af06d8));
    func_0x01438628(*(undefined4 *)(_UNK_01af0a8c + 0x1af06e4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa4da,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar5,0,0);
    uVar9 = func_0x024f56e0(&uStack_30,0,0);
    return uVar9;
  }
  if (*(int *)(**(int **)(_UNK_01af0a90 + 0x1af0740) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01af0a94 + 0x1af075c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01af0a98 + 0x1af077c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
    iVar8 = func_0x024f0584(0,0x59,**(undefined4 **)(_UNK_01af0a9c + 0x1af07dc));
    if (iVar8 == 0) {
      return 0;
    }
    func_0x014388e4();
  }
  else {
    iVar8 = func_0x024f0584(iVar1,0x59,**(undefined4 **)(_UNK_01af0ab4 + 0x1af07b0));
    if (iVar8 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x024f110c(iVar1,0x59,**(undefined4 **)(_UNK_01af0aa0 + 0x1af0804));
  uVar9 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_01ae5790(param_1);
    iVar8 = 0;
    if (iVar2 != 0) {
      iVar8 = *(int *)(iVar2 + 0x20);
    }
    if (iVar2 != 0 && iVar8 != 0) {
      iVar8 = FUN_01ae5790(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x20);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar8 + 0xc)) {
        iVar8 = FUN_01ae5790(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x1c);
        if (iVar8 < 2) {
          iVar8 = 1;
        }
        iVar2 = FUN_01ae99ac(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x014e5f78(*(undefined4 *)(iVar2 + 0x50),iVar8);
        iVar8 = FUN_01ae5790(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x20);
        uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar8 + 0xc) <= (int)uVar3) {
          iVar8 = FUN_01ae5790(param_1);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar8 + 0x20);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar3 = *(int *)(iVar8 + 0xc) - 1;
        }
        iVar8 = *(int *)(iVar1 + 8);
        if (iVar8 < 2) {
          iVar8 = 1;
        }
        iVar2 = FUN_01ae5790(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x20);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f0530(iVar2,uVar3,**(undefined4 **)(_UNK_01af0aa4 + 0x1af096c));
        iVar4 = FUN_01ae99ac(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar4 + 0x50) * iVar8;
        if (iVar6 < iVar2 * iVar8) {
          iVar8 = iVar8 * (iVar2 - *(int *)(iVar4 + 0x50));
          puVar11 = *(undefined4 **)(_UNK_01af0aa8 + 0x1af09bc);
          puVar10 = *(undefined4 **)(_UNK_01af0aac + 0x1af09c4);
          do {
            iVar2 = *(int *)(iVar1 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0xc) <= iVar6) break;
            if (*(int *)(**(int **)(_UNK_01af0ab0 + 0x1af09e8) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x014e9518(*puVar11);
            iVar4 = *(int *)(iVar1 + 0x10);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar9 = func_0x014e9698(iVar4,iVar6,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x02bd10d0(iVar2,uVar9,0);
            if (iVar2 == 0) {
              return 0;
            }
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        uVar9 = 1;
      }
    }
  }
  return uVar9;
}

