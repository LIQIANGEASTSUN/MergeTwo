
/* WARNING: Possible PIC construction at 0x0164a9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164a9c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164b138(int param_1)

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
  
  iVar2 = func_0x02953fd4(0x85ed,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01642704(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar2 + 0x74);
    iVar2 = FUN_0164a450(param_1);
    if (iVar2 <= iVar3) {
      return;
    }
    pcVar5 = (char *)(_UNK_0164ac44 + 0x164a8e8);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0164ac48 + 0x164a8fc));
      func_0x01438628(*(undefined4 *)(_UNK_0164ac4c + 0x164a908));
      func_0x01438628(*(undefined4 *)(_UNK_0164ac50 + 0x164a914));
      func_0x01438628(*(undefined4 *)(_UNK_0164ac54 + 0x164a920));
      func_0x01438628(*(undefined4 *)(_UNK_0164ac58 + 0x164a92c));
      func_0x01438628(*(undefined4 *)(_UNK_0164ac5c + 0x164a938));
      func_0x01438628(*(undefined4 *)(_UNK_0164ac60 + 0x164a944));
      func_0x01438628(*(undefined4 *)(_UNK_0164ac64 + 0x164a950));
      func_0x01438628(*(undefined4 *)(_UNK_0164ac68 + 0x164a95c));
      func_0x01438628(*(undefined4 *)(_UNK_0164ac6c + 0x164a968));
      func_0x01438628(*(undefined4 *)(_UNK_0164ac70 + 0x164a974));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x02953fd4(0x85f0,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_0164ac74 + 0x164a9d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0164ac78 + 0x164a9f4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024f04cc(iVar2,**(undefined4 **)(_UNK_0164ac7c + 0x164aa14));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar2 + 8);
      iVar2 = FUN_01642704(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = FUN_0164a3e8(param_1,*(undefined4 *)(iVar2 + 0x74));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024f110c(iVar3,uVar7,**(undefined4 **)(_UNK_0164ac80 + 0x164aa74));
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x0152da0c(&uStack_40,iVar3,**(undefined4 **)(_UNK_0164ac84 + 0x164aaac));
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar6 = *(undefined4 **)(_UNK_0164ac88 + 0x164aac8);
        puVar8 = *(undefined4 **)(_UNK_0164ac8c + 0x164aad0);
        while (iVar1 = func_0x015109ec(&uStack_30,*puVar6), iVar3 = iStack_24, iVar1 != 0) {
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 8)) {
            iVar1 = FUN_01642704(param_1);
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
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_0164ac90 + 0x164ab54));
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f0708(iVar2,**(undefined4 **)(_UNK_0164ac98 + 0x164ab78));
        if (*(int *)(**(int **)(_UNK_0164ac9c + 0x164ab8c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_01640370();
        if (iVar2 != 0) {
          func_0x0166ac18(iVar2,0);
        }
      }
      return;
    }
    iVar2 = func_0x029540a4(0x85f0,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x164a9c8;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar2 = func_0x029540a4(0x85ed,0);
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

