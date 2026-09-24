
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b1c9cc(undefined4 param_1)

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
  
  pcVar7 = (char *)(_UNK_01b1cce4 + 0x1b1c9e4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1cce8 + 0x1b1c9f8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ccec + 0x1b1ca04));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ccf0 + 0x1b1ca10));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ccf4 + 0x1b1ca1c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ccf8 + 0x1b1ca28));
    func_0x01438628(*(undefined4 *)(_UNK_01b1ccfc + 0x1b1ca34));
    func_0x01438628(*(undefined4 *)(_UNK_01b1cd00 + 0x1b1ca40));
    func_0x01438628(*(undefined4 *)(_UNK_01b1cd04 + 0x1b1ca4c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1cd08 + 0x1b1ca58));
    func_0x01438628(*(undefined4 *)(_UNK_01b1cd0c + 0x1b1ca64));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x02953fd4(0x3818,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01b1cd10 + 0x1b1cae0));
    func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_01b1cd14 + 0x1b1caf4));
    iVar3 = FUN_01b18c14(param_1);
    if (iVar3 != 0) {
      iVar3 = FUN_01b18c14(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f0ed8(&uStack_58,iVar3,**(undefined4 **)(_UNK_01b1cd18 + 0x1b1cb48));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      puVar9 = *(undefined4 **)(_UNK_01b1cd1c + 0x1b1cb74);
      while (iVar3 = func_0x015144ec(&uStack_40,*puVar9), uVar1 = uStack_34, iVar3 != 0) {
        iVar3 = (int)uStack_30;
        if (0 < (int)uStack_30) {
          uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01b1cd20 + 0x1b1cba0));
          func_0x02ca3c70(uVar4,uVar1,iVar3,0,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar2 + 8);
          uVar8 = *(uint *)(iVar2 + 0xc);
          piVar6 = *(int **)(_UNK_01b1cd24 + 0x1b1cbf0);
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
      func_0x024f0ee8(&uStack_40,**(undefined4 **)(_UNK_01b1cd28 + 0x1b1cc4c));
    }
  }
  else {
    iVar2 = func_0x029540a4(0x3818,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02884bcc(iVar2,param_1,0);
  }
  return iVar2;
}

