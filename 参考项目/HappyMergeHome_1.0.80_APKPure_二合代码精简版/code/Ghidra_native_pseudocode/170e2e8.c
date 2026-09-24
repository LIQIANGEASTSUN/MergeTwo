
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0171e2e8(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_0171e738 + 0x171e300);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0171e73c + 0x171e314));
    func_0x01438628(*(undefined4 *)(_UNK_0171e740 + 0x171e320));
    func_0x01438628(*(undefined4 *)(_UNK_0171e744 + 0x171e32c));
    func_0x01438628(*(undefined4 *)(_UNK_0171e748 + 0x171e338));
    func_0x01438628(*(undefined4 *)(_UNK_0171e74c + 0x171e344));
    func_0x01438628(*(undefined4 *)(_UNK_0171e750 + 0x171e350));
    func_0x01438628(*(undefined4 *)(_UNK_0171e754 + 0x171e35c));
    func_0x01438628(*(undefined4 *)(_UNK_0171e758 + 0x171e368));
    func_0x01438628(*(undefined4 *)(_UNK_0171e75c + 0x171e374));
    func_0x01438628(*(undefined4 *)(_UNK_0171e760 + 0x171e380));
    func_0x01438628(*(undefined4 *)(_UNK_0171e764 + 0x171e38c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8b58,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0171e768 + 0x171e3e8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0171e76c + 0x171e404));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0171e770 + 0x171e424));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar1,0x54,**(undefined4 **)(_UNK_0171e774 + 0x171e45c));
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_0171e778 + 0x171e47c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0171e77c + 0x171e498));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar7 + 0x14);
      iVar7 = FUN_01714754(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x70);
      if (*(int *)(**(int **)(_UNK_0171e780 + 0x171e4d4) + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar6 = (char *)(_UNK_0171e784 + 0x171e4f8);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_0171e788 + 0x171e514));
        *pcVar6 = '\x01';
      }
      uVar9 = VectorSignedToFloat(iVar7 / 2,(byte)(in_fpscr >> 0x16) & 3);
      if (*(int *)(**(int **)(_UNK_0171e78c + 0x171e52c) + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar2 = (float)func_0x024f12cc(uVar9,0,0);
      iVar7 = (int)fVar2;
      if (fVar2 == _UNK_0171e734) {
        iVar7 = -0x80000000;
      }
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      puVar10 = *(undefined4 **)(_UNK_0171e790 + 0x171e588);
      iVar3 = func_0x0152983c(iVar8,0,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x30);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar7) {
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x0152983c(iVar8,0,*puVar10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0xc) + -1;
      }
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0152983c(iVar8,0,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar4 = 1;
      if (*(int *)(iVar3 + 0x30) != 0) {
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = func_0x0152983c(iVar8,0,*puVar10);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x30);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x024f0530(iVar8,iVar7,**(undefined4 **)(_UNK_0171e794 + 0x171e684));
        iVar8 = FUN_01714754(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x70) * 6;
        if (iVar8 < iVar7 * 6) {
          puVar10 = *(undefined4 **)(_UNK_0171e798 + 0x171e6d0);
          do {
            iVar3 = *(int *)(iVar1 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x014e9698(iVar3,iVar8,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar4 = (uint)(*(int *)(iVar3 + 0xc) == 1);
          } while ((iVar7 * 6 + -1 != iVar8) && (iVar8 = iVar8 + 1, *(int *)(iVar3 + 0xc) == 1));
        }
      }
    }
    return uVar4;
  }
  iVar1 = func_0x029540a4(0x8b58,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar5,0,0);
  uVar4 = func_0x024f56e0(&uStack_30,0,0);
  return uVar4;
}

