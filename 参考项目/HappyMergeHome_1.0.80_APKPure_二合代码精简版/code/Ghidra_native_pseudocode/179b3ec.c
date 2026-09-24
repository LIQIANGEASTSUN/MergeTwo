
/* WARNING: Possible PIC construction at 0x017aad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x017aad60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017ab3ec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  undefined4 *puVar6;
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
  
  iVar2 = func_0x02953fd4(0x8e5b,0);
  if (iVar2 == 0) {
    iVar2 = FUN_017a2fe8(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar2 + 0x41) != '\0') {
      return;
    }
    iVar2 = FUN_017aabd4(param_1);
    if (iVar2 == 0) {
      return;
    }
    pcVar5 = (char *)(_UNK_017aafb4 + 0x17aac80);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_017aafb8 + 0x17aac94));
      func_0x01438628(*(undefined4 *)(_UNK_017aafbc + 0x17aaca0));
      func_0x01438628(*(undefined4 *)(_UNK_017aafc0 + 0x17aacac));
      func_0x01438628(*(undefined4 *)(_UNK_017aafc4 + 0x17aacb8));
      func_0x01438628(*(undefined4 *)(_UNK_017aafc8 + 0x17aacc4));
      func_0x01438628(*(undefined4 *)(_UNK_017aafcc + 0x17aacd0));
      func_0x01438628(*(undefined4 *)(_UNK_017aafd0 + 0x17aacdc));
      func_0x01438628(*(undefined4 *)(_UNK_017aafd4 + 0x17aace8));
      func_0x01438628(*(undefined4 *)(_UNK_017aafd8 + 0x17aacf4));
      func_0x01438628(*(undefined4 *)(_UNK_017aafdc + 0x17aad00));
      func_0x01438628(*(undefined4 *)(_UNK_017aafe0 + 0x17aad0c));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x02953fd4(0x8e5c,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_017aafe4 + 0x17aad70) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017aafe8 + 0x17aad8c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_017aafec + 0x17aadac));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024f110c(iVar2,0x26,**(undefined4 **)(_UNK_017aaff0 + 0x17aade4));
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x0152da0c(&uStack_40,iVar3,**(undefined4 **)(_UNK_017aaff4 + 0x17aae1c));
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar6 = *(undefined4 **)(_UNK_017aaff8 + 0x17aae38);
        puVar8 = *(undefined4 **)(_UNK_017aaffc + 0x17aae40);
        while (iVar1 = func_0x015109ec(&uStack_30,*puVar6), iVar3 = iStack_24, iVar1 != 0) {
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 8)) {
            iVar1 = FUN_017a2fe8(param_1);
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
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017ab000 + 0x17aaec4));
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f0708(iVar2,**(undefined4 **)(_UNK_017ab008 + 0x17aaee8));
        if (*(int *)(**(int **)(_UNK_017ab00c + 0x17aaefc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_017a1d58();
        if (iVar2 != 0) {
          func_0x017c7ff8(iVar2,0);
        }
      }
      return;
    }
    iVar2 = func_0x029540a4(0x8e5c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x17aad60;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar2 = func_0x029540a4(0x8e5b,0);
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

