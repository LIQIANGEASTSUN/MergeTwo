
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aef474(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  
  pcVar6 = (char *)(_UNK_01aefd40 + 0x1aef490);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aefd44 + 0x1aef4a4));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd48 + 0x1aef4b0));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd4c + 0x1aef4bc));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd50 + 0x1aef4c8));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd54 + 0x1aef4d4));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd58 + 0x1aef4e0));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd5c + 0x1aef4ec));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd60 + 0x1aef4f8));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd64 + 0x1aef504));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd68 + 0x1aef510));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd6c + 0x1aef51c));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd70 + 0x1aef528));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd74 + 0x1aef534));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd78 + 0x1aef540));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd7c + 0x1aef54c));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd80 + 0x1aef558));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd84 + 0x1aef564));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd88 + 0x1aef570));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd8c + 0x1aef57c));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd90 + 0x1aef588));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd94 + 0x1aef594));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd98 + 0x1aef5a0));
    func_0x01438628(*(undefined4 *)(_UNK_01aefd9c + 0x1aef5ac));
    func_0x01438628(*(undefined4 *)(_UNK_01aefda0 + 0x1aef5b8));
    func_0x01438628(*(undefined4 *)(_UNK_01aefda4 + 0x1aef5c4));
    func_0x01438628(*(undefined4 *)(_UNK_01aefda8 + 0x1aef5d0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4d1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa4d1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_02885010 + 0x2884f1c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02885014 + 0x2884f30),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    piStack_28 = (int *)0x0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
    piStack_28 = (int *)uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_38,uVar4,0,0);
    uVar9 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02885018 + 0x2885000));
    return uVar9;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01aefdac + 0x1aef630));
  func_0x01af817c(iVar1,0);
  if ((param_2 != 0) && (iVar8 = FUN_01ae99ac(param_1), iVar8 != 0)) {
    iVar8 = FUN_01ae99ac(param_1);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0x2c);
    uVar9 = *(undefined4 *)(param_2 + 8);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x024f1110(iVar8,uVar9,**(undefined4 **)(_UNK_01aefdb0 + 0x1aef694));
    if (iVar8 == 0) {
      iVar8 = FUN_01ae99ac(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x2c);
      uVar9 = *(undefined4 *)(param_2 + 8);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar8,uVar9,1,**(undefined4 **)(_UNK_01aefdc0 + 0x1aef6e4));
      iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01aefdc4 + 0x1aef6f8));
      func_0x024eed9c(iVar8,**(undefined4 **)(_UNK_01aefdc8 + 0x1aef70c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar12 = (int *)(iVar1 + 8);
      *piVar12 = iVar8;
      func_0x014385cc(piVar12,iVar8);
      if (*(int *)(**(int **)(_UNK_01aefdcc + 0x1aef740) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01aefdd0 + 0x1aef75c));
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x20);
      iStack_30 = iVar1;
      if ((iVar8 != 0) && (0 < *(int *)(iVar8 + 0xc))) {
        iVar5 = 0;
        puVar10 = *(undefined4 **)(_UNK_01aefdd4 + 0x1aef79c);
LAB_01aef798:
        iVar2 = func_0x0152983c(iVar8,iVar5,*puVar10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 8) != *(int *)(param_2 + 8)) goto LAB_01aef830;
        iVar2 = func_0x0152983c(iVar8,iVar5,*puVar10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0x10) == 0) goto LAB_01aef830;
        iVar2 = func_0x0152983c(iVar8,iVar5,*puVar10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) < 1) goto LAB_01aef830;
        iVar2 = 0;
        while( true ) {
          iVar3 = func_0x0152983c(iVar8,iVar5,*puVar10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar3 + 0xc) <= iVar2) break;
          iVar3 = func_0x0152983c(iVar8,iVar5,*puVar10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar9 = 0;
          if (*(int *)(iVar3 + 0x14) != 0) {
            iVar3 = func_0x0152983c(iVar8,iVar5,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x14);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (iVar2 < *(int *)(iVar3 + 0xc)) {
              iVar3 = func_0x0152983c(iVar8,iVar5,*puVar10);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x14);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x024f0530(iVar3,iVar2,**(undefined4 **)(_UNK_01aefdd8 + 0x1aefc10));
            }
          }
          piStack_28 = (int *)uVar9;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar3 = *piVar12;
          iVar1 = func_0x0152983c(iVar8,iVar5,*puVar10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iStack_2c = iVar2;
          uVar9 = func_0x024f0530(iVar1,iVar2,**(undefined4 **)(_UNK_01aefddc + 0x1aefc70));
          uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01aefde0 + 0x1aefc8c));
          func_0x02ca3c70(uVar4,uVar9,piStack_28,0,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar3 + 8);
          uVar7 = *(uint *)(iVar3 + 0xc);
          piVar11 = *(int **)(_UNK_01aefde4 + 0x1aefcdc);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          iVar2 = *piVar11;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (uVar7 < *(uint *)(iVar1 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar7 + 1;
            puVar10 = (undefined4 *)(iVar1 + uVar7 * 4 + 0x10);
            *puVar10 = uVar4;
            func_0x014385cc(puVar10,uVar4);
          }
          else {
            func_0x0152874c(iVar3,uVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
          puVar10 = *(undefined4 **)(_UNK_01aefde8 + 0x1aefd38);
          iVar2 = iStack_2c + 1;
          iVar1 = iStack_30;
        }
      }
LAB_01aef840:
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar8 = *piVar12;
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar8 + 0xc)) {
        iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01aefdec + 0x1aef874));
        func_0x024f1124(iVar8,**(undefined4 **)(_UNK_01aefdf0 + 0x1aef888));
        piStack_28 = (int *)(iVar1 + 0xc);
        *piStack_28 = iVar8;
        func_0x014385cc(piStack_28,iVar8);
        iVar1 = 0;
        puVar10 = *(undefined4 **)(_UNK_01aefdf4 + 0x1aef8b8);
        piVar11 = *(int **)(_UNK_01aefdf8 + 0x1aef8c0);
        while( true ) {
          iVar8 = *piVar12;
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar8 + 0xc) <= iVar1) break;
          iVar8 = *piVar12;
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x0152983c(iVar8,iVar1,*puVar10);
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x0202346c(0);
          if (iVar8 == 0) {
            func_0x014388e4();
            uVar9 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar9 = func_0x01524ffc(iVar8 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar8 + 0xc,0);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          func_0x020257a4(iVar5,0x2f0,uVar9,uVar4,0,0,0);
          iVar1 = iVar1 + 1;
        }
        if (*(int *)(**(int **)(_UNK_01aefdfc + 0x1aefa20) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e96a8(**(undefined4 **)(_UNK_01aefe00 + 0x1aefa3c));
        iVar8 = *piVar12;
        if (*(int *)(**(int **)(_UNK_01aefe04 + 0x1aefa50) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01aefe08 + 0x1aefa70));
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar5 + 0x10);
        uVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01aefe0c + 0x1aefa90));
        func_0x0152e3ec(uVar9,iStack_30,**(undefined4 **)(_UNK_01aefe10 + 0x1aefab0),0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = uVar9;
        func_0x02b75870(iVar1,iVar8,uVar4,1,0xeb,0,0,0);
        iVar1 = *piStack_28;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
  }
  piVar12 = *(int **)(_UNK_01aefdb4 + 0x1aef9b4);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar6 = (char *)(_UNK_01aefdb8 + 0x1aef9d0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aefdbc + 0x1aef9e4));
    *pcVar6 = '\x01';
  }
  iVar1 = *piVar12;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar12;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
LAB_01aef830:
  iVar5 = iVar5 + 1;
  if (*(int *)(iVar8 + 0xc) <= iVar5) goto LAB_01aef840;
  goto LAB_01aef798;
}

