
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4b130(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar7 = (char *)(_UNK_02b4b448 + 0x2b4b148);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4b44c + 0x2b4b15c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b450 + 0x2b4b168));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b454 + 0x2b4b174));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b458 + 0x2b4b180));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b45c + 0x2b4b18c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b460 + 0x2b4b198));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b464 + 0x2b4b1a4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b468 + 0x2b4b1b0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b46c + 0x2b4b1bc));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b470 + 0x2b4b1c8));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x02953fd4(0x2ed7,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02b4b474 + 0x2b4b244));
    func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_02b4b478 + 0x2b4b258));
    iVar3 = FUN_02b3ebc0(param_1);
    if (iVar3 != 0) {
      iVar3 = FUN_02b3ebc0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046c2934(&uStack_58,iVar3,**(undefined4 **)(_UNK_02b4b47c + 0x2b4b2ac));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      puVar9 = *(undefined4 **)(_UNK_02b4b480 + 0x2b4b2d8);
      while (iVar3 = func_0x048a44e0(&uStack_40,*puVar9), uVar1 = uStack_34, iVar3 != 0) {
        iVar3 = (int)uStack_30;
        if (0 < (int)uStack_30) {
          uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02b4b484 + 0x2b4b304));
          func_0x02ca3c70(uVar4,uVar1,iVar3,0,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar2 + 8);
          uVar8 = *(uint *)(iVar2 + 0xc);
          piVar6 = *(int **)(_UNK_02b4b488 + 0x2b4b354);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar10 = *piVar6;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (uVar8 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar8 + 1;
            puVar5 = (undefined4 *)(iVar3 + uVar8 * 4 + 0x10);
            *puVar5 = uVar4;
            func_0x014385cc(puVar5,uVar4);
          }
          else {
            func_0x0152874c(iVar2,uVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x048a4620(&uStack_40,**(undefined4 **)(_UNK_02b4b48c + 0x2b4b3b0));
    }
  }
  else {
    iVar2 = func_0x029540a4(0x2ed7,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02884bcc(iVar2,param_1,0);
  }
  return iVar2;
}

