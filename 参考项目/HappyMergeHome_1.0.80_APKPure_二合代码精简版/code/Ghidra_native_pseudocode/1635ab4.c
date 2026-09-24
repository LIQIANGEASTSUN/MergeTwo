
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01645ab4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01645e98 + 0x1645acc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01645e9c + 0x1645ae0));
    func_0x01438628(*(undefined4 *)(_UNK_01645ea0 + 0x1645aec));
    func_0x01438628(*(undefined4 *)(_UNK_01645ea4 + 0x1645af8));
    func_0x01438628(*(undefined4 *)(_UNK_01645ea8 + 0x1645b04));
    func_0x01438628(*(undefined4 *)(_UNK_01645eac + 0x1645b10));
    func_0x01438628(*(undefined4 *)(_UNK_01645eb0 + 0x1645b1c));
    func_0x01438628(*(undefined4 *)(_UNK_01645eb4 + 0x1645b28));
    func_0x01438628(*(undefined4 *)(_UNK_01645eb8 + 0x1645b34));
    func_0x01438628(*(undefined4 *)(_UNK_01645ebc + 0x1645b40));
    func_0x01438628(*(undefined4 *)(_UNK_01645ec0 + 0x1645b4c));
    func_0x01438628(*(undefined4 *)(_UNK_01645ec4 + 0x1645b58));
    func_0x01438628(*(undefined4 *)(_UNK_01645ec8 + 0x1645b64));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x861e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x861e,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01645ecc + 0x1645bc0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01645ed0 + 0x1645bdc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_01645ed4 + 0x1645bfc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3a4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01645ed8 + 0x1645c30));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01645edc + 0x1645c48));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_01645ee0 + 0x1645c60));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_01645ee4 + 0x1645c8c);
    puVar8 = *(undefined4 **)(_UNK_01645ee8 + 0x1645c94);
    do {
      if (*(int *)(**(int **)(_UNK_01645eec + 0x1645c9c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01645ef0 + 0x1645cb8));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f04cc(iVar5,**(undefined4 **)(_UNK_01645ef4 + 0x1645cd8));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x3a4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f04d4(iVar5,uVar7,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x014e9678(iVar2,uVar7,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_01645ef8 + 0x1645db0));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_01645efc + 0x1645de8) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01645f00 + 0x1645e04));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f04cc(iVar5,**(undefined4 **)(_UNK_01645f04 + 0x1645e24));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x3a4);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_01645f08 + 0x1645e7c));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

