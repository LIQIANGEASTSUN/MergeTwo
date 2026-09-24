
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032b5a64(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_032b5d60 + 0x32b5a7c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b5d64 + 0x32b5a90));
    func_0x01438628(*(undefined4 *)(_UNK_032b5d68 + 0x32b5a9c));
    func_0x01438628(*(undefined4 *)(_UNK_032b5d6c + 0x32b5aa8));
    func_0x01438628(*(undefined4 *)(_UNK_032b5d70 + 0x32b5ab4));
    func_0x01438628(*(undefined4 *)(_UNK_032b5d74 + 0x32b5ac0));
    func_0x01438628(*(undefined4 *)(_UNK_032b5d78 + 0x32b5acc));
    func_0x01438628(*(undefined4 *)(_UNK_032b5d7c + 0x32b5ad8));
    func_0x01438628(*(undefined4 *)(_UNK_032b5d80 + 0x32b5ae4));
    func_0x01438628(*(undefined4 *)(_UNK_032b5d84 + 0x32b5af0));
    func_0x01438628(*(undefined4 *)(_UNK_032b5d88 + 0x32b5afc));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x82b1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032b5d8c + 0x32b5b64));
    func_0x04cd2124(iVar1,**(undefined4 **)(_UNK_032b5d90 + 0x32b5b78));
    iVar2 = FUN_032a8ec4(param_1,0);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_032b5d94 + 0x32b5ba0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032b5d98 + 0x32b5bbc));
      iVar2 = iVar3;
      if (iVar3 == 0) {
        iVar2 = func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x20);
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0xc);
      }
      if (iVar3 != 0 && iVar2 != 0) {
        func_0x04cfe6f4(&uStack_38,iVar3,**(undefined4 **)(_UNK_032b5d9c + 0x32b5bf4));
        puVar8 = *(undefined4 **)(_UNK_032b5da0 + 0x32b5c08);
        while (iVar3 = func_0x04878f14(&uStack_38,*puVar8), iVar2 = iStack_2c, iVar3 != 0) {
          if (iStack_2c == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_032b59e0(param_1,*(undefined4 *)(iVar2 + 8));
          if (iVar3 != 0) {
            uVar7 = *(undefined4 *)(iVar2 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar1 + 8);
            uVar5 = *(uint *)(iVar1 + 0xc);
            piVar4 = *(int **)(_UNK_032b5da4 + 0x32b5c6c);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar3 = *piVar4;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (uVar5 < *(uint *)(iVar2 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar5 + 1;
              *(undefined4 *)(iVar2 + uVar5 * 4 + 0x10) = uVar7;
            }
            else {
              func_0x04cd29cc(iVar1,uVar7,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
          }
        }
        func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_032b5da8 + 0x32b5cc0));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x82b1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0287aa9c(iVar1,param_1,0);
  }
  return iVar1;
}

