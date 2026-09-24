
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031e61a4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_031e6650 + 0x31e61bc);
  if (*pcVar6 == '\0') {
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
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xb3c,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031e6680 + 0x31e62b0));
    func_0x04cfd1b4(iVar1,**(undefined4 **)(_UNK_031e6684 + 0x31e62c4));
    if (*(int *)(**(int **)(_UNK_031e6688 + 0x31e62d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031e668c + 0x31e62f4));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x03637d30(iVar2,**(undefined4 **)(_UNK_031e6690 + 0x31e6314));
    iVar3 = FUN_031e6094(param_1);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x48);
    }
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_48,iVar2,**(undefined4 **)(_UNK_031e6694 + 0x31e6354));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar10 = *(undefined4 **)(_UNK_031e6698 + 0x31e6374);
    while (iVar4 = func_0x04878f14(&uStack_38,*puVar10), iVar8 = iStack_2c, iVar4 != 0) {
      if (iStack_2c == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0x1c) == iVar3) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar1 + 8);
        uVar7 = *(uint *)(iVar1 + 0xc);
        piVar5 = *(int **)(_UNK_031e669c + 0x31e63cc);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar4 = *piVar5;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (uVar7 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar7 + 1;
          piVar5 = (int *)(iVar9 + uVar7 * 4 + 0x10);
          *piVar5 = iVar8;
          func_0x014385cc(piVar5,iVar8);
        }
        else {
          func_0x04cfda38(iVar1,iVar8,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_031e66a0 + 0x31e6428));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_48,iVar2,**(undefined4 **)(_UNK_031e66a8 + 0x31e646c));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar3 = func_0x04878f14(&uStack_38,*puVar10), iVar2 = iStack_2c, iVar3 != 0) {
        if (iStack_2c == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0x1c) == 0) {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar1 + 8);
          uVar7 = *(uint *)(iVar1 + 0xc);
          piVar5 = *(int **)(_UNK_031e66b0 + 0x31e64d8);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar8 = *piVar5;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (uVar7 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar7 + 1;
            piVar5 = (int *)(iVar3 + uVar7 * 4 + 0x10);
            *piVar5 = iVar2;
            func_0x014385cc(piVar5,iVar2);
          }
          else {
            func_0x04cfda38(iVar1,iVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_031e66b4 + 0x31e6534));
    }
  }
  else {
    iVar1 = func_0x029540a4(0xb3c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0288d73c(iVar1,param_1,0);
  }
  return iVar1;
}

