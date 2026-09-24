
/* WARNING: Possible PIC construction at 0x031e6298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x031e629c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031e7858(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int iVar10;
  undefined4 *puVar11;
  undefined4 unaff_lr;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar3 = func_0x02953fd4(0xb3b,0);
  if (iVar3 == 0) {
    pcVar7 = (char *)(_UNK_031e6650 + 0x31e61bc);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_031e6654 + 0x31e61d0));
      func_0x01438628(*(undefined4 *)(_UNK_031e6658 + 0x31e61dc));
      func_0x01438628(*(undefined4 *)(_UNK_031e665c + 0x31e61e8));
      func_0x01438628(*(undefined4 *)(_UNK_031e6660 + 0x31e61f4));
      func_0x01438628(*(undefined4 *)(_UNK_031e6664 + 0x31e6200));
      func_0x01438628(*(undefined4 *)(_UNK_031e6668 + 0x31e620c));
      func_0x01438628(*(undefined4 *)(_UNK_031e666c + 0x31e6218));
      func_0x01438628(*(undefined4 *)(_UNK_031e6670 + 0x31e6224));
      func_0x01438628(*(undefined4 *)(_UNK_031e6674 + 0x31e6230));
      func_0x01438628(*(undefined4 *)(_UNK_031e6678 + 0x31e623c));
      func_0x01438628(*(undefined4 *)(_UNK_031e667c + 0x31e6248));
      *pcVar7 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iVar3 = func_0x02953fd4(0xb3c,0);
    if (iVar3 == 0) {
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_031e6680 + 0x31e62b0));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_031e6684 + 0x31e62c4));
      if (*(int *)(**(int **)(_UNK_031e6688 + 0x31e62d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_031e668c + 0x31e62f4));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03637d30(iVar4,**(undefined4 **)(_UNK_031e6690 + 0x31e6314));
      iVar1 = FUN_031e6094(param_1);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x48);
      }
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iStack_4c = iVar4;
      func_0x04cfe6f4(&uStack_48,iVar4,**(undefined4 **)(_UNK_031e6694 + 0x31e6354));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar11 = *(undefined4 **)(_UNK_031e6698 + 0x31e6374);
      while (iVar2 = func_0x04878f14(&uStack_38,*puVar11), iVar4 = iStack_2c, iVar2 != 0) {
        if (iStack_2c == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar4 + 0x1c) == iVar1) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar3 + 8);
          uVar9 = *(uint *)(iVar3 + 0xc);
          piVar5 = *(int **)(_UNK_031e669c + 0x31e63cc);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          iVar2 = *piVar5;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar9 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar9 + 1;
            piVar5 = (int *)(iVar10 + uVar9 * 4 + 0x10);
            *piVar5 = iVar4;
            func_0x014385cc(piVar5,iVar4);
          }
          else {
            func_0x04cfda38(iVar3,iVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_031e66a0 + 0x31e6428));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = iStack_4c;
      if (*(int *)(iVar3 + 0xc) == 0) {
        if (iStack_4c == 0) {
          func_0x014388e4();
        }
        func_0x04cfe6f4(&uStack_48,iVar4,**(undefined4 **)(_UNK_031e66a8 + 0x31e646c));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        while (iVar1 = func_0x04878f14(&uStack_38,*puVar11), iVar4 = iStack_2c, iVar1 != 0) {
          if (iStack_2c == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar4 + 0x1c) == 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar3 + 8);
            uVar9 = *(uint *)(iVar3 + 0xc);
            piVar5 = *(int **)(_UNK_031e66b0 + 0x31e64d8);
            *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
            iVar2 = *piVar5;
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (uVar9 < *(uint *)(iVar1 + 0xc)) {
              *(uint *)(iVar3 + 0xc) = uVar9 + 1;
              piVar5 = (int *)(iVar1 + uVar9 * 4 + 0x10);
              *piVar5 = iVar4;
              func_0x014385cc(piVar5,iVar4);
            }
            else {
              func_0x04cfda38(iVar3,iVar4,
                              *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
            }
          }
        }
        func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_031e66b4 + 0x31e6534));
      }
      return iVar3;
    }
    iVar3 = func_0x029540a4(0xb3c,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x31e629c;
    unaff_r4 = iVar3;
    unaff_r7 = param_1;
    register0x00000054 = (BADSPACEBASE *)auStack_50;
  }
  else {
    iVar3 = func_0x029540a4(0xb3b,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  pcVar7 = (char *)(_UNK_0288d838 + 0x288d758);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0288d83c + 0x288d76c),param_1,0);
    *pcVar7 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x48),0);
  iVar4 = *(int *)(iVar3 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar3 == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x024f56d0(iVar4,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
  iVar3 = func_0x035daef8((undefined1 *)((int)register0x00000054 + -0x30),0,
                          **(undefined4 **)(_UNK_0288d840 + 0x288d828));
  return iVar3;
}

