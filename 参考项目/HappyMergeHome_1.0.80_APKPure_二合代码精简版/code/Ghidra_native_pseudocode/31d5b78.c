
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031e5b78(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_031e6024 + 0x31e5b90);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e6028 + 0x31e5ba4));
    func_0x01438628(*(undefined4 *)(_UNK_031e602c + 0x31e5bb0));
    func_0x01438628(*(undefined4 *)(_UNK_031e6030 + 0x31e5bbc));
    func_0x01438628(*(undefined4 *)(_UNK_031e6034 + 0x31e5bc8));
    func_0x01438628(*(undefined4 *)(_UNK_031e6038 + 0x31e5bd4));
    func_0x01438628(*(undefined4 *)(_UNK_031e603c + 0x31e5be0));
    func_0x01438628(*(undefined4 *)(_UNK_031e6040 + 0x31e5bec));
    func_0x01438628(*(undefined4 *)(_UNK_031e6044 + 0x31e5bf8));
    func_0x01438628(*(undefined4 *)(_UNK_031e6048 + 0x31e5c04));
    func_0x01438628(*(undefined4 *)(_UNK_031e604c + 0x31e5c10));
    func_0x01438628(*(undefined4 *)(_UNK_031e6050 + 0x31e5c1c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x32f7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031e6054 + 0x31e5c84));
    func_0x04cfd1b4(iVar1,**(undefined4 **)(_UNK_031e6058 + 0x31e5c98));
    if (*(int *)(**(int **)(_UNK_031e605c + 0x31e5cac) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031e6060 + 0x31e5cc8));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x03637d30(iVar2,**(undefined4 **)(_UNK_031e6064 + 0x31e5ce8));
    iVar3 = func_0x031e6094(param_1);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x48);
    }
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_48,iVar2,**(undefined4 **)(_UNK_031e6068 + 0x31e5d28));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar10 = *(undefined4 **)(_UNK_031e606c + 0x31e5d48);
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
        piVar5 = *(int **)(_UNK_031e6070 + 0x31e5da0);
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
    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_031e6074 + 0x31e5dfc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_48,iVar2,**(undefined4 **)(_UNK_031e607c + 0x31e5e40));
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
          piVar5 = *(int **)(_UNK_031e6084 + 0x31e5eac);
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
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_031e6088 + 0x31e5f08));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x32f7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028cd2ec(iVar1,param_1,0);
  }
  return iVar1;
}

