
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01907604(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_01907900 + 0x190761c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01907904 + 0x1907630));
    func_0x01438628(*(undefined4 *)(_UNK_01907908 + 0x190763c));
    func_0x01438628(*(undefined4 *)(_UNK_0190790c + 0x1907648));
    func_0x01438628(*(undefined4 *)(_UNK_01907910 + 0x1907654));
    func_0x01438628(*(undefined4 *)(_UNK_01907914 + 0x1907660));
    func_0x01438628(*(undefined4 *)(_UNK_01907918 + 0x190766c));
    func_0x01438628(*(undefined4 *)(_UNK_0190791c + 0x1907678));
    func_0x01438628(*(undefined4 *)(_UNK_01907920 + 0x1907684));
    func_0x01438628(*(undefined4 *)(_UNK_01907924 + 0x1907690));
    func_0x01438628(*(undefined4 *)(_UNK_01907928 + 0x190769c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x96b1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0190792c + 0x1907704));
    func_0x024f0510(iVar1,**(undefined4 **)(_UNK_01907930 + 0x1907718));
    iVar2 = FUN_018faa04(param_1,0);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_01907934 + 0x1907740) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01907938 + 0x190775c));
      iVar2 = iVar3;
      if (iVar3 == 0) {
        iVar2 = func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x20);
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0xc);
      }
      if (iVar3 != 0 && iVar2 != 0) {
        func_0x0152da0c(&uStack_38,iVar3,**(undefined4 **)(_UNK_0190793c + 0x1907794));
        puVar8 = *(undefined4 **)(_UNK_01907940 + 0x19077a8);
        while (iVar3 = func_0x015109ec(&uStack_38,*puVar8), iVar2 = iStack_2c, iVar3 != 0) {
          if (iStack_2c == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_01907580(param_1,*(undefined4 *)(iVar2 + 8));
          if (iVar3 != 0) {
            uVar7 = *(undefined4 *)(iVar2 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar1 + 8);
            uVar5 = *(uint *)(iVar1 + 0xc);
            piVar4 = *(int **)(_UNK_01907944 + 0x190780c);
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
              func_0x024f0520(iVar1,uVar7,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
          }
        }
        func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_01907948 + 0x1907860));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x96b1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0287aa9c(iVar1,param_1,0);
  }
  return iVar1;
}

