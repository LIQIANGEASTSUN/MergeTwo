
/* WARNING: Possible PIC construction at 0x02fd7ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02fd7efc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd866c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  undefined4 *puVar6;
  int unaff_r5;
  undefined4 uVar7;
  undefined4 unaff_r6;
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
  
  iVar2 = func_0x02953fd4(0x70d7,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02fcfc38(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar2 + 0x74);
    iVar2 = FUN_02fd7984(param_1);
    if (iVar2 <= iVar3) {
      return;
    }
    pcVar5 = (char *)(_UNK_02fd8178 + 0x2fd7e1c);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02fd817c + 0x2fd7e30));
      func_0x01438628(*(undefined4 *)(_UNK_02fd8180 + 0x2fd7e3c));
      func_0x01438628(*(undefined4 *)(_UNK_02fd8184 + 0x2fd7e48));
      func_0x01438628(*(undefined4 *)(_UNK_02fd8188 + 0x2fd7e54));
      func_0x01438628(*(undefined4 *)(_UNK_02fd818c + 0x2fd7e60));
      func_0x01438628(*(undefined4 *)(_UNK_02fd8190 + 0x2fd7e6c));
      func_0x01438628(*(undefined4 *)(_UNK_02fd8194 + 0x2fd7e78));
      func_0x01438628(*(undefined4 *)(_UNK_02fd8198 + 0x2fd7e84));
      func_0x01438628(*(undefined4 *)(_UNK_02fd819c + 0x2fd7e90));
      func_0x01438628(*(undefined4 *)(_UNK_02fd81a0 + 0x2fd7e9c));
      func_0x01438628(*(undefined4 *)(_UNK_02fd81a4 + 0x2fd7ea8));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x02953fd4(0x70da,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_02fd81a8 + 0x2fd7f0c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd81ac + 0x2fd7f28));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_02fd81b0 + 0x2fd7f48));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar2 + 8);
      iVar2 = FUN_02fcfc38(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = FUN_02fd791c(param_1,*(undefined4 *)(iVar2 + 0x74));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x03b72148(iVar3,uVar7,**(undefined4 **)(_UNK_02fd81b4 + 0x2fd7fa8));
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x04cfe6f4(&uStack_40,iVar3,**(undefined4 **)(_UNK_02fd81b8 + 0x2fd7fe0));
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar6 = *(undefined4 **)(_UNK_02fd81bc + 0x2fd7ffc);
        puVar8 = *(undefined4 **)(_UNK_02fd81c0 + 0x2fd8004);
        while (iVar1 = func_0x04878f14(&uStack_30,*puVar6), iVar3 = iStack_24, iVar1 != 0) {
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 8)) {
            iVar1 = FUN_02fcfc38(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x18);
            uVar7 = *(undefined4 *)(iVar3 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar1,uVar7,*puVar8);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02fd81c4 + 0x2fd8088));
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03b776fc(iVar2,**(undefined4 **)(_UNK_02fd81cc + 0x2fd80ac));
        if (*(int *)(**(int **)(_UNK_02fd81d0 + 0x2fd80c0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_02fcd8a4();
        if (iVar2 != 0) {
          func_0x02ff814c(iVar2,0);
        }
      }
      return;
    }
    iVar2 = func_0x029540a4(0x70da,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x2fd7efc;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar2 = func_0x029540a4(0x70d7,0);
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

