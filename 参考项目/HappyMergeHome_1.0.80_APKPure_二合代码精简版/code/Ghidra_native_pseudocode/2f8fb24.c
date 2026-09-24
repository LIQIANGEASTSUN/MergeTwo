
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02f9fb24(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_02f9ff74 + 0x2f9fb3c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9ff78 + 0x2f9fb50));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ff7c + 0x2f9fb5c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ff80 + 0x2f9fb68));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ff84 + 0x2f9fb74));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ff88 + 0x2f9fb80));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ff8c + 0x2f9fb8c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ff90 + 0x2f9fb98));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ff94 + 0x2f9fba4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ff98 + 0x2f9fbb0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ff9c + 0x2f9fbbc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9ffa0 + 0x2f9fbc8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x6f5c,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_02f9ffa4 + 0x2f9fc24) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9ffa8 + 0x2f9fc40));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_02f9ffac + 0x2f9fc60));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x03b72148(iVar2,0x40,**(undefined4 **)(_UNK_02f9ffb0 + 0x2f9fc98));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_02f9ffb4 + 0x2f9fcb8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9ffb8 + 0x2f9fcd4));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar7 + 0x14);
      iVar7 = FUN_02f95f8c(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x70);
      if (*(int *)(**(int **)(_UNK_02f9ffbc + 0x2f9fd10) + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar6 = (char *)(_UNK_02f9ffc0 + 0x2f9fd34);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02f9ffc4 + 0x2f9fd50));
        *pcVar6 = '\x01';
      }
      uVar8 = VectorSignedToFloat(iVar7 / 2,(byte)(in_fpscr >> 0x16) & 3);
      if (*(int *)(**(int **)(_UNK_02f9ffc8 + 0x2f9fd68) + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar3 = (float)func_0x024f12cc(uVar8,0,0);
      iVar7 = (int)fVar3;
      if (fVar3 == _UNK_02f9ff70) {
        iVar7 = -0x80000000;
      }
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      puVar10 = *(undefined4 **)(_UNK_02f9ffcc + 0x2f9fdc4);
      iVar4 = func_0x04cfd760(iVar9,0,*puVar10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x30);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0xc) <= iVar7) {
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x04cfd760(iVar9,0,*puVar10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0xc) + -1;
      }
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x04cfd760(iVar9,0,*puVar10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar1 = 1;
      if (*(int *)(iVar4 + 0x30) != 0) {
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = func_0x04cfd760(iVar9,0,*puVar10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar9 + 0x30);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x04cd26d0(iVar9,iVar7,**(undefined4 **)(_UNK_02f9ffd0 + 0x2f9fec0));
        iVar9 = FUN_02f95f8c(param_1);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar9 + 0x70) * 6;
        if (iVar9 < iVar7 * 6) {
          puVar10 = *(undefined4 **)(_UNK_02f9ffd4 + 0x2f9ff0c);
          do {
            iVar4 = *(int *)(iVar2 + 0x10);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x03b780b0(iVar4,iVar9,*puVar10);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar1 = (uint)(*(int *)(iVar4 + 0xc) == 1);
          } while ((iVar7 * 6 + -1 != iVar9) && (iVar9 = iVar9 + 1, *(int *)(iVar4 + 0xc) == 1));
        }
      }
    }
    return uVar1;
  }
  iVar2 = func_0x029540a4(0x6f5c,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
  uVar1 = func_0x024f56e0(&uStack_30,0,0);
  return uVar1;
}

