
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf09a8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  
  pcVar6 = (char *)(_UNK_02bf0b54 + 0x2bf09c0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf0b58 + 0x2bf09d4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf0b5c + 0x2bf09e0));
    *pcVar6 = '\x01';
  }
  uVar8 = 0;
  iVar3 = func_0x02953fd4(0x4f80,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4f80,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    piStack_28 = (int *)uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar5);
    return;
  }
  piStack_28 = param_1 + 0x11;
  iVar3 = *piStack_28;
  piVar11 = *(int **)(_UNK_02bf0b60 + 0x2bf0a50);
  piVar10 = *(int **)(_UNK_02bf0b64 + 0x2bf0a58);
  while( true ) {
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar8) break;
    if (*(uint *)(iVar3 + 0xc) <= uVar8) {
      func_0x014388e8();
    }
    iVar7 = *(int *)(iVar3 + 0x10 + uVar8 * 4);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(iVar7 + 0xc);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x024eec50(uVar9,0,0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar7 + 0xc);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x02c23db4(iVar4,0);
      iVar4 = *(int *)(iVar7 + 0xc);
      iVar7 = **(int **)(*piVar10 + 0x5c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x014e94d8(iVar4,0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02b599b4(iVar7,uVar9,0);
    }
    uVar8 = uVar8 + 1;
  }
  param_1[0x11] = 0;
  func_0x014385cc(piStack_28,0);
  iVar3 = param_1[0x13] * param_1[0x12];
  pcVar6 = (char *)(_UNK_02be9ddc + 0x2be9bc4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be9de0 + 0x2be9bd8));
    func_0x01438628(*(undefined4 *)(_UNK_02be9de4 + 0x2be9be4));
    func_0x01438628(*(undefined4 *)(_UNK_02be9de8 + 0x2be9bf0));
    func_0x01438628(*(undefined4 *)(_UNK_02be9dec + 0x2be9bfc));
    *pcVar6 = '\x01';
  }
  iVar7 = func_0x02953fd4(0x4f85,0);
  if (iVar7 != 0) {
    iVar7 = func_0x029540a4(0x4f85,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    piStack_28 = (int *)0x0;
    func_0x024f56c0(&uStack_50,0,iVar3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    piStack_28 = (int *)uStack_40;
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,iVar3,0);
    iVar4 = *(int *)(iVar7 + 8);
    uVar9 = *(undefined4 *)(iVar7 + 0xc);
    iVar3 = *(int *)(iVar7 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar3 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar4,uVar9,&uStack_38,uVar5,0,0);
    return;
  }
  iVar3 = func_0x014386f0(**(undefined4 **)(_UNK_02be9df0 + 0x2be9c60),iVar3);
  piVar10 = param_1 + 0x11;
  *piVar10 = iVar3;
  func_0x014385cc(piVar10);
  iVar3 = param_1[0x13] + -1;
  piStack_28 = piVar10;
  if (-1 < iVar3) {
    iVar7 = param_1[0x12];
    do {
      if (0 < iVar7) {
        iVar4 = 0;
        do {
          piVar10 = (int *)*piStack_28;
          iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02be9df4 + 0x2be9ca8));
          func_0x02c3f5e0(iVar1,0);
          if (piVar10 == (int *)0x0) {
            func_0x014388e4();
          }
          if ((iVar1 != 0) &&
             (iVar2 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar10 + 0x20)), iVar2 == 0)) {
            uVar9 = func_0x01438904();
            func_0x01438790(uVar9,0);
          }
          uVar8 = iVar3 * iVar7 + iVar4;
          if ((uint)piVar10[3] <= uVar8) {
            func_0x014388e8();
          }
          piVar10[uVar8 + 4] = iVar1;
          func_0x014385cc(piVar10 + uVar8 + 4,iVar1);
          if (*(int *)(**(int **)(_UNK_02be9df8 + 0x2be9d28) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02be9dfc + 0x2be9d44));
          iVar1 = param_1[4];
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = FUN_02bad204(iVar7,uVar8,iVar1,0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uStack_40 = 0;
          uStack_3c = 9;
          uStack_38 = 0xffffffff;
          uStack_34 = 0xffffffff;
          FUN_02bed810(param_1,uVar8,*(undefined4 *)(iVar7 + 8),*(undefined4 *)(iVar7 + 0xc));
          iVar7 = param_1[0x12];
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar7);
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x02be9dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,0,*(undefined4 *)(*param_1 + 0x124));
  return;
}

