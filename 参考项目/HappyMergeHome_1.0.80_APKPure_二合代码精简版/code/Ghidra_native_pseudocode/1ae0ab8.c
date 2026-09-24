
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af0ab8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_01af0fb4 + 0x1af0ad0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af0fb8 + 0x1af0ae4));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fbc + 0x1af0af0));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fc0 + 0x1af0afc));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fc4 + 0x1af0b08));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fc8 + 0x1af0b14));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fcc + 0x1af0b20));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fd0 + 0x1af0b2c));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fd4 + 0x1af0b38));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fd8 + 0x1af0b44));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fdc + 0x1af0b50));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fe0 + 0x1af0b5c));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fe4 + 0x1af0b68));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fe8 + 0x1af0b74));
    func_0x01438628(*(undefined4 *)(_UNK_01af0fec + 0x1af0b80));
    func_0x01438628(*(undefined4 *)(_UNK_01af0ff0 + 0x1af0b8c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa4d6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = FUN_01aeff80(param_1);
  if (0 < iVar1) {
    if (*(int *)(**(int **)(_UNK_01af0ff4 + 0x1af0bfc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01af0ff8 + 0x1af0c18));
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x036c7bec(iVar8,**(undefined4 **)(_UNK_01af0ffc + 0x1af0c38));
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 8);
    if (iVar8 == 0) {
      func_0x014388e4();
      iVar2 = func_0x024f0584(0,0x59,**(undefined4 **)(_UNK_01af1000 + 0x1af0c94));
      if (iVar2 == 0) {
        return;
      }
      func_0x014388e4();
    }
    else {
      iVar2 = func_0x024f0584(iVar8,0x59,**(undefined4 **)(_UNK_01af1030 + 0x1af0c6c));
      if (iVar2 == 0) {
        return;
      }
    }
    iVar8 = func_0x024f110c(iVar8,0x59,**(undefined4 **)(_UNK_01af1004 + 0x1af0cb8));
    iVar2 = FUN_01ae99ac(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x50);
    if (iVar2 < iVar1) {
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar8 + 8);
      iVar10 = iVar3 * iVar2;
      if (iVar10 < iVar3 * iVar1) {
        iVar3 = iVar3 * (iVar1 - iVar2);
        do {
          iVar2 = *(int *)(iVar8 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar10) break;
          iVar2 = *(int *)(iVar8 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x014e9698(iVar2,iVar10,**(undefined4 **)(_UNK_01af1008 + 0x1af0d50));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar2 + 8)) {
            iVar2 = FUN_01aebdc0(param_1);
            iVar6 = *(int *)(iVar8 + 0x10);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x014e9698(iVar6,iVar10,**(undefined4 **)(_UNK_01af100c + 0x1af0da0));
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar9 = *(undefined4 *)(iVar6 + 8);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar2,uVar9,**(undefined4 **)(_UNK_01af1010 + 0x1af0dd8));
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
          }
          if (*(int *)(**(int **)(_UNK_01af1014 + 0x1af0df8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01af1018 + 0x1af0e14));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uStack_44 = 0x59;
          uStack_3c = 1;
          uStack_38 = 0xffffffff;
          uStack_48 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          iStack_40 = iVar10;
          func_0x02bd2cf0(iVar2,iVar10,0xffffffff,10);
          iVar3 = iVar3 + -1;
          iVar10 = iVar10 + 1;
        } while (iVar3 != 0);
      }
      iVar8 = FUN_01ae99ac(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x026c004c(iVar8,iVar1,0);
      if (*(int *)(**(int **)(_UNK_01af101c + 0x1af0ea0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01af1020 + 0x1af0ebc));
      piVar7 = *(int **)(_UNK_01af1024 + 0x1af0ed0);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar7;
      }
      uVar9 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x36c);
      piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01af1028 + 0x1af0ef4),1);
      iStack_28 = iVar1;
      iVar1 = func_0x014387ac(**(undefined4 **)(_UNK_01af102c + 0x1af0f14),&iStack_28);
      if (piVar7 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar1 != 0) &&
         (iVar2 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)) {
        uVar4 = func_0x01438904();
        func_0x01438790(uVar4,0);
      }
      if (piVar7[3] == 0) {
        func_0x014388e8();
      }
      piVar7[4] = iVar1;
      func_0x014385cc(piVar7 + 4,iVar1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar8,uVar9,piVar7,0);
      iVar1 = FUN_01aebaa4();
      if (iVar1 != 0) {
        func_0x01b0c3d4(iVar1,0);
      }
    }
  }
  return;
}

