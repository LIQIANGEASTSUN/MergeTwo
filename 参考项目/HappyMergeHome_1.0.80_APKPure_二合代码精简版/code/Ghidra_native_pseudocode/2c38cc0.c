
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c48cc0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02c4909c + 0x2c48cdc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c490a0 + 0x2c48cf0));
    func_0x01438628(*(undefined4 *)(_UNK_02c490a4 + 0x2c48cfc));
    func_0x01438628(*(undefined4 *)(_UNK_02c490a8 + 0x2c48d08));
    func_0x01438628(*(undefined4 *)(_UNK_02c490ac + 0x2c48d14));
    func_0x01438628(*(undefined4 *)(_UNK_02c490b0 + 0x2c48d20));
    func_0x01438628(*(undefined4 *)(_UNK_02c490b4 + 0x2c48d2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c490b8 + 0x2c48d38));
    func_0x01438628(*(undefined4 *)(_UNK_02c490bc + 0x2c48d44));
    func_0x01438628(*(undefined4 *)(_UNK_02c490c0 + 0x2c48d50));
    func_0x01438628(*(undefined4 *)(_UNK_02c490c4 + 0x2c48d5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c490c8 + 0x2c48d68));
    *pcVar3 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x5dcd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5dcd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0287b504(iVar1,param_1,param_2,0);
    return uVar2;
  }
  iVar1 = func_0x02c490f8(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  piVar8 = (int *)(param_1 + 0x1c);
  if (*piVar8 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c490cc + 0x2c48eb0));
    func_0x024f0510(iVar1,**(undefined4 **)(_UNK_02c490d0 + 0x2c48ec4));
    *piVar8 = iVar1;
    func_0x014385cc(piVar8,iVar1);
    if (*(int *)(**(int **)(_UNK_02c490d4 + 0x2c48ee8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02c490d8 + 0x2c48f04));
    piVar5 = *(int **)(_UNK_02c490dc + 0x2c48f18);
    iVar7 = *piVar5;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar5;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x60);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029b3df0(iVar1,uVar2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
      iVar7 = func_0x024ef4b8(0,**(undefined4 **)(_UNK_02c490e0 + 0x2c48f94),0);
      if (iVar7 == 0) goto LAB_02c48de4;
      func_0x014388e4();
    }
    else {
      iVar7 = func_0x024ef4b8(iVar1,**(undefined4 **)(_UNK_02c490f4 + 0x2c48f6c),0);
      if (iVar7 == 0) goto LAB_02c48de4;
    }
    uVar6 = 0;
    iVar1 = func_0x024ef5c8(iVar1,0x3b,0,0);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar6) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar6) {
        func_0x014388e8();
      }
      iVar7 = func_0x024eef10(*(undefined4 *)(iVar1 + 0x10 + uVar6 * 4),&uStack_28,0);
      uVar2 = uStack_28;
      if (iVar7 != 0) {
        iVar7 = *piVar8;
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar10 = *(int *)(iVar7 + 8);
        uVar9 = *(uint *)(iVar7 + 0xc);
        piVar5 = *(int **)(_UNK_02c490e4 + 0x2c49044);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
        iVar4 = *piVar5;
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        if (uVar9 < *(uint *)(iVar10 + 0xc)) {
          *(uint *)(iVar7 + 0xc) = uVar9 + 1;
          *(undefined4 *)(iVar10 + uVar9 * 4 + 0x10) = uVar2;
        }
        else {
          func_0x024f0520(iVar7,uVar2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
        }
      }
      uVar6 = uVar6 + 1;
    }
  }
LAB_02c48de4:
  if (*(int *)(**(int **)(_UNK_02c490e8 + 0x2c48df0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c490ec + 0x2c48e0c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = func_0x02e797c4(iVar1,0);
  if (1 < iVar1) {
    iVar4 = *piVar8;
    iVar7 = (uint)(iVar1 == 8) << 1;
    if (iVar1 == 4) {
      iVar7 = 1;
    }
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (iVar7 < *(int *)(iVar4 + 0xc)) {
      iVar1 = *piVar8;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x024f0530(iVar1,iVar7,**(undefined4 **)(_UNK_02c490f0 + 0x2c48e8c));
    }
  }
  return uVar2;
}

