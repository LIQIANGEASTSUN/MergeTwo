
/* WARNING: Possible PIC construction at 0x031865dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x031865e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03186c6c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  iVar2 = func_0x02953fd4(0x7b75,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0317e7f4(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar2 + 0x41) != '\0') {
      return;
    }
    iVar2 = FUN_03186454(param_1);
    if (iVar2 == 0) {
      return;
    }
    pcVar5 = (char *)(_UNK_03186834 + 0x3186500);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03186838 + 0x3186514));
      func_0x01438628(*(undefined4 *)(_UNK_0318683c + 0x3186520));
      func_0x01438628(*(undefined4 *)(_UNK_03186840 + 0x318652c));
      func_0x01438628(*(undefined4 *)(_UNK_03186844 + 0x3186538));
      func_0x01438628(*(undefined4 *)(_UNK_03186848 + 0x3186544));
      func_0x01438628(*(undefined4 *)(_UNK_0318684c + 0x3186550));
      func_0x01438628(*(undefined4 *)(_UNK_03186850 + 0x318655c));
      func_0x01438628(*(undefined4 *)(_UNK_03186854 + 0x3186568));
      func_0x01438628(*(undefined4 *)(_UNK_03186858 + 0x3186574));
      func_0x01438628(*(undefined4 *)(_UNK_0318685c + 0x3186580));
      func_0x01438628(*(undefined4 *)(_UNK_03186860 + 0x318658c));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x02953fd4(0x7b76,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_03186864 + 0x31865f0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03186868 + 0x318660c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_0318686c + 0x318662c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x03b72148(iVar2,0x10,**(undefined4 **)(_UNK_03186870 + 0x3186664));
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x04cfe6f4(&uStack_40,iVar3,**(undefined4 **)(_UNK_03186874 + 0x318669c));
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar7 = *(undefined4 **)(_UNK_03186878 + 0x31866b8);
        puVar8 = *(undefined4 **)(_UNK_0318687c + 0x31866c0);
        while (iVar1 = func_0x04878f14(&uStack_30,*puVar7), iVar3 = iStack_24, iVar1 != 0) {
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 8)) {
            iVar1 = FUN_0317e7f4(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x18);
            uVar6 = *(undefined4 *)(iVar3 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar1,uVar6,*puVar8);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03186880 + 0x3186744));
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03b776fc(iVar2,**(undefined4 **)(_UNK_03186888 + 0x3186768));
        if (*(int *)(**(int **)(_UNK_0318688c + 0x318677c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_0317d564();
        if (iVar2 != 0) {
          func_0x031a4db4(iVar2,0);
        }
      }
      return;
    }
    iVar2 = func_0x029540a4(0x7b76,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x31865e0;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar2 = func_0x029540a4(0x7b75,0);
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
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
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
  func_0x024f56d0(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}

