
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017e25a8(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_017e28a4 + 0x17e25c0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e28a8 + 0x17e25d4));
    func_0x01438628(*(undefined4 *)(_UNK_017e28ac + 0x17e25e0));
    func_0x01438628(*(undefined4 *)(_UNK_017e28b0 + 0x17e25ec));
    func_0x01438628(*(undefined4 *)(_UNK_017e28b4 + 0x17e25f8));
    func_0x01438628(*(undefined4 *)(_UNK_017e28b8 + 0x17e2604));
    func_0x01438628(*(undefined4 *)(_UNK_017e28bc + 0x17e2610));
    func_0x01438628(*(undefined4 *)(_UNK_017e28c0 + 0x17e261c));
    func_0x01438628(*(undefined4 *)(_UNK_017e28c4 + 0x17e2628));
    func_0x01438628(*(undefined4 *)(_UNK_017e28c8 + 0x17e2634));
    func_0x01438628(*(undefined4 *)(_UNK_017e28cc + 0x17e2640));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8fd3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017e28d0 + 0x17e26a8));
    func_0x024f0510(iVar1,**(undefined4 **)(_UNK_017e28d4 + 0x17e26bc));
    iVar2 = FUN_017d5bc8(param_1,0);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_017e28d8 + 0x17e26e4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017e28dc + 0x17e2700));
      iVar2 = iVar3;
      if (iVar3 == 0) {
        iVar2 = func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x20);
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0xc);
      }
      if (iVar3 != 0 && iVar2 != 0) {
        func_0x0152da0c(&uStack_38,iVar3,**(undefined4 **)(_UNK_017e28e0 + 0x17e2738));
        puVar8 = *(undefined4 **)(_UNK_017e28e4 + 0x17e274c);
        while (iVar3 = func_0x015109ec(&uStack_38,*puVar8), iVar2 = iStack_2c, iVar3 != 0) {
          if (iStack_2c == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_017e2524(param_1,*(undefined4 *)(iVar2 + 8));
          if (iVar3 != 0) {
            uVar7 = *(undefined4 *)(iVar2 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar1 + 8);
            uVar5 = *(uint *)(iVar1 + 0xc);
            piVar4 = *(int **)(_UNK_017e28e8 + 0x17e27b0);
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
        func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_017e28ec + 0x17e2804));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8fd3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0287aa9c(iVar1,param_1,0);
  }
  return iVar1;
}

