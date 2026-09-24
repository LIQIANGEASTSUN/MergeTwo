
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b1c5bc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
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
  
  pcVar8 = (char *)(_UNK_01b1c964 + 0x1b1c5d4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1c968 + 0x1b1c5e8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c96c + 0x1b1c5f4));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c970 + 0x1b1c600));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c974 + 0x1b1c60c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c978 + 0x1b1c618));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c97c + 0x1b1c624));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c980 + 0x1b1c630));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c984 + 0x1b1c63c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c988 + 0x1b1c648));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c98c + 0x1b1c654));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c990 + 0x1b1c660));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c994 + 0x1b1c66c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c998 + 0x1b1c678));
    *pcVar8 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x02953fd4(0x19fc,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01b1c99c + 0x1b1c6f4));
    func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_01b1c9a0 + 0x1b1c708));
    if (*(int *)(**(int **)(_UNK_01b1c9a4 + 0x1b1c71c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01b1c9a8 + 0x1b1c738));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_01b1c9ac + 0x1b1c758));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x134);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x015fcde8(*(undefined4 *)(iVar3 + 0x24),0);
    if ((iVar4 == 0) && (iVar4 = FUN_01b1c4dc(iVar3), iVar4 != 0)) {
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f0ed8(&uStack_58,iVar3,**(undefined4 **)(_UNK_01b1c9b0 + 0x1b1c7c8));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      puVar10 = *(undefined4 **)(_UNK_01b1c9b4 + 0x1b1c7f4);
      while (iVar3 = func_0x015144ec(&uStack_40,*puVar10), uVar1 = uStack_34, iVar3 != 0) {
        iVar3 = (int)uStack_30;
        if (0 < (int)uStack_30) {
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01b1c9b8 + 0x1b1c820));
          func_0x02ca3c70(uVar5,uVar1,iVar3,0,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar2 + 8);
          uVar9 = *(uint *)(iVar2 + 0xc);
          piVar7 = *(int **)(_UNK_01b1c9bc + 0x1b1c870);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar4 = *piVar7;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (uVar9 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar9 + 1;
            puVar6 = (undefined4 *)(iVar3 + uVar9 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x0152874c(iVar2,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x024f0ee8(&uStack_40,**(undefined4 **)(_UNK_01b1c9c0 + 0x1b1c8cc));
    }
  }
  else {
    iVar2 = func_0x029540a4(0x19fc,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02884bcc(iVar2,param_1,0);
  }
  return iVar2;
}

