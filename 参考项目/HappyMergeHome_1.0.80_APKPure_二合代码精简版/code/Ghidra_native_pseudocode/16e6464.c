
/* WARNING: Possible PIC construction at 0x016f5d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016f5d94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f6464(int param_1)

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
  
  iVar2 = func_0x02953fd4(0x8a79,0);
  if (iVar2 == 0) {
    iVar2 = FUN_016ef2ac(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar2 + 0x41) != '\0') {
      return;
    }
    iVar2 = FUN_016f5c08(param_1);
    if (iVar2 == 0) {
      return;
    }
    pcVar6 = (char *)(_UNK_016f6028 + 0x16f5cb4);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_016f602c + 0x16f5cc8));
      func_0x01438628(*(undefined4 *)(_UNK_016f6030 + 0x16f5cd4));
      func_0x01438628(*(undefined4 *)(_UNK_016f6034 + 0x16f5ce0));
      func_0x01438628(*(undefined4 *)(_UNK_016f6038 + 0x16f5cec));
      func_0x01438628(*(undefined4 *)(_UNK_016f603c + 0x16f5cf8));
      func_0x01438628(*(undefined4 *)(_UNK_016f6040 + 0x16f5d04));
      func_0x01438628(*(undefined4 *)(_UNK_016f6044 + 0x16f5d10));
      func_0x01438628(*(undefined4 *)(_UNK_016f6048 + 0x16f5d1c));
      func_0x01438628(*(undefined4 *)(_UNK_016f604c + 0x16f5d28));
      func_0x01438628(*(undefined4 *)(_UNK_016f6050 + 0x16f5d34));
      func_0x01438628(*(undefined4 *)(_UNK_016f6054 + 0x16f5d40));
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iVar2 = func_0x02953fd4(0x8a7a,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_016f6058 + 0x16f5da4) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar10 = *(undefined4 **)(_UNK_016f605c + 0x16f5dc0);
      iVar2 = func_0x014e9518(*puVar10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_016f6060 + 0x16f5de0));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024f110c(iVar2,0x19,**(undefined4 **)(_UNK_016f6064 + 0x16f5e18));
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x0152da0c(&uStack_48,iVar3,**(undefined4 **)(_UNK_016f6068 + 0x16f5e50));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        puVar7 = *(undefined4 **)(_UNK_016f606c + 0x16f5e6c);
        puVar9 = *(undefined4 **)(_UNK_016f6070 + 0x16f5e74);
        while (iVar1 = func_0x015109ec(&uStack_38,*puVar7), iVar3 = iStack_2c, iVar1 != 0) {
          if (iStack_2c == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 8)) {
            iVar1 = FUN_016ef2ac(param_1);
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
        func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_016f6074 + 0x16f5ef8));
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f0708(iVar2,**(undefined4 **)(_UNK_016f607c + 0x16f5f1c));
        piVar5 = *(int **)(_UNK_016f6084 + 0x16f5f44);
        if (*(int *)(**(int **)(_UNK_016f6080 + 0x16f5f30) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_016edd54();
        if (iVar2 != 0) {
          func_0x01705640(iVar2,0);
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
    iVar2 = func_0x029540a4(0x8a7a,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x16f5d94;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_48;
  }
  else {
    iVar2 = func_0x029540a4(0x8a79,0);
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

