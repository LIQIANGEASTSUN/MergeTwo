
/* WARNING: Possible PIC construction at 0x01809138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0180913c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0180980c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_r4;
  char *pcVar6;
  int unaff_r5;
  undefined4 *puVar7;
  undefined4 unaff_r6;
  undefined4 uVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar2 = func_0x02953fd4(0x90a3,0);
  if (iVar2 == 0) {
    iVar2 = FUN_018013d8(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar2 + 0x41) != '\0') {
      return;
    }
    iVar2 = FUN_01808fb0(param_1);
    if (iVar2 == 0) {
      return;
    }
    pcVar6 = (char *)(_UNK_018093d0 + 0x180905c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_018093d4 + 0x1809070));
      func_0x01438628(*(undefined4 *)(_UNK_018093d8 + 0x180907c));
      func_0x01438628(*(undefined4 *)(_UNK_018093dc + 0x1809088));
      func_0x01438628(*(undefined4 *)(_UNK_018093e0 + 0x1809094));
      func_0x01438628(*(undefined4 *)(_UNK_018093e4 + 0x18090a0));
      func_0x01438628(*(undefined4 *)(_UNK_018093e8 + 0x18090ac));
      func_0x01438628(*(undefined4 *)(_UNK_018093ec + 0x18090b8));
      func_0x01438628(*(undefined4 *)(_UNK_018093f0 + 0x18090c4));
      func_0x01438628(*(undefined4 *)(_UNK_018093f4 + 0x18090d0));
      func_0x01438628(*(undefined4 *)(_UNK_018093f8 + 0x18090dc));
      func_0x01438628(*(undefined4 *)(_UNK_018093fc + 0x18090e8));
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iVar2 = func_0x02953fd4(0x90a4,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_01809400 + 0x180914c) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar10 = *(undefined4 **)(_UNK_01809404 + 0x1809168);
      iVar2 = func_0x014e9518(*puVar10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_01809408 + 0x1809188));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024f110c(iVar2,0x13,**(undefined4 **)(_UNK_0180940c + 0x18091c0));
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x0152da0c(&uStack_48,iVar3,**(undefined4 **)(_UNK_01809410 + 0x18091f8));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        puVar7 = *(undefined4 **)(_UNK_01809414 + 0x1809214);
        puVar9 = *(undefined4 **)(_UNK_01809418 + 0x180921c);
        while (iVar1 = func_0x015109ec(&uStack_38,*puVar7), iVar3 = iStack_2c, iVar1 != 0) {
          if (iStack_2c == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 8)) {
            iVar1 = FUN_018013d8(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x18);
            uVar8 = *(undefined4 *)(iVar3 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar1,uVar8,*puVar9);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
        }
        func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_0180941c + 0x18092a0));
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f0708(iVar2,**(undefined4 **)(_UNK_01809424 + 0x18092c4));
        piVar5 = *(int **)(_UNK_0180942c + 0x18092ec);
        if (*(int *)(**(int **)(_UNK_01809428 + 0x18092d8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_01800148();
        if (iVar2 != 0) {
          func_0x01827a7c(iVar2,0);
        }
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(*puVar10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x0268f6bc(iVar2,0);
      }
      return;
    }
    iVar2 = func_0x029540a4(0x90a4,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x180913c;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_48;
  }
  else {
    iVar2 = func_0x029540a4(0x90a3,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar3 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar3 != 0) {
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x024f56d0(iVar3,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}

