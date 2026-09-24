
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be7fc4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int iVar6;
  char *pcVar7;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02be813c + 0x2be7fd8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be8140 + 0x2be7fec));
    func_0x01438628(*(undefined4 *)(_UNK_02be8144 + 0x2be7ff8));
    func_0x01438628(*(undefined4 *)(_UNK_02be8148 + 0x2be8004));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f7f,0);
  if (iVar1 == 0) {
    FUN_02bb3f3c(param_1);
    iVar1 = param_1[5];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x046ccb14(iVar1,0,**(undefined4 **)(_UNK_02be814c + 0x2be8078));
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02be8138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xe8))(param_1,0,*(undefined4 *)(*param_1 + 0xec));
      return;
    }
    iVar1 = param_1[5];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b72000(iVar1,0,**(undefined4 **)(_UNK_02be8150 + 0x2be80a8));
    (**(code **)(*param_1 + 0xe8))(param_1,0,*(undefined4 *)(*param_1 + 0xec));
    FUN_02bb3638(param_1,0);
    iVar1 = **(int **)(**(int **)(_UNK_02be8154 + 0x2be80e0) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    param_1 = (int *)func_0x02c3d868(iVar1,0);
    if (param_1 == (int *)0x0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_02bf0b54 + 0x2bf09c0);
    uStack_24 = unaff_r4;
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02bf0b58 + 0x2bf09d4),0);
      func_0x01438628(*(undefined4 *)(_UNK_02bf0b5c + 0x2bf09e0));
      *pcVar7 = '\x01';
    }
    uVar8 = 0;
    iVar1 = func_0x02953fd4(0x4f80,0);
    if (iVar1 == 0) {
      piStack_28 = param_1 + 0x11;
      iVar1 = *piStack_28;
      piVar11 = *(int **)(_UNK_02bf0b60 + 0x2bf0a50);
      piVar10 = *(int **)(_UNK_02bf0b64 + 0x2bf0a58);
      while( true ) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar8) break;
        if (*(uint *)(iVar1 + 0xc) <= uVar8) {
          func_0x014388e8();
        }
        iVar6 = *(int *)(iVar1 + 0x10 + uVar8 * 4);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar6 + 0xc);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x024eec50(uVar9,0,0);
        if (iVar4 == 0) {
          iVar4 = *(int *)(iVar6 + 0xc);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02c23db4(iVar4,0);
          iVar4 = *(int *)(iVar6 + 0xc);
          iVar6 = **(int **)(*piVar10 + 0x5c);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar9 = func_0x014e94d8(iVar4,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x02b599b4(iVar6,uVar9,0);
        }
        uVar8 = uVar8 + 1;
      }
      param_1[0x11] = 0;
      func_0x014385cc(piStack_28,0);
      iVar1 = param_1[0x13] * param_1[0x12];
      pcVar7 = (char *)(_UNK_02be9ddc + 0x2be9bc4);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02be9de0 + 0x2be9bd8));
        func_0x01438628(*(undefined4 *)(_UNK_02be9de4 + 0x2be9be4));
        func_0x01438628(*(undefined4 *)(_UNK_02be9de8 + 0x2be9bf0));
        func_0x01438628(*(undefined4 *)(_UNK_02be9dec + 0x2be9bfc));
        *pcVar7 = '\x01';
      }
      iVar6 = func_0x02953fd4(0x4f85,0);
      if (iVar6 == 0) {
        iVar1 = func_0x014386f0(**(undefined4 **)(_UNK_02be9df0 + 0x2be9c60),iVar1);
        piVar10 = param_1 + 0x11;
        *piVar10 = iVar1;
        func_0x014385cc(piVar10);
        iVar1 = param_1[0x13] + -1;
        piStack_28 = piVar10;
        if (-1 < iVar1) {
          iVar6 = param_1[0x12];
          do {
            if (0 < iVar6) {
              iVar4 = 0;
              do {
                piVar10 = (int *)*piStack_28;
                iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02be9df4 + 0x2be9ca8));
                func_0x02c3f5e0(iVar2,0);
                if (piVar10 == (int *)0x0) {
                  func_0x014388e4();
                }
                if ((iVar2 != 0) &&
                   (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar10 + 0x20)), iVar3 == 0)) {
                  uVar9 = func_0x01438904();
                  func_0x01438790(uVar9,0);
                }
                uVar8 = iVar1 * iVar6 + iVar4;
                if ((uint)piVar10[3] <= uVar8) {
                  func_0x014388e8();
                }
                piVar10[uVar8 + 4] = iVar2;
                func_0x014385cc(piVar10 + uVar8 + 4,iVar2);
                if (*(int *)(**(int **)(_UNK_02be9df8 + 0x2be9d28) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02be9dfc + 0x2be9d44));
                iVar2 = param_1[4];
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = FUN_02bad204(iVar6,uVar8,iVar2,0);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                uStack_40 = 0;
                uStack_3c = 9;
                uStack_38 = 0xffffffff;
                uStack_34 = 0xffffffff;
                func_0x02bed810(param_1,uVar8,*(undefined4 *)(iVar6 + 8),
                                *(undefined4 *)(iVar6 + 0xc));
                iVar6 = param_1[0x12];
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar6);
            }
            iVar1 = iVar1 + -1;
          } while (-1 < iVar1);
        }
                    /* WARNING: Could not recover jumptable at 0x02be9dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x120))(param_1,0,*(undefined4 *)(*param_1 + 0x124));
        return;
      }
      iVar6 = func_0x029540a4(0x4f85,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_20 = uStack_24;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      piStack_28 = (int *)0x0;
      func_0x024f56c0(&uStack_50,0,iVar1,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      piStack_28 = (int *)uStack_40;
      if (*(int *)(iVar6 + 0x10) != 0) {
        func_0x01523a6c(&uStack_38,*(int *)(iVar6 + 0x10),0);
      }
      func_0x01523a6c(&uStack_38,param_1,0);
      func_0x01523a2c(&uStack_38,iVar1,0);
      iVar4 = *(int *)(iVar6 + 8);
      uVar9 = *(undefined4 *)(iVar6 + 0xc);
      iVar1 = *(int *)(iVar6 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar5 = 3;
      if (iVar1 == 0) {
        uVar5 = 2;
      }
      func_0x024f56d0(iVar4,uVar9,&uStack_38,uVar5,0,0);
      return;
    }
    iVar1 = func_0x029540a4(0x4f80,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar1 = func_0x029540a4(0x4f7f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  piStack_28 = (int *)uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x024f56d0(iVar6,uVar9,&uStack_30,uVar5);
  return;
}

