
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_02be0e98(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  pcVar6 = (char *)(_UNK_02be1100 + 0x2be0eb8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be1104 + 0x2be0ed4));
    func_0x01438628(*(undefined4 *)(_UNK_02be1108 + 0x2be0ee0));
    func_0x01438628(*(undefined4 *)(_UNK_02be110c + 0x2be0eec));
    func_0x01438628(*(undefined4 *)(_UNK_02be1110 + 0x2be0ef8));
    func_0x01438628(*(undefined4 *)(_UNK_02be1114 + 0x2be0f04));
    func_0x01438628(*(undefined4 *)(_UNK_02be1118 + 0x2be0f10));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5d04,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02bad050(param_1,param_4);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x03b780b0(iVar2,param_2,**(undefined4 **)(_UNK_02be111c + 0x2be0fa4));
    *param_3 = uVar3;
    func_0x014385cc(param_3,uVar3);
    iVar2 = FUN_02bad050(param_1,param_4);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x03b77b90(iVar2,param_2,**(undefined4 **)(_UNK_02be1120 + 0x2be0ff8));
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (param_5 != 0) {
      if (*(int *)(**(int **)(_UNK_02be1124 + 0x2be101c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02be1128 + 0x2be1038));
      piVar7 = *(int **)(_UNK_02be112c + 0x2be104c);
      iVar4 = *piVar7;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
        iVar4 = *piVar7;
      }
      iVar8 = **(int **)(_UNK_02be1130 + 0x2be106c);
      iVar5 = *(int *)(iVar8 + 0x1c);
      uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x10);
      if (iVar5 == 0) {
        func_0x014909d8(iVar8);
        iVar5 = *(int *)(iVar8 + 0x1c);
      }
      iVar4 = *(int *)(iVar5 + 8);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x0149097c();
      }
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x0149097c();
      }
      uVar9 = **(undefined4 **)(iVar4 + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      pcVar6 = (char *)(_UNK_02990590 + 0x2990434);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02990594 + 0x2990448),uVar3,uVar9,0);
        func_0x01438628(*(undefined4 *)(_UNK_02990598 + 0x2990454));
        func_0x01438628(*(undefined4 *)(_UNK_0299059c + 0x2990460));
        *pcVar6 = '\x01';
      }
      iVar4 = func_0x02953fd4(0x21f,0);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar2 + 0x14);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x04753c80(iVar4,uVar3,**(undefined4 **)(_UNK_029905a0 + 0x29904d8));
        uVar1 = 0;
        if (iVar4 != 0) {
          iVar4 = *(int *)(iVar2 + 0x14);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          puVar10 = *(undefined4 **)(_UNK_029905a4 + 0x2990510);
          iVar4 = func_0x0475399c(iVar4,uVar3,*puVar10);
          if (iVar4 != 0) {
            uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_029905a8 + 0x2990528));
            func_0x0298fd74(uVar1,uVar3,uVar9);
            iVar2 = *(int *)(iVar2 + 0x14);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x0475399c(iVar2,uVar3,*puVar10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            (**(code **)(iVar2 + 0xc))
                      (*(undefined4 *)(iVar2 + 0x20),uVar1,*(undefined4 *)(iVar2 + 0x14));
            uVar1 = 1;
          }
        }
      }
      else {
        iVar4 = func_0x029540a4(0x21f,0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar1 = func_0x02871898(iVar4,iVar2,uVar3,uVar9,0);
      }
      return uVar1;
    }
  }
  else {
    iVar2 = func_0x029540a4(0x5d04,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x028b6764(iVar2,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar3;
}

