
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_016862e4(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_01686734 + 0x16862fc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01686738 + 0x1686310));
    func_0x01438628(*(undefined4 *)(_UNK_0168673c + 0x168631c));
    func_0x01438628(*(undefined4 *)(_UNK_01686740 + 0x1686328));
    func_0x01438628(*(undefined4 *)(_UNK_01686744 + 0x1686334));
    func_0x01438628(*(undefined4 *)(_UNK_01686748 + 0x1686340));
    func_0x01438628(*(undefined4 *)(_UNK_0168674c + 0x168634c));
    func_0x01438628(*(undefined4 *)(_UNK_01686750 + 0x1686358));
    func_0x01438628(*(undefined4 *)(_UNK_01686754 + 0x1686364));
    func_0x01438628(*(undefined4 *)(_UNK_01686758 + 0x1686370));
    func_0x01438628(*(undefined4 *)(_UNK_0168675c + 0x168637c));
    func_0x01438628(*(undefined4 *)(_UNK_01686760 + 0x1686388));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8773,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01686764 + 0x16863e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01686768 + 0x1686400));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_0168676c + 0x1686420));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar1,0x4f,**(undefined4 **)(_UNK_01686770 + 0x1686458));
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_01686774 + 0x1686478) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01686778 + 0x1686494));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar7 + 0x14);
      iVar7 = FUN_0167c750(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x70);
      if (*(int *)(**(int **)(_UNK_0168677c + 0x16864d0) + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar6 = (char *)(_UNK_01686780 + 0x16864f4);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01686784 + 0x1686510));
        *pcVar6 = '\x01';
      }
      uVar9 = VectorSignedToFloat(iVar7 / 2,(byte)(in_fpscr >> 0x16) & 3);
      if (*(int *)(**(int **)(_UNK_01686788 + 0x1686528) + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar2 = (float)func_0x024f12cc(uVar9,0,0);
      iVar7 = (int)fVar2;
      if (fVar2 == _UNK_01686730) {
        iVar7 = -0x80000000;
      }
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      puVar10 = *(undefined4 **)(_UNK_0168678c + 0x1686584);
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
        iVar7 = func_0x024f0530(iVar8,iVar7,**(undefined4 **)(_UNK_01686790 + 0x1686680));
        iVar8 = FUN_0167c750(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x70) * 6;
        if (iVar8 < iVar7 * 6) {
          puVar10 = *(undefined4 **)(_UNK_01686794 + 0x16866cc);
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
  iVar1 = func_0x029540a4(0x8773,0);
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

