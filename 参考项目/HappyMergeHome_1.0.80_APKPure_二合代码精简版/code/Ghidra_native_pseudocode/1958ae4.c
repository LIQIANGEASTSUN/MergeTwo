
/* WARNING: Possible PIC construction at 0x01968370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01968374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01968ae4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  undefined4 *puVar6;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar2 = func_0x02953fd4(0x98f2,0);
  if (iVar2 == 0) {
    iVar2 = FUN_019600b0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar2 + 0x74);
    iVar2 = FUN_01967dfc(param_1);
    if (iVar2 <= iVar3) {
      return;
    }
    pcVar5 = (char *)(_UNK_019685f0 + 0x1968294);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_019685f4 + 0x19682a8));
      func_0x01438628(*(undefined4 *)(_UNK_019685f8 + 0x19682b4));
      func_0x01438628(*(undefined4 *)(_UNK_019685fc + 0x19682c0));
      func_0x01438628(*(undefined4 *)(_UNK_01968600 + 0x19682cc));
      func_0x01438628(*(undefined4 *)(_UNK_01968604 + 0x19682d8));
      func_0x01438628(*(undefined4 *)(_UNK_01968608 + 0x19682e4));
      func_0x01438628(*(undefined4 *)(_UNK_0196860c + 0x19682f0));
      func_0x01438628(*(undefined4 *)(_UNK_01968610 + 0x19682fc));
      func_0x01438628(*(undefined4 *)(_UNK_01968614 + 0x1968308));
      func_0x01438628(*(undefined4 *)(_UNK_01968618 + 0x1968314));
      func_0x01438628(*(undefined4 *)(_UNK_0196861c + 0x1968320));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x02953fd4(0x98f5,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_01968620 + 0x1968384) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01968624 + 0x19683a0));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_01968628 + 0x19683c0));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar2 + 8);
      iVar2 = FUN_019600b0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = FUN_01967d94(param_1,*(undefined4 *)(iVar2 + 0x74));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024f110c(iVar3,uVar7,**(undefined4 **)(_UNK_0196862c + 0x1968420));
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x0152da0c(&uStack_40,iVar3,**(undefined4 **)(_UNK_01968630 + 0x1968458));
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar6 = *(undefined4 **)(_UNK_01968634 + 0x1968474);
        puVar8 = *(undefined4 **)(_UNK_01968638 + 0x196847c);
        while (iVar1 = func_0x015109ec(&uStack_30,*puVar6), iVar3 = iStack_24, iVar1 != 0) {
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 8)) {
            iVar1 = FUN_019600b0(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x18);
            uVar7 = *(undefined4 *)(iVar3 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar1,uVar7,*puVar8);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
        }
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0196863c + 0x1968500));
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f0708(iVar2,**(undefined4 **)(_UNK_01968644 + 0x1968524));
        if (*(int *)(**(int **)(_UNK_01968648 + 0x1968538) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_0195dd1c();
        if (iVar2 != 0) {
          func_0x019885c4(iVar2,0);
        }
      }
      return;
    }
    iVar2 = func_0x029540a4(0x98f5,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x1968374;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar2 = func_0x029540a4(0x98f2,0);
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
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
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
  func_0x024f56d0(iVar3,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}

